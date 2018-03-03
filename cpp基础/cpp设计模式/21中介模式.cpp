#include <iostream>
#include <string>
#include <vector>
using namespace std;



//medtator:调停者模式
//调停者模式:调停者模式包装了一系列对象相互作用的方式
//使得这些对象不必相互明显作用,从而使它们可以松散偶合
//当某些对象之间的作用发生改变时，不会立即影响其他对象之间的作用,保证这些作用可以彼此独立的变化
//调停者模式将多对多的相互作用转化为一对多的相互作用
//调停者模式将对象的行为和作用抽象化,把对象在小尺度的行为上与其他对象的相互作用分开处理
//




class Colleague;
//中介者类
class Mediator
{
public:
	virtual void Send(string message, Colleague* col) = 0;
};
//抽象同事类
class Colleague
{
protected:
	Mediator* mediator;
public:
	Colleague(Mediator* temp)
	{
		mediator = temp;
	}
};
//同事一
class Colleague1 : public Colleague
{
public:
	Colleague1(Mediator* media) : Colleague(media){}

	void Send(string strMessage)
	{
		mediator->Send(strMessage, this);
	}

	void Notify(string strMessage)
	{
		cout << "同事一获得了消息" << strMessage << endl;
	}
};

//同事二
class Colleague2 : public Colleague
{
public:
	Colleague2(Mediator* media) : Colleague(media){}

	void Send(string strMessage)
	{
		mediator->Send(strMessage, this);
	}

	void Notify(string strMessage)
	{
		cout << "同事二获得了消息" << strMessage << endl;
	}
};

//具体中介者类
class ConcreteMediator : public Mediator
{
public:
	Colleague1 * col1;
	Colleague2 * col2;
	virtual void Send(string message, Colleague* col)
	{
		if (col == col1)
			col2->Notify(message);
		else
			col1->Notify(message);
	}
};

//客户端：
int main555555555555()
{
	ConcreteMediator * m = new ConcreteMediator();

	//让同事认识中介
	Colleague1* col1 = new Colleague1(m);
	Colleague2* col2 = new Colleague2(m);

	//让中介认识具体的同事类
	m->col1 = col1;
	m->col2 = col2;

	col1->Send("吃饭了吗？");
	col2->Send("还没吃，你请吗？");
	return 0;
}


/**********************************************************************/

class Country;



class UnionNations
{
public:
	virtual void declare(string message, Country *colleage) = 0;

};



class Country
{

protected:
	UnionNations *mediator;

public:
	Country(UnionNations *Temp) :mediator(Temp){ }

};




class USA :public Country
{

public:
	USA(UnionNations *miator) :Country(miator){}
	void declare(string message)
	{
		mediator->declare(message, this);
	}

	void GetMessage(string message)
	{

		cout << "美国获得消息" << " " << message << endl;
	}

};



class Iraq :public Country
{

public:
	Iraq(UnionNations *miator) :Country(miator){}

	void declare(string message)
	{
		mediator->declare(message, this);
	}

	void GetMessage(string message)
	{

		cout << "伊拉克获得消息" << " " << message << endl;
	}



};

class UnitedNationsSecuretyCouncil :public UnionNations//中介者
{
public:
	USA *usa;
	Iraq *iraq;

public:

	void declare(string message, Country *colleage)
	{
		if (colleage==usa)
		{
		iraq->GetMessage(message);
		}
		else
		{
			usa->GetMessage(message);
		}

	}


};



void mainzzzzzzzzzzzzz()
{

	UnitedNationsSecuretyCouncil *unsc = new UnitedNationsSecuretyCouncil();

	USA *c1 = new USA(unsc);
	Iraq *c2 = new Iraq(unsc);

	unsc->usa = c1;
	unsc->iraq = c2;



	c1->declare("伊拉克不准开发核武器");
	c2->declare("美国滚蛋");

	cin.get();


}





