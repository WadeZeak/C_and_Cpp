#include<iostream>
#include<string>
#include"Array.cpp"
#include"Array.h"



using namespace std;


void main1()
{
	
	string country[5] = { "China", "The U.S.A", "Britain", "Australia", "France" };
	Array<string,5>strarr(5);//����5��Ԫ�ص�����

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




  
//��ģ����Ϊ�βο�������ģ���������ģ�������
//����ʵ�ʲ�����������ģ���ʵ��������

template<class T,int n>
void Show(Array<T, n> &myarr)//��ģ����Ϊ����,��Ҫ��ȷ���� ��Ҫʵ����
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