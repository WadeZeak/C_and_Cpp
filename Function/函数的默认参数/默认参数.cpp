#include<stdlib.h>
#include<stdio.h>
#include<iostream>


using namespace std;
//C语言中不支持形参赋值，而C++可以
void print(int c,int a = 1, int b = 2 )//需要将默认参数放在非默认参数右边,同时默认参数需要连续排列，不能中断
{

	//printf("%d\n", a);
	cout << a <<b<<c<< endl;
}


//
//void print(int c)//函数调用不明确
//{
//
//	cout << c << endl;
//
//
//}

void print(double c)
{

	cout << c << endl;


}



void main()
{

	//print(10);//同类型参数.调用不明确
	//函数重载与函数默认参数冲突,需要你输入的参数类型不一样，个数不一样，顺序不一样不会出现问题，否则一定报错



	void(*p1)(int, int, int) = print;
	p1(100, 45, 513);//函数指针没有默认参数，需要全部输入相应的参数
	
	print(100);//默认调用第一个参数是int类型的print函数

	system("pause");
}