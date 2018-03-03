#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<string.h>

#include"detours.h"//载入头文件
#pragma comment(lib, "detours.lib")//表明使用静态库



//保留函数指针地址
BOOL (WINAPI *POLDCreateProcessW)
(
 LPCWSTR lpApplicationName,
 LPWSTR lpCommandLine,
 LPSECURITY_ATTRIBUTES lpProcessAttributes,
 LPSECURITY_ATTRIBUTES lpThreadAttributes,
 BOOL bInheritHandles,
 DWORD dwCreationFlags,
 LPVOID lpEnvironment,
 LPCWSTR lpCurrentDirectory,
 LPSTARTUPINFOW lpStartupInfo,
 LPPROCESS_INFORMATION lpProcessInformation
)=CreateProcessW;


BOOL  NEWCreateProcessW(
	LPCWSTR lpApplicationName,
	LPWSTR lpCommandLine,
	LPSECURITY_ATTRIBUTES lpProcessAttributes,
	LPSECURITY_ATTRIBUTES lpThreadAttributes,
	BOOL bInheritHandles,
	DWORD dwCreationFlags,
	LPVOID lpEnvironment,
	LPCWSTR lpCurrentDirectory,
	LPSTARTUPINFOW lpStartupInfo,
	LPPROCESS_INFORMATION lpProcessInformation
	)
{
	MessageBoxA(0, "你的保护费没交，不能创建进程", "警告", 0);
	return 0;
};




//开始拦截
void Hook()
{
	DetourRestoreAfterWith();//恢复原有的状态,必须
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程 
	//这里可以连续多次调用DetoursAttach，表明hook多个函数
	DetourAttach((void **)&POLDCreateProcessW, NEWCreateProcessW);//实现拦截函数
	//(void **)OldMessageBoxW 改变函数指针类型
	DetourTransactionCommit();//拦截生效

}

//取消拦截
void UnHook()
{
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程
	//这里可以连续多次调用DetourDetach,表明撤销多个函数Hook
	DetourDetach((void **)&POLDCreateProcessW, NEWCreateProcessW);//撤销拦截函数
	DetourTransactionCommit();//拦截生效


}
_declspec(dllexport) void go()
{
	Hook();
	int i = 0;

	while (1)
	{
		if (i == 120)
		{
		
			break;
			UnHook();
		}
		Sleep(1000);
			i++;
	}



}