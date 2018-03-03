#include <string>
#include <iostream>
using namespace std;


//代理模式:给一个对象提供一个代理对象,并由代理对象控制对源对象的引用
//代理就是一个人或者一个机构代表另一个人或者一个机构采取行动
//某些情况下,客户不想或者不能够引用一个对象,代理可以在对象与目标之间起到中介作用
//客户端分辨不出来代理主题对象还是真实主题对象
//代理可以不知道真正的被代理对象,而仅仅持有一个被代理对象的接口,此时,代理对象不能创建被代理对象
//而代理对象需要系统的其他角色代为创建并转入







/*
				远程代理，可以隐藏一个对象在不同地址空间的事实
　　　　　　　虚拟代理：通过代理来存放需要很长时间实例化的对象
　　　　　　　安全代理：用来控制真实对象的访问权限
　　　　　　　智能引用：当调用真实对象时，代理处理另外一些事
*/

//定义接口
class Interface
{
public:
	virtual void Request() = 0;
};
//真实类
class RealClass : public Interface
{
public:
	virtual void Request()
	{
		cout << "真实的请求" << endl;
	}
};
//代理类
class ProxyClass : public Interface
{
private:
	RealClass* m_realClass;
public:
	virtual void Request()
	{
		m_realClass = new RealClass();
		m_realClass->Request();
		delete m_realClass;
	}
};

//客户端：
int main6546()
{
	ProxyClass* test = new ProxyClass();
	test->Request();
	return 0;
}


/******************************************************************************************/



class SchoolGirl
{
public:
	string name;
};




class IGiveGift
{
public:
	virtual void GiveDolls()=0;
	virtual void GiveFlowers()=0;

};


class Pursuit :public IGiveGift
{

private:
	SchoolGirl MM;

public:
	Pursuit(SchoolGirl sg)
	{
		MM = sg;
	}

	void GiveDolls()
	{
		cout << "赠送洋娃娃" << endl;
	}

	void GiveFlowers()
	{
		cout << "赠送鲜花" << endl;

	}

};

class Proxy:public IGiveGift
{

private:
	Pursuit gg;
public:

	Proxy(SchoolGirl mm) :gg(mm)
	{


	}

	void GiveDolls()
	{
		gg.GiveDolls();
	}

	void GiveFlowers()
	{
		gg.GiveFlowers();
	}

};







void mainhgkgk()
{


	SchoolGirl girl1;
	girl1.name = "Joanna";
	Pursuit middleman(girl1);
	Proxy agent(girl1);


	
	agent.GiveDolls();
	

	system("pause");


}