#include<stdlib.h>
#include<iostream>

using namespace std;

void main1()
{
	int num = 10;// ��ջ��
	int *p = new int;//�ڶ���

	cout << p << endl;
	*p = num;

//	delete p;//�ͷ�֮�󣬳�ΪҰָ��
	cout << *p << endl;

	system("pause");
}


void main2()
{

	//int num[10];//��ջ��

	int *p = new int[10];//�ڶ���


	int i = 0;
	//	for (auto data : p)//ֻ������ջ��

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
		cout << p + i << " ,";
		cout << *(p + i) << endl;
	}

	delete[]p;//ɾ���������õĿռ�
	//��������


	system("pause");
}




void main4534()
{

	int *p = new int[80];
	int(*px)[10] = (int(*)[10])p;

//	int(*px)[10] = new int[80]; �﷨������Ϊnewֻ�ܷ������Ե�


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			*(*(px + i) + j) = i*10+j;

			cout << *(*(px + i) + j) <<"\t";
		}
		cout << endl;

	}





	system("pause");
}