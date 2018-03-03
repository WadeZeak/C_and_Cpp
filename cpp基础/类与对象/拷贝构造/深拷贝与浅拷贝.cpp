
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<memory>

using namespace std;


class String
{
public:
	char *p;
	int len;

public:
	String(int size,char *str)
	{
		len = size;
		p = new char[len];
		memset(p, 0,len);
		strcpy(p, str);
	}

	String(const String &string1)
	{
		cout << "调用复制构造" << endl;
	//	this -> p= string1.p;////浅复制,复制的地址
		this->len = string1.len;
		this->p = new char[this->len];//深拷贝，拷贝的内容
		memset(this->p, 0, this->len);
		strcpy(this->p, string1.p);
	}

	~String()
	{
		delete[] p;
	}

};




void main10()
{

	String string1(10, "Hello");
	String string2(string1);//复制构造函数
	cout << string1.p << endl;

	cout << string2.p << endl;


	cin.get();
}

void mainddd()
{

	String *pstr1 = new String(10, "Hello");
	cout << pstr1->p << endl;
	String *pstr2=new String(*pstr1);

	delete pstr1;//释放pstr1
	cout << pstr2->p << endl;
	cin.get();

}