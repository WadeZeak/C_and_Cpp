#include <string>
#include <iostream>
using namespace std;



//装饰模式:装饰模式可以以对客户透明的方式拓展对象的功能
//是继承关系的替代方案,提供比继承更多的灵活性
//动态给一个增加功能,这些功能可以再动态的撤销
//增加由一些基本功能的排列组合而产生的非常大量的功能


///当你向旧的类中添加新代码时，一般是为了添加核心职责或主要行为。
//而当需要加入的仅仅是一些特定情况下才会执行的特定的功能时
//（简单点就是不是核心应用的功能），就会增加类的复杂度。
//装饰模式就是把要添加的附加功能分别放在单独的类中，并让这个类包
//含它要装饰的对象，当需要执行时，客户端就可以有选择地、按顺序地使用装饰功能包装对象。




//人
class Person//原型类
{
private:
	string m_strName;
public:
	Person(string strName)
	{
		this->m_strName = strName;
	}
	Person(){}

	virtual void Show()
	{
		//cout << "Hello World" << endl;
		cout << "装扮的是:" << m_strName << endl;
	}



};


//装饰类
class Finery :public Person
{
protected:
	Person* m_component;//存储原型类的地址
public:

	Finery(Person *component) :m_component(component){}

	virtual void Show()
	{
		m_component->Show();

	}

};


//T恤
class TShirts : public Finery//实现包装,对原型类进行操作
{
public:

	TShirts(Person *component) :Finery(component){}

	virtual void Show()
	{
		m_component->Show();
		cout << "T Shirts" << endl;
	}


};


//裤子
class BigTrouser :public  Finery
{
public:
	BigTrouser(Person *component) :Finery(component){}

	virtual void Show()
	{
		m_component->Show();
		cout << " Big Trouser" << endl;
	}
};


//客户端
int main456475747()

{
	Person *p = new Person("小李");

	p->Show();

	//Person *bt = new BigTrouser(p);//装饰
	/////	Person *ts = new TShirts(bt);//装饰

	//	ts->Show();

	cin.get();
	return 0;
}
