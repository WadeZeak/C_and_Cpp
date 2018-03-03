#include<iostream>

using namespace std;

class MyClass
{
public:
	int num;

public:
	static void calc()//静态成员函数
	{

		system("calc");
	}

	 void notepad()//普通成员函数
	{
		 system("notepad");

	}
};





void main()
{
	MyClass myclass1;
	
	myclass1.notepad();
	myclass1.calc();
	//MyClass::notepad();//非静态函数成员必须与对象相对
	
	MyClass::calc();//静态函数成员不需要实体即可调用
	cin.get();


}

