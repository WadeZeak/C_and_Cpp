#include <iostream>
#include <string>
#include <vector>
using namespace std;



//适用于数据结构稳定的系统。它把数据结构和作用于数据结构上的操作分离开，使得操作集合
//优点：新增加操作很容易，因为增加新操作就相当于增加一个访问者，访问者模式将有关的行为集中到一个访问者对象中



//访问者模式:访问者模式的目的是封装一些施加于数据结构元素之上的操作
//一旦这些元素需要修改的话,接受这个操作的数据结构不会发生变化

//访问者模式适用于数据结构相对稳定的系统 
//它把数据结构与作用于结构之上的操作耦合开,使得操作可以相对自由的演化
//访问者模式使得增加操作比较容易,增加操作就是增加一个新的访问者类

//访问者模式将有关的行为放在一个访问者的对象中,而不是分散到一个个节点类中
//当使用访问者模式时,应该将尽可能多的对象浏览逻辑放在访问者类中,而不是放在它的子类中
//访问者模式可以跨越几个类的等级结构访问不同等级结构的成员类




class Man;
class Woman;


//行为
class Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA) = 0;
	virtual void GetWomanConclusion(Woman* concreteElementB) = 0;
};


//成功
class Success : public Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA)
	{
		cout << "男人成功时，背后有个伟大的女人" << endl;
	}
	virtual void GetWomanConclusion(Woman* concreteElementB)
	{
		cout << "女人成功时，背后有个没用的男人" << endl;
	}
};



//失败
class Failure : public Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA)
	{
		cout << "男人失败时，背后有个伟大的女人" << endl;
	}
	virtual void GetWomanConclusion(Woman* concreteElementB)
	{
		cout << "女人失败时，背后有个没用的男人" << endl;
	}
};


//抽象人类
class Person
{
public:
	virtual void Accept(Action* visitor) = 0;
};

//男人
class Man : public Person
{
public:
	virtual void Accept(Action* visitor)
	{
		visitor->GetManConclusion(this);
	}
};

//女人
class Woman : public Person
{
public:
	virtual void Accept(Action* visitor)
	{
		visitor->GetWomanConclusion(this);
	}
};



//对象结构类
class ObjectStructure
{
private:
	vector<Person*> m_personList;

public:
	void Add(Person* p)
	{
		m_personList.push_back(p);
	}


	void Display(Action* a)
	{
		vector<Person*>::iterator p = m_personList.begin();
		while (p != m_personList.end())
		{
			(*p)->Accept(a);
			p++;
		}
	}
};

//客户端
int main65475757()
{
	ObjectStructure * os = new ObjectStructure();
	os->Add(new Man());
	os->Add(new Woman());

	Success* success = new Success();
	os->Display(success);

	Failure* fl = new Failure();
	os->Display(fl);

	return 0;
}
