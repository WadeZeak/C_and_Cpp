#include <iostream>

using namespace std;


//基类在派生类中的重载

class AAA
{

public:
	void GoA()
	{
		cout << "A----GoA()" << endl;
	}

	void Go(int num)
	{
		cout << "A----Go( int)" << endl;
	}


	void Go(char *str)
	{
		cout << "A----Go(char *)" << endl;
	}





};


class BBB:public AAA
{

public:

	mutable int num;//允许const 函数修改
	void Go()
	{
		cout << "B----Go()" << endl;

	}

	//const函数一般适用于常量对象
	//而非const一般适用于变量对象 


	void Go()const
	{
		cout << "B----Go() const" << endl;

	}


};


void main()
{
	BBB *pb = new BBB;
	pb->Go();

	const BBB *pbc = new BBB;
	pbc->Go();


	system("pause");
}


void main1()
{
	BBB *pb = new BBB;

	pb->GoA();
	//派生类的会覆盖基类中的同名函数
	//即使参数类型一样,不能直接调用基类的函数,需要明确对象

	pb->AAA::Go(NULL);
	pb->AAA::Go(nullptr);//C++空指针不能打印,而C语言可以




	system("pause");


}