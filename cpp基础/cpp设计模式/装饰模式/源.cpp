#include <string>
#include <iostream>
using namespace std;



//װ��ģʽ:װ��ģʽ�����ԶԿͻ�͸���ķ�ʽ��չ����Ĺ���
//�Ǽ̳й�ϵ���������,�ṩ�ȼ̳и���������
//��̬��һ�����ӹ���,��Щ���ܿ����ٶ�̬�ĳ���
//������һЩ�������ܵ�������϶������ķǳ������Ĺ���


///������ɵ���������´���ʱ��һ����Ϊ����Ӻ���ְ�����Ҫ��Ϊ��
//������Ҫ����Ľ�����һЩ�ض�����²Ż�ִ�е��ض��Ĺ���ʱ
//���򵥵���ǲ��Ǻ���Ӧ�õĹ��ܣ����ͻ�������ĸ��Ӷȡ�
//װ��ģʽ���ǰ�Ҫ��ӵĸ��ӹ��ֱܷ���ڵ��������У�����������
//����Ҫװ�εĶ��󣬵���Ҫִ��ʱ���ͻ��˾Ϳ�����ѡ��ء���˳���ʹ��װ�ι��ܰ�װ����




//��
class Person//ԭ����
{
private:
	string m_strName;
public:
	Person(string strName)
	{
		this->m_strName = strName;
	}
	Person(){}

	virtual void Show()
	{
		//cout << "Hello World" << endl;
		cout << "װ�����:" << m_strName << endl;
	}



};


//װ����
class Finery :public Person
{
protected:
	Person* m_component;//�洢ԭ����ĵ�ַ
public:

	Finery(Person *component) :m_component(component){}

	virtual void Show()
	{
		m_component->Show();

	}

};


//T��
class TShirts : public Finery//ʵ�ְ�װ,��ԭ������в���
{
public:

	TShirts(Person *component) :Finery(component){}

	virtual void Show()
	{
		m_component->Show();
		cout << "T Shirts" << endl;
	}


};


//����
class BigTrouser :public  Finery
{
public:
	BigTrouser(Person *component) :Finery(component){}

	virtual void Show()
	{
		m_component->Show();
		cout << " Big Trouser" << endl;
	}
};


//�ͻ���
int main()

{
	Person *p = new Person("С��");

	p->Show();

	//Person *bt = new BigTrouser(p);//װ��
	/////	Person *ts = new TShirts(bt);//װ��

	//	ts->Show();

	cin.get();
	return 0;
}
