#include<iostream>
#include<stdlib.h>
using namespace std;
//cpp的结构体中可以定义函数,而C不可以
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



//类的继承
class NewCmd :public Cmd//公有继承
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