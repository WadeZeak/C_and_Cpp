#include <iostream>
#include <string>
#include <vector>
using namespace std;



//medtator:��ͣ��ģʽ
//��ͣ��ģʽ:��ͣ��ģʽ��װ��һϵ�ж����໥���õķ�ʽ
//ʹ����Щ���󲻱��໥��������,�Ӷ�ʹ���ǿ�����ɢż��
//��ĳЩ����֮������÷����ı�ʱ����������Ӱ����������֮�������,��֤��Щ���ÿ��Ա˴˶����ı仯
//��ͣ��ģʽ����Զ���໥����ת��Ϊһ�Զ���໥����
//��ͣ��ģʽ���������Ϊ�����ó���,�Ѷ�����С�߶ȵ���Ϊ��������������໥���÷ֿ�����
//




class Colleague;
//�н�����
class Mediator
{
public:
	virtual void Send(string message, Colleague* col) = 0;
};
//����ͬ����
class Colleague
{
protected:
	Mediator* mediator;
public:
	Colleague(Mediator* temp)
	{
		mediator = temp;
	}
};
//ͬ��һ
class Colleague1 : public Colleague
{
public:
	Colleague1(Mediator* media) : Colleague(media){}

	void Send(string strMessage)
	{
		mediator->Send(strMessage, this);
	}

	void Notify(string strMessage)
	{
		cout << "ͬ��һ�������Ϣ" << strMessage << endl;
	}
};

//ͬ�¶�
class Colleague2 : public Colleague
{
public:
	Colleague2(Mediator* media) : Colleague(media){}

	void Send(string strMessage)
	{
		mediator->Send(strMessage, this);
	}

	void Notify(string strMessage)
	{
		cout << "ͬ�¶��������Ϣ" << strMessage << endl;
	}
};

//�����н�����
class ConcreteMediator : public Mediator
{
public:
	Colleague1 * col1;
	Colleague2 * col2;
	virtual void Send(string message, Colleague* col)
	{
		if (col == col1)
			col2->Notify(message);
		else
			col1->Notify(message);
	}
};

//�ͻ��ˣ�
int main555555555555()
{
	ConcreteMediator * m = new ConcreteMediator();

	//��ͬ����ʶ�н�
	Colleague1* col1 = new Colleague1(m);
	Colleague2* col2 = new Colleague2(m);

	//���н���ʶ�����ͬ����
	m->col1 = col1;
	m->col2 = col2;

	col1->Send("�Է�����");
	col2->Send("��û�ԣ�������");
	return 0;
}


/**********************************************************************/

class Country;



class UnionNations
{
public:
	virtual void declare(string message, Country *colleage) = 0;

};



class Country
{

protected:
	UnionNations *mediator;

public:
	Country(UnionNations *Temp) :mediator(Temp){ }

};




class USA :public Country
{

public:
	USA(UnionNations *miator) :Country(miator){}
	void declare(string message)
	{
		mediator->declare(message, this);
	}

	void GetMessage(string message)
	{

		cout << "���������Ϣ" << " " << message << endl;
	}

};



class Iraq :public Country
{

public:
	Iraq(UnionNations *miator) :Country(miator){}

	void declare(string message)
	{
		mediator->declare(message, this);
	}

	void GetMessage(string message)
	{

		cout << "�����˻����Ϣ" << " " << message << endl;
	}



};

class UnitedNationsSecuretyCouncil :public UnionNations//�н���
{
public:
	USA *usa;
	Iraq *iraq;

public:

	void declare(string message, Country *colleage)
	{
		if (colleage==usa)
		{
		iraq->GetMessage(message);
		}
		else
		{
			usa->GetMessage(message);
		}

	}


};



void mainzzzzzzzzzzzzz()
{

	UnitedNationsSecuretyCouncil *unsc = new UnitedNationsSecuretyCouncil();

	USA *c1 = new USA(unsc);
	Iraq *c2 = new Iraq(unsc);

	unsc->usa = c1;
	unsc->iraq = c2;



	c1->declare("�����˲�׼����������");
	c2->declare("��������");

	cin.get();


}





