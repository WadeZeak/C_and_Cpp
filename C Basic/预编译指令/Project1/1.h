#include<stdlib.h>
#include<stdio.h>


//int num=10 ;//当头文件多次被包含,会出现重定义错误
//void go()
//{
//
//
//}


//头文件只能存放声明，不能存放定义
int num;
void go();




//使用预编译存放定义，避免重复包含
#ifdef M

#define M
int add(int a, int b)
{
	return a + b;
}

#endif




