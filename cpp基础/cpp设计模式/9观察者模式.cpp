#include <string>
#include <iostream>
#include <vector>
using namespace std;

class SecretaryBase;



//观察者模式,一种一对多的关系的依赖关系

//让多个观察者对象监听某一主题变化,让这个主体在状态上发生变化,会通知所有的观察者对象,让它们自动更新自己



//让多个观察对象（公司员工）同时监听一个主题对象（秘书），主题对象状态发生变化时，会通知所有的观察者，使它们能够更新自己。




//监视者与观察者都以一个基类,派生,实现不同的效果
//监视者的类,管理所有的观察者,增加或者删除,发出消息,让观察者处理
//观察者的类,有一个接口接收消息并实现处理


//抽象观察者  
class CObserverBase
{
protected:
	string name;
	SecretaryBase* sub;
public:
	CObserverBase(string strname, SecretaryBase* strsub)//监视者的名字,监视和通知的类
	{
		name = strname;
		sub = strsub;
	}
	virtual void Update() = 0;//刷新动作函数
};



//具体的观察者，看股票的
class StockObserver : public CObserverBase
{
public:
	StockObserver(string strname, SecretaryBase* strsub) : CObserverBase(strname, strsub)
	{
	}
	virtual void Update();
};

//具体观察者，看NBA的
class NBAObserver : public CObserverBase
{
public:
	NBAObserver(string strname, SecretaryBase* strsub) : CObserverBase(strname, strsub){};
	virtual void Update();
};



//抽象通知者
class SecretaryBase
{
public:
	string action;
	vector<CObserverBase*> observers;//观察者数组
public:
	virtual void Attach(CObserverBase* observer) = 0;
	virtual void Notify() = 0;//实现坚挺的基类
	virtual void Deach(CObserverBase* ob) = 0;
};



//具体通知者
class Secretary :public SecretaryBase
{
public:

	void Attach(CObserverBase* ob)
	{
		observers.push_back(ob);
	}



	void Deach(CObserverBase* ob)//消灭
	{
		vector<CObserverBase*>::iterator iter = observers.begin();
		while (iter!= observers.end())
		{
			if ((*iter)==ob)
			{
				observers.erase(iter);
			}
			iter++;
		}

	}


	void Notify()//通知
	{
		vector<CObserverBase*>::iterator p = observers.begin();
		while (p != observers.end())
		{
			(*p)->Update();
			p++;
		}
	}
};




void StockObserver::Update()
{
	cout << name << ":" << sub->action << ",不要玩股票了，要开始工作了" << endl;
}


void NBAObserver::Update()
{
	cout << name << ":" << sub->action << ",不要看NBA了，老板来了" << endl;
}


//客户端：
int main235253()
{
	SecretaryBase *p = new Secretary();  //创建观察者 负责监视

	//被观察的对象
	CObserverBase *s1 = new NBAObserver("小李", p);//订阅消息
	CObserverBase *s2 = new StockObserver("小赵", p);


	//加入观察队列
	p->Attach(s1);
	p->Attach(s2);

	//事件
	p->action = "老板来了";


	//通知
	p->Notify();
	cin.get();
	return 0;
}



/***********************************************************************************/


