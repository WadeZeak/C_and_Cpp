#include<stdlib.h>
#include<iostream>


using namespace std;



//����ģ����Զ����ͽ����Ż�����,�������ͻḲ��
//�����Ȼ��Ҫ���ú���ģ�壬��Ҫʵ����
template<class T >
T Add(T a,T b )
{

	cout << "T_Add" << endl;
	return a + b;

}


int Add(int a, int b)
{
	cout << "int_Add" << endl;
	return a + b;
}


void main()
{
	int a = 10, b = 20;
	double db1 = 12.3,db2=45.6;


	cout << Add(a, b) << endl;


	cout << Add(db1, db2) << endl;//������ͨ����

	cout << Add<int>(a, b) << endl;//ʵ����,���ú���ͨ��ģ��

	cin.get();
}