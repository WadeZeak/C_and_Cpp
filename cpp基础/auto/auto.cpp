#include<stdlib.h>
#include<iostream>

using namespace std;



//�Զ��������Զ���ȡ���ͣ����������
//�Զ�����������ʵ���Զ�ѭ��һά����
//�Զ�ѭ����ʱ�򣬶�Ӧ�ı����ǳ���




void main1()
{

	auto num = 10;//�Զ�����,�Զ�ƥ������
	auto numA = 15/3.5;
	

	cout << num << endl;
	cout << numA << endl;
	system("pause");
}

void main()
{
	//int num[10] = { 1, 2, 3, 4, 65, 6, 8, 9, 9, 10 };
double num[2][5] = { 10.5, 265.5, 3.4, 4.4, 6.5, 6, 8, 9, 9, 's' };
//num������,��һ��ָ�볣��

//auto �Զ�ѭ�� begin  end��������һ������ĳ���


	//for (auto data :num )//����,ѭ��һά����C++�﷨
	//{

	//	cout << data<<endl;

	//}

//for (auto data : num)
//{
//	cout << data << endl;
//
//	for (auto i :data)//data�Ǹ�����������������
//	{

//	}
//
//	cout << endl;
//}



for (auto data :num )
{
	cout << data << endl;
	
	for (int i = 0; i < 5;i++)
	{
		cout << *(data+i) << endl;//data��һ����ָ�����
	}

	cout << endl;
}





	system("pause");
}

