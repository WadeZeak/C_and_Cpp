#pragma once
#include<iostream>
using namespace std;

class Complex
{
private:
	int x;
	int y;
	mutable int z;//mutable不受const属性的函数的约束

public:
	Complex();
	~Complex();
	void Show();
	inline void  ShowAll(int x, int y);//显式内联
	//内联函数
	/*inline void  ShowAll(int x, int y)
	{
		cout << (this->x = x) << endl;
		cout << (this->y = y) << endl;
	}*/
	void Setxy(int x, int y);//编译器优化，默认为内联,隐式
	void Show(int x, int y) ;

	void Change(int x) const;//加上const 限定函数不能对一般的成员变量进行修改，即没有mutable属性的成员变量
};


//内联函数原则上放在头文件
//VS2013为了内联函数的展开,内联函数只能放在头文件



void  Complex::ShowAll(int x, int y)
{
	cout << (this->x = x) << endl;
	cout << (this->y = y) << endl;
}