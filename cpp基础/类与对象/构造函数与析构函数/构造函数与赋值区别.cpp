#include<iostream>

using namespace std;

//���е���Ĭ�϶���һ�����캯������������
//���캯����������
//����������û�з���ֵ
class MyClass
{
public:
	int num;
	
public:
	MyClass() :num(10)//��Ա������ʼ�� ��ʽ2 
	{
		//num = 10;//��Ա������ʼ�� ��ʽ1 
		cout << this->num << endl;
		cout << "Creat Class Obj" << endl;
	}

	MyClass(int data)//���캯�����أ���ʼ����Ա����
	{
		this->num = data;
		cout << "Creat Class Obj By Operator" << endl;

	}


	~MyClass()
	{

		cout << "Destroy Class Obj" << endl;
	}



};


void Run()
{

	MyClass myclass1(20);//���������صĹ��캯��
	cout << myclass1.num << endl;
	MyClass myclass2=100;//���������صĹ��캯��
	cout << myclass2.num << endl;

	MyClass *p = new MyClass(102);//���������صĹ��캯��
	cout <<p->num << endl;

	MyClass *px (new MyClass(200));
	cout << (*px).num << endl;
//	px(new MyClass(300));//��ֹ�˲���

}



void main1()
{
	Run();
	int num = 4;
	num = 5;
	int data(4);
	//data( 5);//��ֹ�˲���
	cin.get();

}