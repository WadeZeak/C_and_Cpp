#include<iostream>

using namespace std;

class GoodClass
{
public:
	int num=1;//默认初始化,C++11
	const int data=90;

public:
	static void Show(GoodClass good1)//static 无法直接访问类内部成员变量，需要明确对象才行
	{
		cout << good1.num << '\t';
		cout <<good1. data << endl;
	}
};



//类中的const默认数值可以修改，类似于C语言

void main()
{

	GoodClass good1;
	GoodClass::Show(good1);

	const int *p = &(good1.data);
	int *px = const_cast<int *>(p);
	*px = 100;
	GoodClass::Show(good1);
	cin.get();

}