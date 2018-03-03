#include<iostream>


using namespace std;


//静态成员变量提供了一个同类对象的共享机制
//一个类的静态成员变量被创建,一个类的所有对象都会访问该静态变量
//静态成员变量属于类,它不是对象成员





class String
{
public:
	int len;
	char str[100];
};






class MyClass
{
public:
	String *p;
	static int count;//静态成员变量


public:

	MyClass()
	{
		if (count>4)
		{
			cout << "创建次数已经达到上限,不可创建" << endl;

		}
		else
		{
			p = new String;
			count++;

		}

	}
	
	~MyClass()
	{
		delete p;
	}

};



int MyClass::count = 0;//静态成员变量初始化



void main()
{

	MyClass *myclass = new MyClass;
	cout << myclass->count << endl;
	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}


	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}

{

	MyClass *myclass = new MyClass;
	cout << myclass->count << endl;

}

	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}

	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}

	cin.get();
}