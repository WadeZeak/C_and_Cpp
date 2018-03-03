
#include <string>
#include <iostream>
#include <vector>

using namespace std;


//在当创建复杂对象的算法应该独立于该对象的组成部分以及它们的装配方式时适用。

//建造者模式:将产品的内部表象与产品的生产过程分割开,
//从而使一个建造过程生成具有不同内部表象的产品对象

//建造者模式使得产品的内部表象可以独立的变化,客户不必知道产品内部的组成细节
//建造者模式可以强制实现一种分步骤进行的建造过程


class Person//抽象类,预留的接口 不能创建对象,但是可以创建对象指针
{
public:
	virtual void CreateHead() = 0;
	virtual void CreateHand() = 0;
	virtual void CreateBody() = 0;
	virtual void CreateFoot() = 0;
};


//瘦子
class ThinPerson : public Person//抽象向类的实例就是类
{
public:
	virtual void CreateHead()
	{
		cout << "thin head" << endl;
	}

	virtual void CreateHand()
	{
		cout << "thin hand" << endl;
	}

	virtual void CreateBody()
	{
		cout << "thin body" << endl;
	}
	virtual void CreateFoot()
	{
		cout << "thin foot" << endl;
	}
};




//胖子
class ThickPerson : public Person
{
public:
	virtual void CreateHead()
	{
		cout << "ThickPerson head" << endl;
	}
	virtual void CreateHand()
	{
		cout << "ThickPerson hand" << endl;
	}
	virtual void CreateBody()
	{
		cout << "ThickPerson body" << endl;
	}
	virtual void CreateFoot()
	{
		cout << "ThickPerson foot" << endl;
	}
};


//指挥者类
class Director
{
private:
	Person* p;//基类(抽象类)的指针
public:
	Director(Person* temp) { p = temp; }
	void Create()
	{
		p->CreateHead();
		p->CreateBody();
		p->CreateHand();
		p->CreateFoot();
	}
};

//客户端代码：
int main2123424()
{
	Person *p = new ThickPerson();//造人
	Director *d = new Director(p);
	d->Create();
	delete d;
	delete p;

	cin.get();
	return 0;
}


/******************************************************************************************************/



class Product;


//建造者基类
class Builder
{
public:
	virtual void BuilderA() = 0;
	virtual void BuilderB() = 0;
	virtual Product* GetResult() = 0;
};

//最终的产品类
class Product
{
private:
	vector<string> m_product;
public:
	void Add(string strtemp)
	{
		m_product.push_back(strtemp);
	}
	void Show()
	{
		vector<string>::iterator p = m_product.begin();
		while (p != m_product.end())
		{
			cout << *p << endl;
			p++;
		}
	}
};



//第一种建造方式
class ConcreteBuilder1 : public Builder
{
private:
	Product* m_product;
public:
	ConcreteBuilder1()
	{
		m_product = new Product();
	}
	virtual void BuilderA()
	{
		m_product->Add("one");
	}
	virtual void BuilderB()
	{
		m_product->Add("two");
	}
	virtual Product* GetResult()
	{
		return m_product;
	}
};
//第二种建造方式
class ConcreteBuilder2 : public Builder
{
private:
	Product * m_product;
public:
	ConcreteBuilder2()
	{
		m_product = new Product();
	}
	virtual void BuilderA()
	{
		m_product->Add("A");
	}
	virtual void BuilderB()
	{
		m_product->Add("B");
	}
	virtual Product* GetResult()
	{
		return m_product;
	}
};

//指挥者类
class Direct
{
public:
	void Construct(Builder* temp)
	{
		temp->BuilderA();
		temp->BuilderB();
	}
};

//客户端
int main2222()
{
	Direct *p = new Direct();
	Builder* b1 = new ConcreteBuilder1();
	Builder* b2 = new ConcreteBuilder2();

	p->Construct(b1); //调用第一种方式
	Product* pb1 = b1->GetResult();
	pb1->Show();

	p->Construct(b2);          //调用第二种方式
	Product * pb2 = b2->GetResult();
	pb2->Show();
	return 0;
}


/*****************************************************************************************/





