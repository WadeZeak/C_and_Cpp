#include<iostream>

using namespace std;



class MyClass
{
public:

	 virtual void run()// “virtual”不能和“static”一起使用
	{

	}

	 virtual inline void Go()//inline  可以和virtual 一起是使用
	 {

	 }

	 virtual ~MyClass() = 0;//析构函数可以是纯虚函数，如果不是虚函数,则会造成内存泄漏问题

};




void main345345()
{


	int i = ~1;
	cout << i << endl;


	cin.get();
}