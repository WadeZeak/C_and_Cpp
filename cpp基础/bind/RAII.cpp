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
		cout << "����" << endl;
		int len=strlen(str);
		p = new char[len + 1];
		strcpy(p, str);
		p[len] = '\0';
	}

	~Myclass()
	{

		cout << "����" << endl;
		delete [] p;

	}


};


void go()
{
	char *p = new char[100];
	Myclass mystr = "ABCD";//RAII�����ڴ�й¶,���ϵ��ڴ浱��ջ��ʹ��


	//ջ�ڴ�����,ϣ���Զ��ͷ�,ͬʱʹ�ýϴ���ڴ�,RAII
}


void main3636()
{

	go();

	cin.get();


}