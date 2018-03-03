#include<iostream>
#include<string>
#include"Array.cpp"
#include"Array.h"



using namespace std;


void main1()
{
	
	string country[5] = { "China", "The U.S.A", "Britain", "Australia", "France" };
	Array<string,5>strarr(5);//构造5个元素的数组

	for (int i=0; i < strarr.size(); i++)
	{
		strarr.set( country[i],i);
		cout << strarr.get(i) << endl;
	}
	
	system("pause");

}

void main2()
{
	Array<int,5>intarr(5);
	for (int i = 0; i < intarr.size(); i++)
	{
		intarr.set(i+3, i);
		cout << intarr.get(i) << endl;
	}

	system("pause");



}

void main3()
{
	Array<int, 5>intarr;
	for (int i = 0; i < intarr.size(); i++)
	{
		intarr.set(i + 3, i);
		//cout << intarr.get(i) << endl;
		cout << intarr[i] << endl;
	}

	system("pause");

}




  
//类模板作为形参可以是类模板或者是类模板的引用
//但是实际参数必须是类模板的实例化对象

template<class T,int n>
void Show(Array<T, n> &myarr)//类模板作为参数,需要明确类型 需要实例化
{

	
	for (int  i = 0; i < myarr.size(); i++)
	{
		cout << myarr[i] << endl;
	}



}



void main()
{
	Array<int, 5>intarr;
	for (int i = 0; i < intarr.size(); i++)
	{
		intarr.set(i + 3, i);
		//cout << intarr.get(i) << endl;
	//	cout << intarr[i] << endl;
	}

	Show(intarr);


	system("pause");

}