#include<iostream>

using namespace std;


//被友元
class AAA
{
	friend  class BBB;//友元类BBB
private:
	int num;
	void Display()
	{
		cout << num << endl;
	}
};





class BBB
{

private:
	AAA *Aobj;//创建类AAA的对象指针，可以访问类AAA的所有私有成员或者函数,不是友元，则不能访问

public:
	void Init()
	{
		Aobj = new AAA;	//指针必须初始化，必须分配内存，否则便是野指针，程序可会挂掉

	}

	void Set(int i)
	{
		Aobj->num = i;
	}

	void Display()
	{

		Aobj->Display();
	}


};



void main()
{

	BBB Bobj;
	Bobj.Init();
	Bobj.Set(10);
	Bobj.Display();
	cin.get();





}