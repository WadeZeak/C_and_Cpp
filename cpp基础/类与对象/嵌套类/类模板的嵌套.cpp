#include<iostream>

using namespace std;


template<class T>
class MyClass
{

public:
	class NewClass
	{
	public:
		int num;
	}newclass;//普通类可以直接定义

	template<class S>
	class RunClass
	{
	public:
		S s1;
	};//类模板后面不能直接初始化
	RunClass<T>t1;
	RunClass<double>t2;


};



void main()
{
	MyClass<int> myclass;
	myclass.newclass.num = 10;

	myclass.t1.s1 = 10;
	myclass.t2.s1 = 10.5;

	cout << myclass.t1.s1 << "\t" << myclass.t2.s1 << endl;

	cin.get();
}