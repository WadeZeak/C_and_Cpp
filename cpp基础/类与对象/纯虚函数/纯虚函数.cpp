#include<iostream>

using namespace std;


//抽象类作为一个接口
class Base
{

public:
	//纯虚函数有无定义均可以
	virtual void run() = 0 //加上 =0 限定一个类不能实例化
	{
		cout << "Hello World!!" << endl;

	}

	virtual ~Base()
	{
		cout << "Delete Base " << endl;
	}

};

//抽象类不可用于函数参数以及函数返回类型,而抽象类指针可以
//Base *test()
//{
//
//	Base *pbase;
//	return pbase;
//}


class Boy : public Base
{

public:
	void run()
	{
		cout << "Boy Run" << endl;
	}


};

class Girl :public Base
{

public:
	void run()
	{
		cout << "Girl Run" << endl;
	}


};

void main()
{

	//Base base;////抽象类无法实例化对象,但可以实例化指针
	//	Base *pbase=new Boy;

	//纯虚函数与抽象类都起到了接口的作用
	//用同一个接口实现不同的功能
	//纯虚函数弯曲那就是为了接口存在,有了纯虚函数的类无法实例化

	//虚函数占了4字节,本质上就是指针


	Base *pb(nullptr);
	Boy boy;
	Girl girl;

	pb = &boy;
	pb->run();

	pb = &girl;
	pb->run();


	system("pause");

}