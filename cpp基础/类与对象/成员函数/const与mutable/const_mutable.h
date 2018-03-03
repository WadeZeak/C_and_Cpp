#pragma once
#include<iostream>
using namespace std;


class const_mutable
{
public:
	int a;
	int b;
	int c;
	const int d = 20;//常量必须初始化
	mutable int e;//不被函数const所限制
public:
	void Getabc(int a,int b,int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void Showabc()const//函数const,限定不对成员变量修改
	{
		this->e = 456;
		//this->a = 789;//由于正在通过常量对象访问“a”，因此无法对其进行修改
		cout << this->a << endl;
		cout << this->b << endl;
		cout << this->c << endl;

	}


	const_mutable();
	~const_mutable();
};





