
#include<stdlib.h>
#include<iostream>


using namespace std;


class MyClass1
{
private:
	int *p;
	int len;

public:

	MyClass1()//����ʱ��ʼ��
	{
		cout << "MyClass ������" << endl;
	}


	~MyClass1()//ɾ����ʱ���ͷ��ڴ�
	{
		cout << "MyClass ������" << endl;

	}

};






void mainghf()
{

	MyClass1 *p = new MyClass1[10];


	//�����������Ϳ���ֱ��delete�������ӵ���������Ҫ����[ ]
	delete []p;



	system("pause");

}