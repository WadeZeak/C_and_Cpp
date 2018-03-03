#include <iostream>
#include <string>
#include <vector>
#include<map>

using namespace std;

//享元模式:FLYWEIGHT在全集中指最轻量级
//享元模式以共享的方式高效的支持大量的细粒度的对象
//享元模式能做大共享的关键是能够区分内蕴状态与外蕴状态
//内蕴状态存储在享元的内部,不会随环境的改变而不同
//外蕴状态会随着环境的改变而改变.外蕴状态不会影响内蕴状态
//它们是相互独立的。将可以共享的状态和不可以共享的状态从常规类中区分开来
//将不可以共享的状态从类剔除。客户端不可以直接创建被共享的对象
//应该使用一个工厂对象负责创建被共享的对象
//享元模式大幅度降低了内存中对象的数量







class Context;
class AbstractExpression
{
public:
	virtual void Interpret(Context* context) = 0;
};

class Expression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "终端解释器" << endl;
	};
};

class NonterminalExpression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "非终端解释器" << endl;
	}
};

class Context
{
public:
	string input;
	string output;
};

//客户端
int main32342()
{
	Context* context = new Context();
	vector<AbstractExpression*> express;
	express.push_back(new Expression());
	express.push_back(new NonterminalExpression());
	express.push_back(new NonterminalExpression());

	vector<AbstractExpression*>::iterator p = express.begin();
	while (p != express.end())
	{
		(*p)->Interpret(context);
		p++;
	}

	return 0;
}


/*******************************************************************************/


//享元模式一般适用于映射关系



class WebSite
{
public:
	virtual void use() = 0;//预留接口,实现功能
};



class ConcreteWebSite :public WebSite//共享类
{

private:
	string name;
public:
	ConcreteWebSite(string str) :name(str){}//实例化
	void use()
	{
		cout << "网站分类" << name << endl;

	}
};

class WebSiteFactory//创建共享对象
{

private:
	map<string, WebSite*>wf;//映射,存储对象

public:
	WebSite *getWebSiteCategory(string key)
	{
		if (wf.find(key)==wf.end())//不存在
		{
			wf[key] = new ConcreteWebSite(key);//创建映射
		}
		return wf[key];
	}

	int getWebSiteCount()
	{

		return wf.size();
	}


};


int main36464()
{
	WebSiteFactory *wf = new WebSiteFactory();

	WebSite *fx = wf->getWebSiteCategory("good");
	fx->use();

	WebSite *fy1 = wf->getWebSiteCategory("产品展示");
	fy1->use();
	WebSite *fy2 = wf->getWebSiteCategory("产品展示");//重复的对象不再被创建
	fy2->use();

	WebSite *fz1 = wf->getWebSiteCategory("博客");
	fz1->use();
	WebSite *fz2 = wf->getWebSiteCategory("博客");
	fz2->use();

	cout << wf->getWebSiteCount() << endl;
	cin.get();
	return 0;

}


