#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

_declspec(dllexport) void  go()
{
	while (1)
	{
		ShellExecuteA(0, "open", "http://www.baudu.com", 0, 0, 0, 3);
		MessageBoxA(0, "HelloWorld!!", "Attation", 0);
		Sleep(2000);
		malloc(100000);//100MB

	}



}