#include<stdlib.h>
#include<stdio.h>

//全局变量可以重定义
//变量声明，所以可以重复
//声明与变量的差别
//声明，说明存在；定义，开辟实体
//int a;
//int a;

int add(int a, int b);//函数声明可以有多个

//C语言可以不进行函数声明，系统可以自动找到函数
//C++则不可以，否则报错，为找到标识符
void main()
{


	printf("%d", add(1, 2));
	system("pause");



}


//函数实体只能有1个
int add(int a, int b)//函数定义，在内存中开辟实体
{

	return a + b;
}