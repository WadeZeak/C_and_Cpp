#include<iostream>

using namespace std;

class  AAA//���麯�� ���д洢һ��ָ���麯�����ָ��,һ�������ͷ��
{
	//int num;
	virtual void go()
	{
		cout << "AAA::go" << endl;
	}


	virtual void fff()
	{
		cout << "AAA::fff" << endl;
	}

	virtual void jjj()
	{
		cout << "AAA::jjj" << endl;
	}
};


class	aaa
{
	virtual void run()
	{
		cout << "aaa::run" << endl;
	}

};

//���ؼ̳�
class BBB :public AAA,public aaa//���8�ֽ� �൱�ڼ̳��������麯����
{

	 void go()
	{
		cout << "BBB::go" << endl;
	}

	virtual void hhh()
	{
		cout << "BBB::hhh" << endl;
	}

	virtual void ooo()
	{
		cout << "BBB::ooo" << endl;
	}
};





typedef void(*Func)(void);


void main()
{
	cout << sizeof(aaa) << endl;
	cout << sizeof(AAA) << endl;
	cout << sizeof(BBB) << endl;

	BBB b;	
	Func pfunc;


	for (int i = 0; i < 5; i++)
	{
		pfunc = (Func)*((int *)*(int *)(&b)+i);//�����麯��  �麯�����ҵ�һ����������Ӧ�ĺ���
		//(int *)(&b)��b�ĵ�ַǿ��ת��Ϊint *���� ��ȡ4���ֽ�
		//* (int *)(&b) ȡ��&b�е�����,���麯�����ַ
		//(int *)  *(int*)(&b) ��&b�е�����ת��Ϊint *����
		//(Func)*((int *)  *(int*)(&b)) ȡ�����ݲ�ת��ΪFunc����
		pfunc();
	}
	Func pfunc1;
	pfunc1 = (Func)*((int *)*((int *)(&b) + 1));
	pfunc1();
	cin.get();
}



//�麯�������麯������˳��
//�����е��麯������˳����ǰ
//������麯���ں�