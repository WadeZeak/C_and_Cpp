#include<iostream>
#include<stdlib.h>
#include<new>


using namespace std;

const int buf(512);//�޶�һ����������
int N(5);//�����С
char buffer[buf] = { 0 };//�ھ�̬��  512�ֽ�




void main1()
{
	//cout << sizeof(double) << endl; 
	double *p1, *p2;
	p1 = new double[N];//����һƬ�����ڴ�,N��Ԫ�ش�С
	p2 = new(buffer)double[N];//ָ����������ڴ�

	for (int i = 0; i < N; i++)//�����ʼ��
	{
		p1[i] = p2[i] = static_cast<double>(i)+10.9;
		cout << &p1[i] <<"," << p1[i] <<'\t' << &p2[i]<<","<<p2[i]<< endl;
	}

	system("pause");
}



void main()
{


	double *p1, *p2;
		p1 = new double[N];//����һƬ�����ڴ�,N��Ԫ�ش�С
		p2 = new(buffer)double[N];//ָ����������ڴ�  �˴��޶������ھ�̬�� ʵ�ַ���ʹ����Ƭ�ڴ�


		for (int i = 0; i < N; i++)//�����ʼ��
		{
			p1[i] = p2[i] = static_cast<double>(i)+10.9;
			cout << &p1[i] << "," << p1[i] << '\t' << &p2[i] << "," << p2[i] << endl;
		}
		cout << "\n\n" << endl;

		delete[]p1;//�ͷ��ڴ�󣬱������Ż�����ʹ��ͬһƬ�ڴ�,������ͷ�,������������ڴ�


	double *p3, *p4;
	p3 = new double[N];
	p4 = new(buffer)double[N];//�޶��ڴ�����,ʹ����Ϻ��Զ��ͷ�

	for (int i = 0; i < N; i++)//�����ʼ��
	{
		p3[i] = p4[i] = static_cast<double>(i)+883.8;
		cout << &p3[i] << "," << p3[i] << '\t' << &p4[i] << "," << p3[i] << endl;
	}
	cout << "\n\n" << endl;
	delete[]p3;

	double *p5, *p6;
	p5 = new double[N];
	p6 = new(buffer)double[N];

	for (int i = 0; i < N; i++)//�����ʼ��
	{
		p5[i] = p6[i] = static_cast<double>(i)+56.4;
		cout << &p5[i] << "," << p5[i] << '\t' << &p6[i] << "," << p6[i] << endl;
	}
	cout << "\n\n" << endl;
	delete[]p5;

	//p1,p3,p5�����ڴ�ķ�ʽ���ܳ����ڴ�й©   
	//p2,p4,p6�޶��ڴ�ʹ������ɱ����ڴ�й¶ �������ڴ���ʵĶ�����


	//p1,p3,p5ָ����ڴ��ڶ���,�����Ǵ洢�ڶ��� 
	//�ֶ��ͷ��ڴ�

	//p2,p4,p6��Ϊָ������洢��ջ��,ָ��ĵ�ַ�ھ�̬��  ������
	//�Զ��ͷ��ڴ�,���������˱㲻����ʹ�õ�����

	system("pause");
}