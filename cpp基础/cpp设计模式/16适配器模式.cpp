#include <iostream>
#include<string>

using namespace std;


//������(��ѹ��)ģʽ:��һ����Ľӿڱ�ɿͻ�������������һ�ֽӿ�,�Ӷ�ʹ
//ԭ����ӿڲ�ƥ��ԭ����޷�һ���������������һ����
//�������˿��Ը��ݲ�������һ�����ʵ�ʵ�����ͻ���






class Target
{
public:
	virtual void Request()
	{
		cout << "��ͨ������" << endl;
	}
};

class Adaptee
{
public:
	void SpecificalRequest()
	{
		cout << "��������" << endl;
	}
};


//Ϊ����������
class Adapter :public  Target
{
private:
	Adaptee* ada;
public:
	virtual void Request()
	{
		ada->SpecificalRequest();
		Target::Request();
	}
	Adapter()
	{
		ada = new Adaptee();
	}
	~Adapter()
	{
		delete ada;
	}
};



//�ͻ��ˣ�
int mainjvgs346()
{
	Adapter * ada = new Adapter();
	ada->Request();
	delete ada;

	cin.get();
	return 0;
}





/**********************************************************************************/




class Player
{
protected:
	string name;
public:
	Player(string strName) { name = strName; }
	virtual void Attack() = 0;//����
	virtual void Defense() = 0;//����
};


//ǰ��
class Forwards : public Player
{
public:
	Forwards(string strName) :Player(strName){}
public:
	virtual void Attack()
	{
		cout << name << "ǰ�����" << endl;
	}
	virtual void Defense()
	{
		cout << name << "ǰ�����" << endl;
	}
};


//�г�
class Center : public Player
{
public:
	Center(string strName) :Player(strName){}
public:
	virtual void Attack()
	{
		cout << name << "�г�����" << endl;
	}
	virtual void Defense()
	{
		cout << name << "�г�����" << endl;
	}
};


//��
class Backwards:public Player
{

public:
	Backwards(string str) :Player(str){}

	virtual void Attack()
	{
		cout << name << "�󳡽���" << endl;
	}
	virtual void Defense()
	{
		cout << name << "�󳡷���" << endl;
	}

};


/////////////////////////////////////////////////////////////

//�⼮�г���Ա
class ForeignCenter
{

public:
	string name;
public:
	ForeignCenter(string strName) :name(strName){}
	 void MyAttack()//����
	{
		cout << name << "�⼮�з����" << endl;
	}
	 void MyDefense()
	{
		cout << name << "�⼮��������" << endl;
	}
};


///////////////////////////////////////////////////////////////



//Ϊ�⼮��Ա����
class TransLater : public Player//������ ʵ�ֽӿڵ�ת��,�Ӷ���ɶԽ� 
{
private:
	ForeignCenter *fc;//���ת��
public:
	TransLater(string strName) :Player(strName)
	{
		fc = new ForeignCenter(strName);
	}
	virtual void Attack()
	{
		fc->MyAttack();
	}
	virtual void Defense()
	{
		fc->MyDefense();
	}
};










//�ͻ���
int main34593485093()
{


	Player *p1 = new Center("С��");
	p1->Attack();
	p1->Defense();


	TransLater *p2 = new TransLater("Ҧ��");
	p2->Attack();
	p2->Defense();

	cin.get();

	return 0;
}
