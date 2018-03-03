#include<iostream>
#include <string>
using namespace std;



//外观(门面)模式:外部与一个子系统的通信必须通过一个统一的门面对象完成
//门面模式提供一个高层次的接口,使得系统更易于使用
//每一个子系统只有一个门面类,这个门面类只有一个实例
//也就说单例模式。但是整个系统可以有多个门面类


class SubSysOne
{
public:
	void MethodOne()
	{
		cout << "子系统方法一" << endl;
	}
};

class SubSysTwo
{
public:
	void MethodTwo()
	{
		cout << "子系统方法二" << endl;
	}
};

class SubSysThree
{
public:
	void MethodThree()
	{
		cout << "子系统方法三" << endl;
	}
};

//外观类 统一的接口实现功能  比如QQ开黄钻,可以享受不同的特权
class Facade
{
private:
	SubSysOne* sub1;
	SubSysTwo* sub2;
	SubSysThree* sub3;
public:
	Facade()
	{
		sub1 = new SubSysOne();
		sub2 = new SubSysTwo();
		sub3 = new SubSysThree();
	}

	~Facade()
	{
		delete sub1;
		delete sub2;
		delete sub3;
	}

	void FacadeMethod()
	{
		sub1->MethodOne();
		sub2->MethodTwo();
		sub3->MethodThree();
	}
};

//客户端
int main37473736()
{
	Facade* test = new Facade();
	test->FacadeMethod();
	return 0;
}
