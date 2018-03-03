#include <iostream>
#include <string>
#include <vector>
using namespace std;



//���������ݽṹ�ȶ���ϵͳ���������ݽṹ�����������ݽṹ�ϵĲ������뿪��ʹ�ò�������
//�ŵ㣺�����Ӳ��������ף���Ϊ�����²������൱������һ�������ߣ�������ģʽ���йص���Ϊ���е�һ�������߶�����



//������ģʽ:������ģʽ��Ŀ���Ƿ�װһЩʩ�������ݽṹԪ��֮�ϵĲ���
//һ����ЩԪ����Ҫ�޸ĵĻ�,����������������ݽṹ���ᷢ���仯

//������ģʽ���������ݽṹ����ȶ���ϵͳ 
//�������ݽṹ�������ڽṹ֮�ϵĲ�����Ͽ�,ʹ�ò�������������ɵ��ݻ�
//������ģʽʹ�����Ӳ����Ƚ�����,���Ӳ�����������һ���µķ�������

//������ģʽ���йص���Ϊ����һ�������ߵĶ�����,�����Ƿ�ɢ��һ�����ڵ�����
//��ʹ�÷�����ģʽʱ,Ӧ�ý������ܶ�Ķ�������߼����ڷ���������,�����Ƿ�������������
//������ģʽ���Կ�Խ������ĵȼ��ṹ���ʲ�ͬ�ȼ��ṹ�ĳ�Ա��




class Man;
class Woman;


//��Ϊ
class Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA) = 0;
	virtual void GetWomanConclusion(Woman* concreteElementB) = 0;
};


//�ɹ�
class Success : public Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA)
	{
		cout << "���˳ɹ�ʱ�������и�ΰ���Ů��" << endl;
	}
	virtual void GetWomanConclusion(Woman* concreteElementB)
	{
		cout << "Ů�˳ɹ�ʱ�������и�û�õ�����" << endl;
	}
};



//ʧ��
class Failure : public Action
{
public:
	virtual void GetManConclusion(Man* concreteElementA)
	{
		cout << "����ʧ��ʱ�������и�ΰ���Ů��" << endl;
	}
	virtual void GetWomanConclusion(Woman* concreteElementB)
	{
		cout << "Ů��ʧ��ʱ�������и�û�õ�����" << endl;
	}
};


//��������
class Person
{
public:
	virtual void Accept(Action* visitor) = 0;
};

//����
class Man : public Person
{
public:
	virtual void Accept(Action* visitor)
	{
		visitor->GetManConclusion(this);
	}
};

//Ů��
class Woman : public Person
{
public:
	virtual void Accept(Action* visitor)
	{
		visitor->GetWomanConclusion(this);
	}
};



//����ṹ��
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

//�ͻ���
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
