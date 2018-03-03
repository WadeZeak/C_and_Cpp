#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//
_declspec(dllexport) void go()
{
	
		MessageBoxA(0, "HelloWorld!!!", "Test", 1);
		SystemParametersInfoA(20, 0, "C:\\Users\\Zeak_K\\Desktop\\3.jpg", 3);
		system("E:\\CloudMusic\\azusa.mp3");

}