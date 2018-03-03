#include <vector>
#include <string>
#include<iostream>

using namespace std;

//模板方法模式
//把不变的代码部分都转移到父类中，将可变的代码用virtual留到子类重写

//模板方法模式:模板方法模式准备一个抽象类,将部分逻辑以具体方法和具体构造子的
//形式实现,然后声明一些抽象方法来迫使子类实现剩余的逻辑
//不同的子类可以以不同的方式来实现这些抽象方法,从而对剩余的逻辑有不同的实现
//现制定一个顶级逻辑框架,而将具体的细节留给子类去实现

//同一原型在不同的情况下使用不同的方法

class AbstractClass//原型
{
public:
	void Show()
	{
		cout << "我是" << GetName() << endl;
	}
protected:
	virtual string GetName() = 0;
};



class Naruto : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "火影史上最帅的七代目---一鸣惊人naruto";
	}
};




class OnePice : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "我是无恶不做的大海贼---路飞";
	}
};



//客户端
int mainxxxx()
{
	Naruto* man = new Naruto();
	man->Show();

	OnePice* man2 = new OnePice();
	man2->Show();

	cin.get();
	return 0;
}
