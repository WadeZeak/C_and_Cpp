#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>//�㷨ͷ�ļ� lambda���ʽ��������������array ,Ҳ������vector

using namespace std;

//vector ���ڹ�������Ľṹ  ����ʵ�ֶ�̬�޹���


void main1()
{
	vector<int>myvector;
	myvector.push_back(11);//��������
	myvector.push_back(22);//lambda���ʽ
	myvector.push_back(33);
	myvector.push_back(44);
	myvector.push_back(55);
	int result=0;//�����ʼ��


	//���
	for_each(myvector.begin(), myvector.end(), [&result](int x){  result += x; });
	//[&result](int x){  result += x; }������װ��   &result ֱ�Ӳ���һ���ⲿ����,�ȼ���һ������ֵ   x �䵱ÿһ�ε�����ָ���Ԫ��
	//[ ]( ){  }  [ ]������һ���ⲿ����,�ȼ��ڷ���ֵ    (  ) ����   {  } ����

	cout << result << endl;
	cin.get();

}

void main()
{

	vector<int>myvector(5);//ָ�������С,Ĭ�ϳ�ʼ��Ϊ0 

	//��
	myvector.push_back(10);//��β������Ԫ��
	myvector.push_back(20);
	myvector.push_back(30);
	myvector.push_back(40);
	myvector.push_back(50);

	myvector.pop_back();//�������һ�� Ҳ����ɾ�����һ��


	//����
	myvector.insert(myvector.begin() + 2, 1000);//��ͷ������
	myvector.insert(myvector.begin() + 2,9999);//�ڵ�����λ�ò���

	//ɾ��
	//myvector.erase(myvector.begin());//ɾ����1��Ԫ��
	//myvector.erase(myvector.begin()+3);//ɾ����4��Ԫ��
	//myvector.erase()  ���ݵ�����ɾ��Ԫ��



	for (int i = 0; i < myvector.size(); i++)
	{
		//��ѯ �޸� if�ж� �޸�����
		cout << myvector.at(i) << endl;//��ӡԪ��
	}
	myvector.clear();//�������Ԫ��
	system("pause");
}



void main3()
{
	vector<int>myvector1;
	myvector1.push_back(1);
	myvector1.push_back(2);
	myvector1.push_back(3);

	vector<int>myvector2;
	myvector2.push_back(11);
	myvector2.push_back(12);
	myvector2.push_back(13);
	myvector2.push_back(14);

	vector<int>myvector3;
	myvector2.push_back(111);
	myvector2.push_back(122);
	myvector2.push_back(133);
	myvector2.push_back(144);
	myvector2.push_back(135);
	myvector2.push_back(146);

	vector<vector<int>>allvector;//�ɱ������Ԫ���ǿɱ�����
	allvector.push_back(myvector1);
	allvector.push_back(myvector2);
	allvector.push_back(myvector3);

	for (int i = 0; i < allvector.size(); i++)
	{
		for (int j = 0; j < allvector[i].size(); j++)
		{
			cout << allvector[i][j] << '\n';
		}
		cout << '\n';
	}

	system("pause");
}





