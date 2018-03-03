#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>//标准库
#include<stdio.h>

#define Pi 3.14159



//代码重用，	函数的诞生，C语言主要是函数组成
//写C语言，就是写函数
//主要是代码重用，模块化（便于定位错误）， 
//函数就是对某一特定功能的抽象
void printR(double R)
{
	printf("球体体积:%.2f\n", 4 / 3 * Pi*R*R*R);

	printf("球体面积:%.2f", 4 * Pi*R*R);

}

void maindd()
{
	double x;
	scanf("%lf", &x);
	printR(x);

	system("pause");

}