#define _CRT_SECURE_NO_WARNINGS //关闭安全检查

#include<stdio.h>
#include<stdlib.h>

void main4()
{
	int num;
	char str[50];
	scanf("%d",&num);//赋值，注意&
	sprintf(str,"for /l %%i in (1,1,%d) do notepad",num);
	//在字符串中，%%相当于%
	//若加上 start，则是并行
	system(str);
	system("pause");
}