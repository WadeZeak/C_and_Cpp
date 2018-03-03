#include<iostream>
#include<stdlib.h>

using namespace std;

//左值就是可以放在赋值号左边被赋值的值
//右值就是放在赋值号右边去取出值给其他变量的值
//右值可以在寄存器，也可以在内存


void main()
{

	int a = 5;
	int b;

	cout << &a << endl;
	cout << &b << endl;

		b = a + 1;//a+1,a+2(右值)在寄存器，a,b(左值)在内存

		b= a + 2;





	system("pause");
}

