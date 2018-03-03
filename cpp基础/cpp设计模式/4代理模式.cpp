#include <string>
#include <iostream>
using namespace std;


//����ģʽ:��һ�������ṩһ���������,���ɴ��������ƶ�Դ���������
//�������һ���˻���һ������������һ���˻���һ��������ȡ�ж�
//ĳЩ�����,�ͻ�������߲��ܹ�����һ������,��������ڶ�����Ŀ��֮�����н�����
//�ͻ��˷ֱ治�������������������ʵ�������
//������Բ�֪�������ı��������,����������һ�����������Ľӿ�,��ʱ,��������ܴ������������
//�����������Ҫϵͳ��������ɫ��Ϊ������ת��







/*
				Զ�̴�����������һ�������ڲ�ͬ��ַ�ռ����ʵ
���������������������ͨ�������������Ҫ�ܳ�ʱ��ʵ�����Ķ���
����������������ȫ��������������ʵ����ķ���Ȩ��
���������������������ã���������ʵ����ʱ������������һЩ��
*/

//����ӿ�
class Interface
{
public:
	virtual void Request() = 0;
};
//��ʵ��
class RealClass : public Interface
{
public:
	virtual void Request()
	{
		cout << "��ʵ������" << endl;
	}
};
//������
class ProxyClass : public Interface
{
private:
	RealClass* m_realClass;
public:
	virtual void Request()
	{
		m_realClass = new RealClass();
		m_realClass->Request();
		delete m_realClass;
	}
};

//�ͻ��ˣ�
int main6546()
{
	ProxyClass* test = new ProxyClass();
	test->Request();
	return 0;
}


/******************************************************************************************/



class SchoolGirl
{
public:
	string name;
};




class IGiveGift
{
public:
	virtual void GiveDolls()=0;
	virtual void GiveFlowers()=0;

};


class Pursuit :public IGiveGift
{

private:
	SchoolGirl MM;

public:
	Pursuit(SchoolGirl sg)
	{
		MM = sg;
	}

	void GiveDolls()
	{
		cout << "����������" << endl;
	}

	void GiveFlowers()
	{
		cout << "�����ʻ�" << endl;

	}

};

class Proxy:public IGiveGift
{

private:
	Pursuit gg;
public:

	Proxy(SchoolGirl mm) :gg(mm)
	{


	}

	void GiveDolls()
	{
		gg.GiveDolls();
	}

	void GiveFlowers()
	{
		gg.GiveFlowers();
	}

};







void mainhgkgk()
{


	SchoolGirl girl1;
	girl1.name = "Joanna";
	Pursuit middleman(girl1);
	Proxy agent(girl1);


	
	agent.GiveDolls();
	

	system("pause");


}