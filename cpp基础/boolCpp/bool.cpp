#include<stdlib.h>
#include<iostream>

using namespace std;

void main()
{

	bool bl = 1 && 2 || 2 || -1 && 0;//&&�����ȼ�����||

	cout << "type_bl=" << typeid(bl).name()<<endl;//��ȡ��������
	cout << "bl=" << bl << endl;

	decltype (bl) bt(1 + 2 * 3 && 4 - 1 || 5);//decltype ѡ�񲢷��ز���������������
	cout << bt << endl;

	int s = 5;
	decltype(s) num(6); 
	cout << num<<endl;



	system("pause");
}