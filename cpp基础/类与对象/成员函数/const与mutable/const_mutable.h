#pragma once
#include<iostream>
using namespace std;


class const_mutable
{
public:
	int a;
	int b;
	int c;
	const int d = 20;//���������ʼ��
	mutable int e;//��������const������
public:
	void Getabc(int a,int b,int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void Showabc()const//����const,�޶����Գ�Ա�����޸�
	{
		this->e = 456;
		//this->a = 789;//��������ͨ������������ʡ�a��������޷���������޸�
		cout << this->a << endl;
		cout << this->b << endl;
		cout << this->c << endl;

	}


	const_mutable();
	~const_mutable();
};





