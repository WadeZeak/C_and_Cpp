#include<stdlib.h>
#include<stdio.h>
#include<iostream>


using namespace std;
//C�����в�֧���βθ�ֵ����C++����
void print(int c,int a = 1, int b = 2 )//��Ҫ��Ĭ�ϲ������ڷ�Ĭ�ϲ����ұ�,ͬʱĬ�ϲ�����Ҫ�������У������ж�
{

	//printf("%d\n", a);
	cout << a <<b<<c<< endl;
}


//
//void print(int c)//�������ò���ȷ
//{
//
//	cout << c << endl;
//
//
//}

void print(double c)
{

	cout << c << endl;


}



void main()
{

	//print(10);//ͬ���Ͳ���.���ò���ȷ
	//���������뺯��Ĭ�ϲ�����ͻ,��Ҫ������Ĳ������Ͳ�һ����������һ����˳��һ������������⣬����һ������



	void(*p1)(int, int, int) = print;
	p1(100, 45, 513);//����ָ��û��Ĭ�ϲ�������Ҫȫ��������Ӧ�Ĳ���
	
	print(100);//Ĭ�ϵ��õ�һ��������int���͵�print����

	system("pause");
}