#include<stdio.h>
#include<stdlib.h>

void print(int a, char b, float c)
{
	printf("a=%d,b=%c,c=%f", a, b, c);
}

void main()
{
	//print(10.5,'A',1); //�������õ�ʱ��ʵ�����β�Ӧ�������Ӧ
	//print(1, 1);	//�������õ�ʱ�򣬸���Ҫһһ��Ӧ
	print(10.5,97, 1);//��ֵ���Զ�������������ת��
	//�������õ�ʱ�򣬻��Զ�������ֵ��
	//ʵ����ת��Ϊ��ʽ����������
	getchar();


}