#include<iostream>

using namespace std;


template<class T>
class MyClass
{

public:
	class NewClass
	{
	public:
		int num;
	}newclass;//��ͨ�����ֱ�Ӷ���

	template<class S>
	class RunClass
	{
	public:
		S s1;
	};//��ģ����治��ֱ�ӳ�ʼ��
	RunClass<T>t1;
	RunClass<double>t2;


};



void main()
{
	MyClass<int> myclass;
	myclass.newclass.num = 10;

	myclass.t1.s1 = 10;
	myclass.t2.s1 = 10.5;

	cout << myclass.t1.s1 << "\t" << myclass.t2.s1 << endl;

	cin.get();
}