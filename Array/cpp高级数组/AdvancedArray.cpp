#include<stdlib.h>
#include<iostream>
#include<array>
#include<vector>//C++��׼��
#include<string>

//using namespace std;

using std::array;//array  ��̬����,��ջ��
using std::vector;//vector ��̬����,�ڶ���

//ʹ��C++�������鲻�ù����ڴ�
//ʹ��array,Ҫע��ջ���
//array�������κ�����

//vevtor�ı�����relloc

using std::string;

using std::cin;
using std::cout;
using std::endl;


void main1()
{
	//C++�������ŵ�
	//����ͻ��ջ������
	

	array<int, 10>myint = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//array<int, 1024 * 256>myint1;// Stack overflow
		//array  ��̬����,ջ��
	//array<double, 1024 * 1024>mydb;// Stack overflow

	//vector ��̬����,�ڶ���
	vector<double>myvector;
	for (int i = 0; i < 1024*1024; i++)
	{
		myvector.push_back(i);	
	}



	cin.get();
}


void main2()
{
	array<int, 5>myint1 = { 1, 2, 3, 4, 5 };//���ܱ䳤
	array<int, 5>myint2 = {11,22,33,44,55};
	array<int, 5>myint3 = { 111, 222, 333, 444, 555 };

	//array<array<int, 5>, 3>myint = {myint1,myint2,myint3};//��ά���� myint[3][5]

//	array<array<array<int, 5>, 4>, 3>myint4;//��ά����
	array<array<int, 5>, 3>myint = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << myint[i][j]<<'\t';
		}
		cout << endl;
	}

	cin.get();
}




void main3()
{
	//vector �ɱ䳤����

	vector<string>str1;//��̬���ַ�������
	str1.push_back("notepad");
	str1.push_back("mspaint");
	str1.push_back("calc");
	str1.push_back("tasklist");
	str1.push_back("ipconfig");
	
	str1.pop_back();//����(ɾ��)���¼����һ��
	//str1.clear();//���,����ʵ���ظ�����


	//ʹ���±���е���
	for (int i = 0; i <static_cast<int>( str1.size()); i++)
	{
		system(str1[i].c_str());
	}

	cin.get();
}


void main5()
{
	vector<string>str1;//��̬���ַ�������
	str1.push_back("notepad");
	str1.push_back("mspaint");
	str1.push_back("calc");
	str1.push_back("tasklist");
	str1.push_back("ipconfig");

	//������
	vector<string>::iterator ibegin, iend;//��������ָ��
	ibegin = str1.begin();//��ʼ
	iend = str1.end();//����

	while (ibegin!=iend)//����
	{
		string tempstr = *ibegin;//��ȡָ��ָ�������
		system(tempstr.c_str());

		ibegin++;
	}

	cin.get();

}

//����������ʵ�ֲ����������ݽṹ��ʹ��һ�׷���
void main6()
{
	array<int, 10>myint = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//���������
	array<int,10>::iterator ibegin, iend;//��Ҫָ����С

	ibegin = myint.begin();
	iend = myint.end();

	while (ibegin!=iend)
	{
		cout << *ibegin << endl;
		ibegin++;
	}

	array<int, 10>::reverse_iterator rbegin, rend;//���������    

	rbegin = myint.rbegin();//������ָ��
	rend = myint.rend();

	//�������
	while (rbegin!=rend)
	{

		cout << *rbegin << endl;
		rbegin++;//ע�� ����rbegin--
	}


	cin.get();
}


void main()
{
	vector<string>str1;//��̬���ַ�������
	str1.push_back("notepad");
	str1.push_back("mspaint");
	str1.push_back("calc");
	str1.push_back("tasklist");
	str1.push_back("ipconfig");

	vector<string>::reverse_iterator rbegin, rend;
	rbegin = str1.rbegin();
	rend = str1.rend();

//AAA:
//	if (rbegin!=rend)
//	{
//		cout << *rbegin << endl;
//		rbegin++;
//
//		goto AAA;
//	}
//	
//	goto AAA;
//

	//�����������������  ʵ���������
	while (rbegin!=rend)//rend ��ָ�����������,����ָ���β����һ��
	{
		rend--;
	cout << *rend << endl;
		
	}

	cin.get();
}