#include<iostream>
#include <vector>
#include <string>
using namespace std;


//ԭ��ģʽ����̬�����ӻ��߼��ٲ�Ʒ��
//��Ʒ�಻��Ҫ�ǵ����κ�����ȷ���ĵȼ��ṹ
//ԭʼģ��ģʽ�������κεĵȼ��ṹ
//ȱ��:ÿһ���඼�����䱸һ����¡�ķ���


//ԭ��ģʽ:ͨ������һ��ԭ�Ͷ�����˵����Ҫ�����Ķ������
//��,Ȼ���ø������ԭ�Ͷ���ķ�������������ͬ���͵Ķ���


class Prototype //������� 
{
private:
	string m_strName;
public:
	Prototype(string strName){ m_strName = strName; }
	Prototype() { m_strName = " "; }
	void Show()
	{
		cout << m_strName << endl;
	}
	virtual Prototype* Clone() = 0;
};


// class ConcretePrototype1 
class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1(string strName) : Prototype(strName){}
	ConcretePrototype1(){}

	virtual Prototype* Clone()
	{
		ConcretePrototype1 *p = new ConcretePrototype1();
		*p = *this; //���ƶ��� 
		return p;
	}
};

// class ConcretePrototype2 
class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2(string strName) : Prototype(strName){}
	ConcretePrototype2(){}

	virtual Prototype* Clone()
	{
		ConcretePrototype2 *p = new ConcretePrototype2();
		*p = *this; //���ƶ��� 
		return p;
	}
};

//�ͻ���
int main��ί��()
{
	ConcretePrototype1* test = new ConcretePrototype1("С��");
	ConcretePrototype2* test2 = (ConcretePrototype2*)test->Clone();
	test->Show();
	test2->Show();
	return 0;
}





/*****************************************************************************/



class Rusume//ԭ��  ����ԭ��
{
private:
	string name, sex, age, timeArea, company;

public:
	Rusume(string str)
	{
		this->name = str;
	}

	void setPersonalInfo(string a, string s)
	{
		this->sex = s;
		this->age = a;
	}

	void setWorkExperience(string t, string c)
	{
		this->company = c;
		this->timeArea = t;

	}

	void display()
	{

		cout << name << " " << age << " " << sex << " ";
		cout << timeArea << " " << company << endl;

	}


	Rusume *clone()//��¡
	{

		Rusume *b=new Rusume(name);

		b->setPersonalInfo(age, sex);
		b->setWorkExperience(timeArea, company);
		return b;
	}



};


int mainodngosdhnbo()
{

	Rusume *p1 = new Rusume("�����");
	p1->setPersonalInfo("30", "Man");
	p1->setWorkExperience("2000-2016", "Baidu");


	Rusume *p2 = p1->clone();//���ݿ�¡
	p2->setWorkExperience("1999-2005", "�о���");

	p1->display();
	p2->display();
	
	cin.get();
	return 0;


}


