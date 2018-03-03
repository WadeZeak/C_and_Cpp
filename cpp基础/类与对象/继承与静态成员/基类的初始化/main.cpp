#include<iostream>

using namespace std;

class MyClass
{
public:

	MyClass() :x(0)//无参构造 初始化
	{
	//	x = 0;

		cout << "MyClass Init without parameter" << endl;
	}

	MyClass(int num) :x(num)
	{
		cout<<"MyClass Init with parameter" << endl;
	}

	
private:
	//int x=0;//初始化
	int x;
};


class SonClass:public MyClass
{
public:
	SonClass() //:MyClass(10)
	{
		cout << "SonClass Init without parameter" << endl;


	}
	
	//调用含参构造,初始化基类成员
	SonClass(int num) :MyClass(num), z(num + 1), y(num+2)
	{

		cout << "SonClass Init with parameter" << endl;

	}

	int z;
	int y;


};




void main()
{

//	MyClass *p = new MyClass;
//	SonClass *ps = new SonClass;
	SonClass *ps = new SonClass(10);//选定构造函数

	cin.get();

}




