#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<Windows.h>


//面向过程的模式
//代码的重用主要靠函数
//权限管理问题,实现比较麻烦


void OpenPro(const char *exe,int mode)//打开进程 mode 模式
{
	ShellExecuteA(0, "open", exe, 0, 0, mode);
}


void AllProcess()
{
	system("tasklist");
}


void CloseProcessbByName(const char *name)//通过名称关闭应用
{
	char cmdstr[100] = { 0 };//预留缓冲区
	sprintf(cmdstr, "taskkill /f /im %s", name);//拼接成命令
	system(cmdstr);
}


void CloseProcessbByPID(const int pid)//通过进程号(PID)关闭应用
{
	char cmdstr[100] = { 0 };//预留缓冲区
	sprintf(cmdstr, "taskkill /pid  %d ", pid);
	system(cmdstr);
}



void main1()
{

	AllProcess();
	OpenPro("notepad", 1);
	AllProcess();
	Sleep(2000);
	//CloseProcessbByName("notepad.exe");

	int pid;
	scanf("%d", &pid);
	CloseProcessbByPID(pid);

	system("pasue");
}


//复数 a+bi 
struct Complex //复数
{
	int a;
	int b;
};


struct Complex addComplex(struct Complex complex1, struct Complex complex2)
{
	
	struct Complex complex3;
	complex3.a = complex1.a + complex2.a;
	complex3.b = complex1.b + complex2.b;

	return complex3;

}



void main2()
{

	//数据可以随便被访问，随便被修改
	struct Complex complex1 = { 3, 4 };
	struct Complex complex2 = { 30, 40 };
	//complex1.a = 100;//修改数据
	struct Complex complex3 = addComplex(complex1, complex2);;
	printf("%d+%di", complex3.a, complex3.b);
	getchar();
}