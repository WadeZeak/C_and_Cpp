#include<iostream>

using namespace std;


class MyClassA
{
public:
	int a;
	int b;
public:
	//����Ѿ��������߶����˹����뿽�����캯�������������������ɹ����뿽�����죬��ʱ��Ҫ�Լ�ʵ��
	MyClassA()//ԭ������
	{

	}

	//MyClassA(const MyClassA &ca)
	//{


	//}
	//��������Ĺ���
	MyClassA(int x, int y) //:a(x), b(y)
	{
		/*this->a = x;
		this->b = y;*/
	}

	void print()
	{
		cout << this->a << endl;
		cout << this->b<< endl;

	}

};







void main1()
{
	//������������Ĭ�ϵĹ����뿽�����캯��
	MyClassA myclassA1(10,100);
	MyClassA myclassA2(myclassA1);//��myclassA1��myclassA2��ʼ�� ��ʱ������Ĭ�ϵĿ�������

	myclassA1.print();
	myclassA2.print();

	cin.get();
}


