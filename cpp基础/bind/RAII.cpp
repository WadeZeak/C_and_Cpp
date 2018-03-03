#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<stdlib.h>
#include<string>


using namespace std;


class Myclass
{

public:

	char *p = nullptr;
public:
	Myclass(const char *str)
	{
		cout << "构建" << endl;
		int len=strlen(str);
		p = new char[len + 1];
		strcpy(p, str);
		p[len] = '\0';
	}

	~Myclass()
	{

		cout << "销毁" << endl;
		delete [] p;

	}


};


void go()
{
	char *p = new char[100];
	Myclass mystr = "ABCD";//RAII避免内存泄露,堆上的内存当作栈上使用


	//栈内存有限,希望自动释放,同时使用较大的内存,RAII
}


void main3636()
{

	go();

	cin.get();


}