#include<stdio.h>
#include<float.h>
#include<limits.h>

void main3()
{
	printf("%d",sizeof(4));
	printf("\n%d", sizeof(4.0));//double
	printf("\n%d", sizeof(4.0f));//float
	printf("\n%d",sizeof(4u));//�޷�������
	getchar();
}


void main2()
{

	printf("%d,%d", sizeof(float), sizeof(int));
	//ʵ����ָ����ʽ�洢
	printf("\n%f,%.100f", FLT_MAX, FLT_MIN);//float.h
	//����һһ��Ӧ�����㣬������С����
	printf("\n%d,%d",INT_MAX,INT_MIN);//limits.h
	printf("%f,%.500f",DBL_MAX,DBL_MIN );
	getchar();
}

void main1()
{

	printf("%f", 1.0e40);

	printf("\n%f",10.0);//printf()�����Զ�ת���������Լ��ķ�ʽ���
	getchar();
}


