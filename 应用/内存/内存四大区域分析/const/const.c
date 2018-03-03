#include<stdio.h>
#include<stdlib.h>

#define N 10 //CPU中产生，10->1010,不能取地址

const int num = 10;
//const 伪常量，限定编译器尽量不修改


void main()
{
	//&N;//N不能取地址
	const int a = 100;//const 避免对变量进行直接赋值修改
	int *p = &a;//创建指针指向const int 
	int *p1 = p;
	*p1 = 200;

	printf("%d\n", a);

	getchar();
}