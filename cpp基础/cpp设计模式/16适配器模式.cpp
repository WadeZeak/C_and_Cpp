#include <iostream>
#include<string>

using namespace std;


//适配器(变压器)模式:把一个类的接口变成客户端所期望的另一种接口,从而使
//原本因接口不匹配原因而无法一起工作的两个类可以一起工作
//适配器了可以根据参数返还一个合适的实例给客户端






class Target
{
public:
	virtual void Request()
	{
		cout << "普通的请求" << endl;
	}
};

class Adaptee
{
public:
	void SpecificalRequest()
	{
		cout << "特殊请求" << endl;
	}
};


//为特殊请求翻译
class Adapter :public  Target
{
private:
	Adaptee* ada;
public:
	virtual void Request()
	{
		ada->SpecificalRequest();
		Target::Request();
	}
	Adapter()
	{
		ada = new Adaptee();
	}
	~Adapter()
	{
		delete ada;
	}
};



//客户端：
int mainjvgs346()
{
	Adapter * ada = new Adapter();
	ada->Request();
	delete ada;

	cin.get();
	return 0;
}





/**********************************************************************************/




class Player
{
protected:
	string name;
public:
	Player(string strName) { name = strName; }
	virtual void Attack() = 0;//进攻
	virtual void Defense() = 0;//防守
};


//前锋
class Forwards : public Player
{
public:
	Forwards(string strName) :Player(strName){}
public:
	virtual void Attack()
	{
		cout << name << "前锋进攻" << endl;
	}
	virtual void Defense()
	{
		cout << name << "前锋防守" << endl;
	}
};


//中场
class Center : public Player
{
public:
	Center(string strName) :Player(strName){}
public:
	virtual void Attack()
	{
		cout << name << "中场进攻" << endl;
	}
	virtual void Defense()
	{
		cout << name << "中场防守" << endl;
	}
};


//后场
class Backwards:public Player
{

public:
	Backwards(string str) :Player(str){}

	virtual void Attack()
	{
		cout << name << "后场进攻" << endl;
	}
	virtual void Defense()
	{
		cout << name << "后场防守" << endl;
	}

};


/////////////////////////////////////////////////////////////

//外籍中场球员
class ForeignCenter
{

public:
	string name;
public:
	ForeignCenter(string strName) :name(strName){}
	 void MyAttack()//操作
	{
		cout << name << "外籍中锋进攻" << endl;
	}
	 void MyDefense()
	{
		cout << name << "外籍后卫防守" << endl;
	}
};


///////////////////////////////////////////////////////////////



//为外籍球员翻译
class TransLater : public Player//适配器 实现接口的转换,从而完成对接 
{
private:
	ForeignCenter *fc;//完成转换
public:
	TransLater(string strName) :Player(strName)
	{
		fc = new ForeignCenter(strName);
	}
	virtual void Attack()
	{
		fc->MyAttack();
	}
	virtual void Defense()
	{
		fc->MyDefense();
	}
};










//客户端
int main34593485093()
{


	Player *p1 = new Center("小李");
	p1->Attack();
	p1->Defense();


	TransLater *p2 = new TransLater("姚明");
	p2->Attack();
	p2->Defense();

	cin.get();

	return 0;
}
