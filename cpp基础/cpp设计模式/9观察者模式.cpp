#include <string>
#include <iostream>
#include <vector>
using namespace std;

class SecretaryBase;



//�۲���ģʽ,һ��һ�Զ�Ĺ�ϵ��������ϵ

//�ö���۲��߶������ĳһ����仯,�����������״̬�Ϸ����仯,��֪ͨ���еĹ۲��߶���,�������Զ������Լ�



//�ö���۲���󣨹�˾Ա����ͬʱ����һ������������飩���������״̬�����仯ʱ����֪ͨ���еĹ۲��ߣ�ʹ�����ܹ������Լ���




//��������۲��߶���һ������,����,ʵ�ֲ�ͬ��Ч��
//�����ߵ���,�������еĹ۲���,���ӻ���ɾ��,������Ϣ,�ù۲��ߴ���
//�۲��ߵ���,��һ���ӿڽ�����Ϣ��ʵ�ִ���


//����۲���  
class CObserverBase
{
protected:
	string name;
	SecretaryBase* sub;
public:
	CObserverBase(string strname, SecretaryBase* strsub)//�����ߵ�����,���Ӻ�֪ͨ����
	{
		name = strname;
		sub = strsub;
	}
	virtual void Update() = 0;//ˢ�¶�������
};



//����Ĺ۲��ߣ�����Ʊ��
class StockObserver : public CObserverBase
{
public:
	StockObserver(string strname, SecretaryBase* strsub) : CObserverBase(strname, strsub)
	{
	}
	virtual void Update();
};

//����۲��ߣ���NBA��
class NBAObserver : public CObserverBase
{
public:
	NBAObserver(string strname, SecretaryBase* strsub) : CObserverBase(strname, strsub){};
	virtual void Update();
};



//����֪ͨ��
class SecretaryBase
{
public:
	string action;
	vector<CObserverBase*> observers;//�۲�������
public:
	virtual void Attach(CObserverBase* observer) = 0;
	virtual void Notify() = 0;//ʵ�ּ�ͦ�Ļ���
	virtual void Deach(CObserverBase* ob) = 0;
};



//����֪ͨ��
class Secretary :public SecretaryBase
{
public:

	void Attach(CObserverBase* ob)
	{
		observers.push_back(ob);
	}



	void Deach(CObserverBase* ob)//����
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


	void Notify()//֪ͨ
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
	cout << name << ":" << sub->action << ",��Ҫ���Ʊ�ˣ�Ҫ��ʼ������" << endl;
}


void NBAObserver::Update()
{
	cout << name << ":" << sub->action << ",��Ҫ��NBA�ˣ��ϰ�����" << endl;
}


//�ͻ��ˣ�
int main235253()
{
	SecretaryBase *p = new Secretary();  //�����۲��� �������

	//���۲�Ķ���
	CObserverBase *s1 = new NBAObserver("С��", p);//������Ϣ
	CObserverBase *s2 = new StockObserver("С��", p);


	//����۲����
	p->Attach(s1);
	p->Attach(s2);

	//�¼�
	p->action = "�ϰ�����";


	//֪ͨ
	p->Notify();
	cin.get();
	return 0;
}



/***********************************************************************************/


