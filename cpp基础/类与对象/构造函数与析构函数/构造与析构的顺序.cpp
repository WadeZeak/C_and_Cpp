#include<iostream>

using namespace std;


//系统会自动生成构造与析构函数

//类包含其他类的对象
//被包含的先构造,包含的之后被构造
//包含的先析构,被包含的之后被析构

class	Complex
{

public:
	Complex();
	~Complex();
};

Complex:: Complex()
{
	cout << "Creat Complex" << endl;

}


Complex::~Complex()
{
	cout << "Destroy Complex" << endl;
}




class Math
{

public:
	Complex complex1;
	
public:
	Math()
	{
		cout << "Creat Math" << endl;
	}

	~Math()
	{

		cout << "Destroy Math" << endl;

	}
};



void Go()
{
	Math math;
}


void main2()
{
	Go();//Complex的构造-->Math的构造-->Math的析构-->Complex的析构

	cin.get();
}