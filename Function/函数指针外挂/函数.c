#include<stdlib.h>
#include<stdio.h>


_declspec(dllexport) void go()
{
	//函数指针类型必须一致，否则无法调用
	//int **p 去掉变量，便是类型
	void(*p)(int a) = (void(*)(int a))0x010810EB;
	void(*p1)() = (void(*)())0x0108111D;
	p(20);
	p1();
}