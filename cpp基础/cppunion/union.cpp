#include<iostream>

using namespace std;


//C++11的union本质也是一个类，内部也可以有函数
//union内部数据是共享的，不同对象之间是独立的，代码是共享的
//union可以具备结构体的的所有功能


union MyUnion
{
	int a;
	int num;
	double db;
	void gogo()//代码区,不计入大小
	{
		cout << "Hello World" << endl;
	}
};

//union 不能实现继承，由于n内部数据的空间是共享的
//
//union MyUnionA:public MyUnion
//{
//	
//};


void main()
{


	cout << sizeof(MyUnion) << endl;;//8Byte

	MyUnion union1;

	union1.a = 10;
	cout << union1.num << endl;

	union1.db = 11.11;
	cout << union1.num << endl;

	union1.gogo();
	cin.get();
}