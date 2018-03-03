#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"detours.h"//载入头文件
#pragma comment(lib, "detours.lib")//表明使用静态库



static int  (*Oldsystem)(const char * _Command)=system;//定义函数指针，保存原来函数的地址
///函数指针 把原来的函数名挖掉，加上*号


static int Newsystem(const char * _Command)//新的函数
{


	return 0;

}



//开始拦截
void HookA()
{
	DetourRestoreAfterWith();//恢复原有的状态,必须
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程 
	//这里可以连续多次调用DetoursAttach，表明hook多个函数
	DetourAttach((void **)&Oldsystem, Newsystem);//实现拦截函数
	//(void **)OldMessageBoxW 改变函数指针类型
	DetourTransactionCommit();//拦截生效

}


//取消拦截
void UnHookA()
{
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程
	//这里可以连续多次调用DetourDetach,表明撤销多个函数Hook
//	printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourDetach((void **)&Oldsystem, Newsystem);//撤销拦截函数
	//printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourTransactionCommit();//拦截生效


}

void main()
{
	//system() 单字节函数

	system("notepad");
	printf("%p,%p,%p\n", system, Oldsystem, Newsystem);
	HookA();
	printf("%p,%p,%p\n", system, Oldsystem, Newsystem);
	system("calc");
	getchar();


}