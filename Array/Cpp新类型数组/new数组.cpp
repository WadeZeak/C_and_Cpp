#include<stdlib.h>
#include<iostream>
#include<array>
#include<string>
using namespace std;


void main1()
{

	double db[4] = { 1.1, 2.2, 3.3, 4.4 };
	
	//std::array<��������,Ԫ�ظ���>  ������   
	array<double, 4> newdb = { 10.2, 45.8, 6.4, 8.7 };
	array<double, 4> newdb1 = newdb;//�°汾��������Ը�ֵ,���ϰ汾�Ĳ�����
	//for (auto data : db)//����
	//{
	//	cout << data << '\t';
	//}

	for (int i = 0; i < 4;i++)
	{
		cout << db[i] << '\t' << newdb[i] <<'\t'<<newdb1[i] << endl;
	}
	system("pause");
}


void main2()
{
	array<string, 5> str = { "calc", "mspaint", "notepad", "ipconfig", "tasklist" };

	for (int i = 0; i < 5; i++)
	{
		cout << str[i] << endl;
		system(str[i].c_str());//c_str()��������һ��ָ������c�ַ�����ָ��,���ݺ�string��ı��������һ����,ͨ��string���c_str()�����ܹ���string����ת����c�е��ַ�������ʽ;
	}

	system("pause");
}


void main()
{
	string str1 = "task";
	string str2 = "list";
	string str3 = str1 + str2;
	system(str3.c_str());

	system("pause");



}