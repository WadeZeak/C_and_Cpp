#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

//Cԭ��֧�ֺ�������
//C++����ʵ������

//�����ĸ��������ͣ�˳��ͬ���뷵��ֵ�޹�


//void go(int a,int b)
//C++   go_int_int
//C���� _go





void go(int a)
{
	cout << a << endl;
}


void go(double a)//�������Ͳ�ͬ
{

	cout << a << endl;
}


void go(int a, double b)//����������ͬ
{

	cout << a << endl;
	cout << b<< endl;
}


void go(double b, int a)//������˳��ͬ
{

	cout << a  << endl;
	cout << b << endl;
}


void main()
{

	/*go(10);
	go(10.0, 20);
*/

	//���ݲ�������ƥ��
	//ί�У����ݲ�������ί�в�ͬ�Ĳ���
	void(*pgo1)(int ) = go;
	void(*pgo2)(double) = go;
	void(*pgo3)(int,double) = go;
	void(*pgo4)(double,int) = go;


	printf("pgo1=%p\n",pgo1);
	printf("pgo2=%p\n", pgo2);
	printf("pgo3=%p\n", pgo3);
	printf("pgo4=%p\n", pgo4);



	system("pause");
}


