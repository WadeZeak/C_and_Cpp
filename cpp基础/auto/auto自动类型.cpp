#include<stdlib.h>
#include<iostream>
#include<typeinfo>

using namespace std;

void main()
{
	double db = 10.9;
	double *pdb = &db;

	auto num = db;//ͨ�õĴ���ӿ�

	cout << typeid(num).name() << endl;//��ȡ���ͣ������
	cout << typeid(pdb).name() << endl;
	cout << typeid(db).name() << endl;

	decltype(num) numA(151.54);//ͨ�ñ��ݽӿ�
	//decltype��ȡ���Ͳ�������Ӧ���͵ı�����ʵ�ֱ���

	cout << sizeof(numA) << endl;
	
	system("pause");
}