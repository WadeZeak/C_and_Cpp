#include <iostream>
#include <string>
#include <vector>
using namespace std;

//合成模式(组合模式):合成模式将对象组织到树结构中,可以用来保存部分与整体的关系
//合成模式就是一个处理对象的树的结构的模式。合成模式将备份与整体的关系树表示出来
//合成模式让客户端将一个个单独的对象和它们复合而成对象同等看待







class Component//成分
{
public:
	string m_strName;
	Component(string strName)
	{
		m_strName = strName;
	}
	virtual void Add(Component* com) = 0;
	virtual void remove(Component *com) = 0;
	virtual void Display(int nDepth) = 0;
};



//叶子
class Leaf : public Component
{
public:
	Leaf(string strName) : Component(strName){}

	virtual void Add(Component* com)//增加
	{
		cout << "leaf can't add" << endl;
	}

	virtual void remove(Component *com)
	{
		cout << "leaf can't remove" << endl;
	}

	virtual void Display(int nDepth)
	{
		string strtemp;
		for (int i = 0; i < nDepth; i++)
		{
			strtemp += "-";
		}
		strtemp += m_strName;
		cout << strtemp << endl;
	}
};


//混合
class Composite : public Component
{
private:
	vector<Component*> m_component;
public:
	Composite(string strName) : Component(strName){}

	virtual void Add(Component* com)
	{
		m_component.push_back(com);
	}

	virtual void remove(Component *com)
	{

		vector<Component *>::iterator iter = m_component.begin();

		while (iter!=m_component.end())
		{
			if (*iter==com)
			{
				m_component.erase(iter);
			}
			iter++;
		}
		
	}


	virtual void Display(int nDepth)
	{

		string strtemp;
		for (int i = 0; i < nDepth; i++)
		{
			strtemp += "-";
		}
		strtemp += m_strName;
		cout << strtemp << endl;

		vector<Component*>::iterator p = m_component.begin();
		while (p != m_component.end())
		{
			(*p)->Display(nDepth + 2);//Leaf::Dispaly
			
			p++;
		}
	}

};

//客户端
int main()
{
	Composite* p = new Composite("小王");//根
	p->Add(new Leaf("小李"));//叶子1
	p->Add(new Leaf("小赵"));//叶子1

	Composite* p1 = new Composite("小小五");//叶子1
	p1->Add(new Leaf("大三"));//叶子1-1-2

	p->Add(p1);
	p->Display(0);


	cin.get();
	return 0;
}
