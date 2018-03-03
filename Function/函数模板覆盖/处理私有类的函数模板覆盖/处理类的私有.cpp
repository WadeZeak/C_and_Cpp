#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;


//如果类有私有成员变量，此时不能用{ }初始化 


//类的对象之间默认是可以直接赋值的
//类与结构体的成员都有一个默认赋值 =  浅拷贝 ,交换数据
//深拷贝的用得最多是在函数模板的覆盖

class MyClass
{
public://默认是私有类型
	char name[10];
	double db;
	char *p;

private:
	int num;

public:
	void Set(int x)//通用接口,实现私有变量初始化
	{
		this->num = x;
	}

	int Get()//返回值,副本机制   通用接口,私有变量赋值时会调用
	{
		//cout << "调用了Get()函数" << endl;
	return	this->num;

	}
};



//对象之间的赋值属于浅拷贝
template < typename T >
void Swap(T &a, T &b)//通用函数模板
{
	cout << "通用函数模板" << endl;
	T temp = a;
	a = b;
	b = temp;

}



//对象之间的赋值属于浅拷贝
template<>
void Swap(MyClass &info1, MyClass &info2)//实现函数模板覆盖 覆盖通用类型
{

	cout << "特有函数模板" << endl;
	//特有函数模板可以针对自己的数据类型做出优化

	//可计数计数器
	MyClass temp = info1;
	info1 = info2;	
	info2 = temp;
//	free(temp.name);
}


//函数对一个对象进行深拷贝，需要一个特有函数模板的实现函数模板覆盖


void main()
{
	MyClass info1;
	MyClass info2;
	//info1.name = "abcd";//语句错误 复无法从const char 转换为 char  即"abcd"市场量，无法向变量赋值
	strcpy(info1.name, "abcd");
	strcpy(info2.name, "hijk");
	info1.db = 12.3;
	info2.db = 45.6;

	info1.p = new char[10];
	info1.p = "World";

	//info1.p = nullptr;//C++的空指针
	
	info2.p = new char[20];
	info2.p = "ChinaZZ";

	info1.Set(10);
	info2.Set(20);



	Swap(info1, info2);

	cout << "info1" << endl;
	cout << info1.name << endl;
	cout << info1.db << endl;
	cout << info1.p << endl;
	cout << info1.Get() << endl;
	cout << endl;

	cout << "info2" << endl;
	cout << info2.name << endl;
	cout << info2.db << endl;

//	cout << info2.p << endl;

	cout << info2.Get() << endl;

	cin.get();//getchar()

}