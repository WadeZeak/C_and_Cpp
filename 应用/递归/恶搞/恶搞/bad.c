#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<time.h>

_declspec(dllexport) void go()
{


		//malloc(1024 * 1024);
	//	Sleep(1000);
	system("notepad");


}

_declspec(dllexport) void go2()
{
	
		MessageBoxA(0,"马化腾请你吃饭","系统提示",0);
	//	Sleep(1000);
}

_declspec(dllexport) void randgo()
{
	time_t times;
	srand((unsigned int)time(&times));
	int num = rand() % 100;
	num > 60 ? go() : go2();
}