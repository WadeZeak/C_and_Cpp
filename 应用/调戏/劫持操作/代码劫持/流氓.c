//劫持失败
//由于宽字节短字节的原因,Hook()函数执行失败 此处为unicode编码

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"detours.h"//载入头文件
#pragma comment(lib, "detours.lib")//表明使用静态库

//函数声明
//static int WINAPI MessageBoxW(//静态，防止影响其他的源文件
//HWND hWnd,
// LPCSTR lpText,
// LPCSTR lpCaption,
// UINT uType);
//WINAPI 类型

//定义函数指针
static int (WINAPI *OldMessageBoxW)(
HWND hWnd,
 LPCSTR lpText,
 LPCSTR lpCaption,
 UINT uType)=MessageBoxW;//保存MessageBoxW地址



int WINAPI NewMessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
{

	printf("执行了一次\n");
	return 0;

};

//开始拦截
void Hook()
{
	DetourRestoreAfterWith();//恢复原有的状态,必须
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程 
	//这里可以连续多次调用DetoursAttach，表明hook多个函数
	DetourAttach((void **)&
		
		OldMessageBoxW, NewMessageBoxW);//实现拦截函数
	//(void **)OldMessageBoxW 改变函数指针类型
	DetourTransactionCommit();//拦截生效

}


//取消拦截
void UnHook()
{
	DetourTransactionBegin();//开始拦截
	DetourUpdateThread(GetCurrentThread());//刷新当前线程
	//这里可以连续多次调用DetourDetach,表明撤销多个函数Hook
	printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourDetach((void **)&OldMessageBoxW, NewMessageBoxW);//撤销拦截函数
	printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourTransactionCommit();//拦截生效


}

void main1()//函数名保留了函数入口点的地址


{
	//printf("%p\n", main);
	printf("%p\n", MessageBoxW);

	MessageBoxW(0,L"锄禾日当午1", L"其实学C并不苦", 0);
	Hook();//由于宽字节短字节的原因,函数执行失败 此处为unicode编码
	printf("%p\n", MessageBoxW);
	MessageBoxW(0, L"锄禾日当午2", L"其实学C并不苦", 0);
	system("pause");
}