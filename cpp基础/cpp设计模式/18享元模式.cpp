#include <iostream>
#include <string>
#include <vector>
#include<map>

using namespace std;

//��Ԫģʽ:FLYWEIGHT��ȫ����ָ��������
//��Ԫģʽ�Թ���ķ�ʽ��Ч��֧�ִ�����ϸ���ȵĶ���
//��Ԫģʽ��������Ĺؼ����ܹ���������״̬������״̬
//����״̬�洢����Ԫ���ڲ�,�����滷���ĸı����ͬ
//����״̬�����Ż����ĸı���ı�.����״̬����Ӱ������״̬
//�������໥�����ġ������Թ����״̬�Ͳ����Թ����״̬�ӳ����������ֿ���
//�������Թ����״̬�����޳����ͻ��˲�����ֱ�Ӵ���������Ķ���
//Ӧ��ʹ��һ�����������𴴽�������Ķ���
//��Ԫģʽ����Ƚ������ڴ��ж��������







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
		cout << "�ն˽�����" << endl;
	};
};

class NonterminalExpression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "���ն˽�����" << endl;
	}
};

class Context
{
public:
	string input;
	string output;
};

//�ͻ���
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


//��Ԫģʽһ��������ӳ���ϵ



class WebSite
{
public:
	virtual void use() = 0;//Ԥ���ӿ�,ʵ�ֹ���
};



class ConcreteWebSite :public WebSite//������
{

private:
	string name;
public:
	ConcreteWebSite(string str) :name(str){}//ʵ����
	void use()
	{
		cout << "��վ����" << name << endl;

	}
};

class WebSiteFactory//�����������
{

private:
	map<string, WebSite*>wf;//ӳ��,�洢����

public:
	WebSite *getWebSiteCategory(string key)
	{
		if (wf.find(key)==wf.end())//������
		{
			wf[key] = new ConcreteWebSite(key);//����ӳ��
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

	WebSite *fy1 = wf->getWebSiteCategory("��Ʒչʾ");
	fy1->use();
	WebSite *fy2 = wf->getWebSiteCategory("��Ʒչʾ");//�ظ��Ķ����ٱ�����
	fy2->use();

	WebSite *fz1 = wf->getWebSiteCategory("����");
	fz1->use();
	WebSite *fz2 = wf->getWebSiteCategory("����");
	fz2->use();

	cout << wf->getWebSiteCount() << endl;
	cin.get();
	return 0;

}


