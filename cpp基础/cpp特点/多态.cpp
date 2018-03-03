#include<iostream>
#include<stdlib.h>

using namespace std;

class Codject
{
public:
	virtual void Hello()
	{ 
		printf("Hello TianChao\n");
	};

};



class CWorld:public Codject
{
public:
	void Hello()
	{
		cout << "Hello World!!!" << endl;

	}
};


class CChina :public Codject
{
public:
	void Hello()
	{
		cout << "Hello China!!!" << endl;
	}
};


void main()
{
	CWorld hello1;
	hello1.Hello();
	hello1.Codject::Hello();//调用父类   父类::父类的方法


	CChina hello2;
	hello2.Hello();
	hello2.Codject::Hello();

	system("pause");

}

