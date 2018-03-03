#include<iostream>

using namespace std;


class MyClassA
{
public:
	int a;
	int b;
public:
	//如果已经声明或者定义了构造与拷贝构造函数，编译器不会再生成构造与拷贝构造，此时需要自己实现
	MyClassA()//原生构造
	{

	}

	//MyClassA(const MyClassA &ca)
	//{


	//}
	//拷贝构造的规则
	MyClassA(int x, int y) //:a(x), b(y)
	{
		/*this->a = x;
		this->b = y;*/
	}

	void print()
	{
		cout << this->a << endl;
		cout << this->b<< endl;

	}

};







void main1()
{
	//编译器会生成默认的构造与拷贝构造函数
	MyClassA myclassA1(10,100);
	MyClassA myclassA2(myclassA1);//用myclassA1对myclassA2初始化 此时调用了默认的拷贝构造

	myclassA1.print();
	myclassA2.print();

	cin.get();
}


