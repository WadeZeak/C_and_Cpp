#include<iostream>
#include<stdlib.h>
using namespace std;
//cpp�Ľṹ���п��Զ��庯��,��C������
//struct Cmd
//{
//	char *p;
//
//	void run()
//	{
//		system(p);
//	}
//
//	void print()
//	{
//		cout << p << endl;
//	}
//};
class Cmd
{
public:
	char *p;

public:
	void run()
	{
		system(p);
	}

	void print()
	{
		cout << p << endl;
	}
};



//��ļ̳�
class NewCmd :public Cmd//���м̳�
{
public:
	int GetLen()
	{
		return strlen(this->p); 
	}
};



void main1()
{
	NewCmd cmd;
	cmd.p = "calc";
	cmd.run();
	cmd.print();
cout<<cmd.GetLen()<<endl;
	system("pause");
}