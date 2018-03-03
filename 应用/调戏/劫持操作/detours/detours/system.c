
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#include"detours.h"//载入头文件
#pragma comment(lib, "detours.lib")//表明使用静态库


int  (*poldsystem)( const char * _Command)=system;

//禁止
int  newsystem(const char * _Command)
{
	
	printf("%s", _Command);
	return 0;
};


//过滤
//禁止执行tasklist
int  newsystemA(const char * _Command)
{

	char *p=strstr(_Command,"tasklist");
	if (p == NULL)
	{
		poldsystem(_Command);
	
	}
	else
	{
		printf("%s禁止执行", _Command);
		return 0;

	}
	
};

//开始拦截
void Hook()
{
	DetourRestoreAfterWith();//恢复原有的状态,必须
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程 
	//这里可以连续多次调用DetoursAttach，表明hook多个函数
	DetourAttach((void **)&poldsystem, newsystemA);//实现拦截函数
	//(void **)OldMessageBoxW 改变函数指针类型
	DetourTransactionCommit();//拦截生效

}


//取消拦截 
void UnHook()
{
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程
	//这里可以连续多次调用DetourDetach,表明撤销多个函数Hook
	DetourDetach((void **)&poldsystem, newsystemA);//撤销拦截函数	
	DetourTransactionCommit();//拦截生效


}



void main()
{
	system("calc");
	Hook();
	system("calc");
	system("tasklist");
	getchar();

}