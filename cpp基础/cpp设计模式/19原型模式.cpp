#include<iostream>
#include <vector>
#include <string>
using namespace std;


//原型模式允许动态的增加或者减少产品类
//产品类不需要非得有任何事先确定的等级结构
//原始模型模式适用与任何的等级结构
//缺点:每一个类都必须配备一个克隆的方法


//原型模式:通过给出一个原型对象来说明需要创建的对象的类
//型,然后用复制这个原型对象的方法创建发更多同类型的对象


class Prototype //抽象基类 
{
private:
	string m_strName;
public:
	Prototype(string strName){ m_strName = strName; }
	Prototype() { m_strName = " "; }
	void Show()
	{
		cout << m_strName << endl;
	}
	virtual Prototype* Clone() = 0;
};


// class ConcretePrototype1 
class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1(string strName) : Prototype(strName){}
	ConcretePrototype1(){}

	virtual Prototype* Clone()
	{
		ConcretePrototype1 *p = new ConcretePrototype1();
		*p = *this; //复制对象 
		return p;
	}
};

// class ConcretePrototype2 
class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2(string strName) : Prototype(strName){}
	ConcretePrototype2(){}

	virtual Prototype* Clone()
	{
		ConcretePrototype2 *p = new ConcretePrototype2();
		*p = *this; //复制对象 
		return p;
	}
};

//客户端
int main而委托()
{
	ConcretePrototype1* test = new ConcretePrototype1("小王");
	ConcretePrototype2* test2 = (ConcretePrototype2*)test->Clone();
	test->Show();
	test2->Show();
	return 0;
}





/*****************************************************************************/



class Rusume//原型  简历原型
{
private:
	string name, sex, age, timeArea, company;

public:
	Rusume(string str)
	{
		this->name = str;
	}

	void setPersonalInfo(string a, string s)
	{
		this->sex = s;
		this->age = a;
	}

	void setWorkExperience(string t, string c)
	{
		this->company = c;
		this->timeArea = t;

	}

	void display()
	{

		cout << name << " " << age << " " << sex << " ";
		cout << timeArea << " " << company << endl;

	}


	Rusume *clone()//克隆
	{

		Rusume *b=new Rusume(name);

		b->setPersonalInfo(age, sex);
		b->setWorkExperience(timeArea, company);
		return b;
	}



};


int mainodngosdhnbo()
{

	Rusume *p1 = new Rusume("李彦宏");
	p1->setPersonalInfo("30", "Man");
	p1->setWorkExperience("2000-2016", "Baidu");


	Rusume *p2 = p1->clone();//传递克隆
	p2->setWorkExperience("1999-2005", "研究生");

	p1->display();
	p2->display();
	
	cin.get();
	return 0;


}


