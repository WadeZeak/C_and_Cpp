#include<iostream>

using namespace std;

class Complex
{
public:

	int x=10;
	int y=20;

public:
	void Show()
	{
		cout << "x=" << this->x << '\t';
		cout << "y=" << this->y << endl;
	}


};



class MyClass
{
public:

	Complex *p[5];//ָ������,ÿһ��Ԫ����һ��ָ��
	MyClass()
	{
		for (int  i = 0; i < 5; i++)
		{
			p[i] = new Complex;
			p[i]->Show();
		}

	}


	~MyClass()
	{
		for (int i = 0; i < 5; i++)
		{
			delete p[i];
		}


	}

};


void main()
{





}