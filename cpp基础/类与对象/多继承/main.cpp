#include<iostream>
#include<stdlib.h>


using namespace std;


class AAA
{




};

class  BBB
{






};




class MyClass1
{

public:
	void Run(char *cmd)
	{

		system(cmd);
	}

	MyClass1()
	{
		cout << "Creat MyClass1 Obj" << endl;
	}

	~MyClass1()
	{
		cout << "Delete MyClass1 Obj" << endl;

	}

};


class MyClass2
{

public:
	int Add(int a, int b)
	{
		return a +b;

	}

	MyClass2()
	{

		cout << "Creat MyClass2 Obj" << endl;
	}

	~MyClass2()
	{
		cout << "Delete MyClass2 Obj" << endl;

	}

};



//多继承
class MyClass :public MyClass1, public MyClass2,public AAA,public BBB
{
public:
	void Show(char *str)
	{
		cout << str << endl;
	}

	MyClass()
	{
		cout << "Creat MyClass Obj" << endl;

	}

	~MyClass()
	{

		cout << "Delete MyClass Obj" << endl;
	}
};




void main2()
{


	//构造顺序 MyClass1 --> MyClass2 -->MyClass 
	MyClass *p = new MyClass;

	//先创建的一定不会依赖后面创建的,而后创建的不一定会依赖先创建的，所以先创建的后销毁

	//析构顺序 MyClass -->MyClass2 --> MyClass 1
	delete p;
	system("pause");

}



void main1()
{


	MyClass myclass;

	myclass.Show("123456");

	myclass.Run("calc");
	myclass.MyClass1::Run("notepad");

	cout << myclass.Add(10, 20) << endl;
	cout << myclass.MyClass2::Add(40, 50) << endl;

	system("pause");





}