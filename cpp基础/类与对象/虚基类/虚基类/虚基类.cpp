#include<iostream>

using namespace std;

class Obj
{
public:
	int num;
	Obj(int data) :num(data)
	{		cout << "creat obj" << endl;

	}

	Obj() 
	{
		num = 0;
		cout << "creat obj" << endl;

	}
	~Obj()
	{

		cout << "delete Obj" << endl;

	}

};



//���������������ͬһ������,ͬʱ������������Ҫ�ĵĻ������,
//ʹ��������Լ�ڴ�,ֻ����һ�����۶��� ��ֹ�̳й�ϵ�еĶ�����
//�����һ��,�򲻿���

class AObj:virtual public Obj
{

public:

	AObj(int data) :Obj(data)
	{
		cout << "creat Aobj" << endl;
	}

	~AObj()
	{
		cout << "delete AObj" << endl;
	}

};


class BObj :virtual public Obj//�����ʹ�ò����ι����ʼ������
{

public:

	BObj(int data) :Obj(data)
	{
		cout << "creat Bobj" << endl;
	}

	~BObj()
	{
		cout << "delete BObj" << endl;
	}

};


class ABObj :public AObj,public BObj
{

public:

	ABObj(int x, int y) :AObj(x), BObj(y)
	{
		cout << "creat ABobj" << endl;
	}

	ABObj(int z) :AObj(z), BObj(z)//���ݵĲ���һ��,����ʹ�������
	{
		cout << "creat ABobj" << endl;
	}


	~ABObj()
	{
		cout << "deleteA BObj" << endl;
	}

};




void main()
{

	ABObj *p = new ABObj(10);
	//cout << p->num << endl;//num����ȷ

	cout << p->AObj::Obj::num << endl;
	cout << p->BObj::Obj::num << endl;

	delete p;




	system("pause");

}