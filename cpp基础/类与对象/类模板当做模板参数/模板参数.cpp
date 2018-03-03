#include<iostream>
#include<string>

using namespace std;


//类模板当做一个类的参数
//设计STL时会使用到

template<class T>//通用类型的类模板
class Human
{

public:
	T name;

public:
	Human(T t) :name(t)
	{




	}


};



//实现类模板的嵌套
template<template<class T>class TS>//使用类模板当做模板参数的类
class People
{
public:
	TS<string> ts="HelloWorld";//TS必须实例化 必须结合
	TS<string>num = "12345";//等价于Human类型

public:
	/*People(TS<string> tx)
	{
		ts = tx.name;
	}
*/

	People(TS<string> &tx)
	{
		cout << typeid(ts).name() << endl;
		cout << typeid(TS).name() << endl;
		cout <<tx.name<< endl;
		ts = tx;//赋值
		num = tx;
	}
};





void main()
{

	Human<string> h1("Tom");
	People<Human>people(h1);//嵌套的类模板

	cout << h1.name << endl;
	//cout << h1.name << endl;

	//cout << people.num.name << endl;

	//People<Human>people1(h1);

	cout << people.ts.name << endl;
	cout << people.num.name << endl;



	cin.get();



}