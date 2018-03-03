#include<iostream>
#include<stdlib.h>


using namespace std;

class MyClass
{

private:
	int num;
	double db;
public:
	void Show()
	{
		cout << "Hello World!!" << endl;

	}

};


class	Havi
{
private:
	MyClass *p;
	void friend FriendFun(Havi *pf);//友元函数，声明有friend，定义类的外包时就不需要加friend
	//友元函数可已定义在类的内部	

	void Go()
	{
		system("calc");

	}


};


//友元函数与类无关，开辟一个类与外部通信的接口

void FriendFun(Havi *pf)//友元函数,访问私有变量
{
	pf->p = new MyClass;
	pf->p->Show();
	pf->Go();//友元函数可以访问私有函数

}




void main()
{
	Havi my1;
	//my1.p;
	FriendFun(&my1);

	cin.get();


}