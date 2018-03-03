#include<iostream>

using namespace std;


template<typename T,typename F>
T Run(T t,F f)//包装器,实现一个接口,操作不同的类
{
	return f(t);

}

int add(int num)
{

	return num + 20;

}

class MyClass
{

public:
	int num;
public:
	MyClass(int data) :num(data)
	{



	}

	int operator ()(int X)
	{	
		return X * num;

	}


};

class MyClassA
{

public:
	int num;
public:
	MyClassA(int data) :num(data)
	{



	}

	int operator ()(int X)
	{
		cout << "MyClassA" << endl;
		return X - num;

	}


};






void main()
{

	cout << Run(10, MyClass(5)) << endl;
	cout << Run(110, MyClassA(50)) << endl;
	cin.get();
}




void main1()
{
	auto num = 100;
	auto func = add;

	cout << Run(num, add) << endl;

	system("pause");


}