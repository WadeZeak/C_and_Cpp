#include<iostream>
#include<array>
#include<string>
#include"MyArray.h"


//��ģ���Ա����û��ʵ����,�����������Զ���Ѱ��,��Ҫ�ֶ�����
#include"MyArray.cpp" //��Ҫ������ģ���Ա������ʵ��


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