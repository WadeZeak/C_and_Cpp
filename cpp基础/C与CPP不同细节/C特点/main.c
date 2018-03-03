#include<stdio.h>
#include<stdlib.h>


//C语言不会进行左值与右值的自动转换
void main()
{

	//-1 ? system("calc") : system("mspaint");

	int numA = 5 < 3 ? 10 : 20;
	printf("%d\n", numA);

	int a = 3;
	//(a = 3) = 5;//在C语言中不合法，在C++中合法
	////a=3 右值,不允许进行操作

	int b = 7;
	//(a > b ? a : b) = 10;//在C语言中不合法，在C++中合法
	
	//(++a)++;//在C语言中不合法，在C++中合法


	register int num = 10;//寄存器变量
	//C语言寄存器变量不能取地址
	//printf("%p\n", &num);

	system("pause");
}



//C语言的全局变量有声明与定义的差别
//C语言允许操作
//以下均为声明
int a;
int a;
int a;
int a;
int a;
int a;
//C语言的静态全局变量有声明与定义的差别
static int b;
static int b;



//报错 应输入形参表
//void test(int x, double, char)//出错，C++中允许
//{
//
//
//}