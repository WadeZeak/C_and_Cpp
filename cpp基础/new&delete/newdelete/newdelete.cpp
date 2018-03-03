#include<stdlib.h>
#include<iostream>

using namespace std;

void main1()
{
	int num = 10;// 在栈上
	int *p = new int;//在堆上

	cout << p << endl;
	*p = num;

//	delete p;//释放之后，成为野指针
	cout << *p << endl;

	system("pause");
}


void main2()
{

	//int num[10];//在栈上

	int *p = new int[10];//在堆上


	int i = 0;
	//	for (auto data : p)//只适用于栈上

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
		cout << p + i << " ,";
		cout << *(p + i) << endl;
	}

	delete[]p;//删除数组利用的空间
	//对象数组


	system("pause");
}




void main4534()
{

	int *p = new int[80];
	int(*px)[10] = (int(*)[10])p;

//	int(*px)[10] = new int[80]; 语法错误，因为new只能分配线性的


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