#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;


//�������˽�г�Ա��������ʱ������{ }��ʼ�� 


//��Ķ���֮��Ĭ���ǿ���ֱ�Ӹ�ֵ��
//����ṹ��ĳ�Ա����һ��Ĭ�ϸ�ֵ =  ǳ���� ,��������
//������õ�������ں���ģ��ĸ���

class MyClass
{
public://Ĭ����˽������
	char name[10];
	double db;
	char *p;

private:
	int num;

public:
	void Set(int x)//ͨ�ýӿ�,ʵ��˽�б�����ʼ��
	{
		this->num = x;
	}

	int Get()//����ֵ,��������   ͨ�ýӿ�,˽�б�����ֵʱ�����
	{
		//cout << "������Get()����" << endl;
	return	this->num;

	}
};



//����֮��ĸ�ֵ����ǳ����
template < typename T >
void Swap(T &a, T &b)//ͨ�ú���ģ��
{
	cout << "ͨ�ú���ģ��" << endl;
	T temp = a;
	a = b;
	b = temp;

}



//����֮��ĸ�ֵ����ǳ����
template<>
void Swap(MyClass &info1, MyClass &info2)//ʵ�ֺ���ģ�帲�� ����ͨ������
{

	cout << "���к���ģ��" << endl;
	//���к���ģ���������Լ����������������Ż�

	//�ɼ���������
	MyClass temp = info1;
	info1 = info2;	
	info2 = temp;
//	free(temp.name);
}


//������һ����������������Ҫһ�����к���ģ���ʵ�ֺ���ģ�帲��


void main()
{
	MyClass info1;
	MyClass info2;
	//info1.name = "abcd";//������ ���޷���const char ת��Ϊ char  ��"abcd"�г������޷��������ֵ
	strcpy(info1.name, "abcd");
	strcpy(info2.name, "hijk");
	info1.db = 12.3;
	info2.db = 45.6;

	info1.p = new char[10];
	info1.p = "World";

	//info1.p = nullptr;//C++�Ŀ�ָ��
	
	info2.p = new char[20];
	info2.p = "ChinaZZ";

	info1.Set(10);
	info2.Set(20);



	Swap(info1, info2);

	cout << "info1" << endl;
	cout << info1.name << endl;
	cout << info1.db << endl;
	cout << info1.p << endl;
	cout << info1.Get() << endl;
	cout << endl;

	cout << "info2" << endl;
	cout << info2.name << endl;
	cout << info2.db << endl;

//	cout << info2.p << endl;

	cout << info2.Get() << endl;

	cin.get();//getchar()

}