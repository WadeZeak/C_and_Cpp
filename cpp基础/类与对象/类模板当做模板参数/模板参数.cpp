#include<iostream>
#include<string>

using namespace std;


//��ģ�嵱��һ����Ĳ���
//���STLʱ��ʹ�õ�

template<class T>//ͨ�����͵���ģ��
class Human
{

public:
	T name;

public:
	Human(T t) :name(t)
	{




	}


};



//ʵ����ģ���Ƕ��
template<template<class T>class TS>//ʹ����ģ�嵱��ģ���������
class People
{
public:
	TS<string> ts="HelloWorld";//TS����ʵ���� ������
	TS<string>num = "12345";//�ȼ���Human����

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
		ts = tx;//��ֵ
		num = tx;
	}
};





void main()
{

	Human<string> h1("Tom");
	People<Human>people(h1);//Ƕ�׵���ģ��

	cout << h1.name << endl;
	//cout << h1.name << endl;

	//cout << people.num.name << endl;

	//People<Human>people1(h1);

	cout << people.ts.name << endl;
	cout << people.num.name << endl;



	cin.get();



}