#include<iostream>

using namespace std;

//所有的类默认都有一个构造函数与析构函数
//构造函数可以重载
//构造与析构没有返回值
class MyClass
{
public:
	int num;
	
public:
	MyClass() :num(10)//成员变量初始化 方式2 
	{
		//num = 10;//成员变量初始化 方式1 
		cout << this->num << endl;
		cout << "Creat Class Obj" << endl;
	}

	MyClass(int data)//构造函数重载，初始化成员变量
	{
		this->num = data;
		cout << "Creat Class Obj By Operator" << endl;

	}


	~MyClass()
	{

		cout << "Destroy Class Obj" << endl;
	}



};


void Run()
{

	MyClass myclass1(20);//调用了重载的构造函数
	cout << myclass1.num << endl;
	MyClass myclass2=100;//调用了重载的构造函数
	cout << myclass2.num << endl;

	MyClass *p = new MyClass(102);//调用了重载的构造函数
	cout <<p->num << endl;

	MyClass *px (new MyClass(200));
	cout << (*px).num << endl;
//	px(new MyClass(300));//禁止此操作

}



void main1()
{
	Run();
	int num = 4;
	num = 5;
	int data(4);
	//data( 5);//禁止此操作
	cin.get();

}