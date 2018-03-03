#include <iostream>
#include <string>
#include <vector>
using namespace std;

//�ϳ�ģʽ(���ģʽ):�ϳ�ģʽ��������֯�����ṹ��,�����������沿��������Ĺ�ϵ
//�ϳ�ģʽ����һ�������������Ľṹ��ģʽ���ϳ�ģʽ������������Ĺ�ϵ����ʾ����
//�ϳ�ģʽ�ÿͻ��˽�һ���������Ķ�������Ǹ��϶��ɶ���ͬ�ȿ���







class Component//�ɷ�
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



//Ҷ��
class Leaf : public Component
{
public:
	Leaf(string strName) : Component(strName){}

	virtual void Add(Component* com)//����
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


//���
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

//�ͻ���
int main()
{
	Composite* p = new Composite("С��");//��
	p->Add(new Leaf("С��"));//Ҷ��1
	p->Add(new Leaf("С��"));//Ҷ��1

	Composite* p1 = new Composite("СС��");//Ҷ��1
	p1->Add(new Leaf("����"));//Ҷ��1-1-2

	p->Add(p1);
	p->Display(0);


	cin.get();
	return 0;
}
