#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>



_declspec(dllexport) void goA()//ջ��
{
	while (1)
	{
		int a[10 * 1024];
		Sleep(20);
	}


}


_declspec(dllexport) void goB()//����
{

	while (1)
	{

		malloc(1024 * 1024 * 10);
		Sleep(2000);
	}



}


