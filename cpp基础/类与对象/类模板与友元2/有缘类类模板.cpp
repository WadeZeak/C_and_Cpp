#include<iostream>

using namespace std;

//必须声明模板类与友元模板类
template<class T>class MyClass;
template<class T>class friendclass;

template<class T>
class MyClass
{

private:
	T x;
	//int y;//访问与类模板类型无关的成员,需要普通有友元类;否则需要类模板友元
public:
	MyClass(T a) :x(a)
	{

	}

	friend class friendclass<T>;//声明友元类
	//友元类必须声明类的存在
	//声明有友元类,必须与类型密切相关

};

template<class T>
class friendclass
{

public:
    void display(MyClass<T> const &myclass)//尽量用引用
	{
		cout << myclass.x << endl;

	}


};




void main()
{

	MyClass<double> myclass(10.8);
	friendclass<double>friend1;
	friend1.display(myclass);
	cin.get();


}