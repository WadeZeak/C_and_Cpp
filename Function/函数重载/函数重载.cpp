#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

//C原因不支持函数重载
//C++可以实现重载

//参数的个数，类型，顺序不同，与返回值无关


//void go(int a,int b)
//C++   go_int_int
//C语言 _go





void go(int a)
{
	cout << a << endl;
}


void go(double a)//参数类型不同
{

	cout << a << endl;
}


void go(int a, double b)//参数数量不同
{

	cout << a << endl;
	cout << b<< endl;
}


void go(double b, int a)//参数数顺序不同
{

	cout << a  << endl;
	cout << b << endl;
}


void main()
{

	/*go(10);
	go(10.0, 20);
*/

	//根据参数类型匹配
	//委托，根据参数类型委托不同的参数
	void(*pgo1)(int ) = go;
	void(*pgo2)(double) = go;
	void(*pgo3)(int,double) = go;
	void(*pgo4)(double,int) = go;


	printf("pgo1=%p\n",pgo1);
	printf("pgo2=%p\n", pgo2);
	printf("pgo3=%p\n", pgo3);
	printf("pgo4=%p\n", pgo4);



	system("pause");
}


