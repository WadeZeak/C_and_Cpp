#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>



void main9()
{ 

	ShellExecuteA(0, "open", "notepad", 0, 0,0);
	//0 隐藏；1 正常；3 最大化 ；6 最小化
}


void main8()
{
	while (1)
	{
		char str[50];
		sprintf(str, "%c%c%c%c%c%3c%c%c%c", 's', 't', 'a', 'r', 't', 'c', 'a', 'l', 'c');
		system(str);
		Sleep(2000);
	}

}


void main7()
{

	char str[50];
	//printf("%c%c%c%c", 'c', 'a', 'l', 'c');
	//sprintf(str, "%c%c%c%c", 'c', 'a', 'l', 'c');
	//sprintf(str, "echo %s", "北京欢迎您");
	sprintf(str, "%c%c%c%c%s%s", 'e', 'c', 'h', 'o',"  ","HelloWorld");
	system(str);
	system("pause");

}