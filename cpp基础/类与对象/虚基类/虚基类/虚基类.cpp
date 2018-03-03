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



//多个派生类派生于同一个基类,同时两个派生类需要的的基类对象,
//使用虚基类节约内存,只产生一个积累对象 防止继承关系中的二义性
//如果不一样,则不可以

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


class BObj :virtual public Obj//虚基类使用不带参构造初始化基类
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

	ABObj(int z) :AObj(z), BObj(z)//传递的参数一样,可以使用虚基类
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
	//cout << p->num << endl;//num不明确

	cout << p->AObj::Obj::num << endl;
	cout << p->BObj::Obj::num << endl;

	delete p;




	system("pause");

}