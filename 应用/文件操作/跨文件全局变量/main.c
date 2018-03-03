#include<stdlib.h>
#include<stdio.h>


int ab;
int ab;
int ab;//全局变量没有定义，编译器会将最后一个声明进行定义，初始化为0

void main()
{
	printf("%d\n", ab);

	getchar();
}