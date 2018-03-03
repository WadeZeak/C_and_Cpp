#include<iostream>
#include<array>
#include<string>
#include"MyArray.h"


//类模板成员函数没有实例化,编译器不会自动化寻找,需要手动包含
#include"MyArray.cpp" //需要包含类模板成员函数的实体


using namespace std;


void main()
{


	//MyArray<int>myarr1;

	MyArray<> myarr2;


}







void main1()
{

	array<string, 5>arrstr = {"calc","notepad","mspaint","tasklist","pause"};


	for (int i = 0; i < arrstr.size(); i++)
	{
		cout << arrstr[i] << endl;
	}



	system("pause");


}