#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void main77()
{
	while (1)
	{
		char str[50];
		gets(str);//用gets()方式初始化str
		system(str);
	}

}


void main11()
{

	puts("HelloWorld!!");
	puts("HelloWorld!!");//puts输出，自动换行
	printf("HelloWorld!!");
	printf("HelloWorld!!");
	system("pause");
}