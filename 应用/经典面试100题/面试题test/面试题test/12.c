#include<stdio.h>
#include<stdlib.h>


void main12()
{
	int a = 248;
//	b = 4;//被禁止 未定义类型
	int const c = 21;
	const int *d = &a;//在有些情况下，变量的地址不能给指向常量的地址赋值 例如cpp
//	int * const e = &b;
	//int const *f const = &a;//被禁止
}