#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


#include"detours.h"//载入头文件
#pragma comment(lib, "detours.lib")//表明使用静态库

int(*poldsystem)(const char * _Command) = system;

//禁止
int  newsystem(const char * _Command)
{

	printf("%s", _Command);
	return 0;
};


void Hook()
{
	DetourRestoreAfterWith();//恢复原有的状态,必须
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程 
	//这里可以连续多次调用DetoursAttach，表明hook多个函数
	DetourAttach((void **)&poldsystem, newsystem);//实现拦截函数
	//(void **)OldMessageBoxW 改变函数指针类型
	DetourTransactionCommit();//拦截生效

}


_declspec(dllexport) void go()
{
	//MessageBoxA(0, "禁止启用", "提示", 0);
	Hook();


}