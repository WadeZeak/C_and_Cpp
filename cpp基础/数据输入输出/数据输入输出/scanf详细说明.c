#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



void main98()
{

	char c1, c2, c3;
	scanf("%c%c%c",&c1,&c2,&c3);
	printf("[%c][%c][%c]",c1,c2,c3);//�ո񣬻س��൱��һ���ַ�
	system("pause");


}

void main9999()
{
	int num=0;
	scanf("%d",num);//��num������ַ���з���
	printf("%d", num);	
	system("pause");
}

void maindd()
{

	float f1=0.00;
	scanf("%7.5f", &f1);//���û����Ч������ָ����������ľ���
	printf("%f", f1);
	system("pause");


}


void main1461()
{
	int num1,num2,num3;
	scanf("%3d%3d%d", &num1,&num2,&num3);//%3f ��ȡ���������������������
	printf("%d,%d,%d", num1,num2,num3);
	system("pause");


}


void main1111()
{
	int x, y;
	scanf("%d,%d", &x, &y);//�������붺��
	//scanf ���˸�ʽ������������ַ�����Ҫ���룬�ո�û��Ӱ��
	printf("x=%d,y=%d", x, y);


	system("pause");


}

void main1998()
{
	int num1=0, num2=0,num3=0;
	scanf("%d%*d%d", &num1, &num2, &num3);//*�����������������
	//scanf �����������ʽ������һһ��Ӧ

	printf("num1=%d,num2=%d,num3=%d",num1,num2,num3);


	system("pause");
}



void main989()
{
	/*
	long lg; //��32λ���ϵ�Ʒ̨��long��int�ȼ�

	scanf("%d", &lg);
	printf("%d", lg);
	*/
	long long ll; 

	//Ƕ��ʽ������long long
	//32λ����ϵͳ����,%d���㹻��
	scanf("%d", &ll);
	printf("%d", ll);
	system("pause");

}

void main97()
{
	/*
	float f;
	scanf("%f",&f);
	printf("%f", f);
	*/
	double db=1.0;
	scanf("%lf", &db);
	//%fɨ�����double���͵�������Ч����Ҫʹ��%lf
	printf("%f", db);//�����Ч
	system("pause");

}