#include<iostream>
#include<stdlib.h>
#include<map>

//��Ԫ����
using namespace std;

//vector ����һ��


void main(void)//void�ڲ����ڲ���ζ�Ų���Ϊ��,��дҲ��ζ��Ϊ��
{
	
	int num = 1;
	double db = 10.9;
	char chr = 'A';
	char *str = "HelloWorld";//����

	tuple<int, double, char, const char *>mytuple( num, db, chr, str );//��ʼ��
	

			const int num = 3;

		auto data1 = get<0>(mytuple);//����
		auto data2 = get<1>(mytuple);
		auto data3 = get<2>(mytuple);
		auto data4 = get<3>(mytuple);

		
		
		cout <<typeid(data1).name() <<'\t'<<data1 << endl;	
		cout << typeid(data2).name() << '\t' << data2 << endl;
		cout << typeid(data3).name() << '\t' << data3 << endl;
		cout << typeid(data4).name() << '\t' << data4 << endl;


	
		decltype(data1) dataA;//��ȡ�����ٴδ���

	//	mytuple.swap(mytuple);//ʵ�ֽ�������
	//vector��array������������
		



	system("pause");
}

//tuple ������һ����̬����
//tuple ���vector��array
//ֻ���ó�����ʽ����