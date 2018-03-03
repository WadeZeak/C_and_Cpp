#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void main()
{


	int a;

	scanf("%d", &a);
	printf("%f,%d",a, a);//printf() 第一个打印的字符格式不匹配，之后的结果都会错误
	system("pause");
}