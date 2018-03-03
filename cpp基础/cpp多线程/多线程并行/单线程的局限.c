#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<process.h>


struct Mystruct
{
	int num;
	double x;

}test = {0,0};





void run(void *p)
{
	int *px = (int *)p;//指针类型转换
	char str[100] = { 0 };
	sprintf(str,"线程%d启动\n", *px);
	MessageBoxA(0, str, "多线程", 0);
}






void mainQQ()
{

	//同步
	//并行
	for (int  i = 0; i < 5; i++)
	{
		//run(NULL);
		_beginthread(run, 0, &i);
		Sleep(10);
	}
//_beginthread()
	//第1个参数:起始地址
	//第2个参数:栈区大小 0 默认,1M
	//第3个参数:相应的参数地址


	system("pause");

}


void main11()
{
	//阻碍模式
	//单线程  
	//一个一个打开对话框
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);

	//断点后必须有代码

	system("pause");
}