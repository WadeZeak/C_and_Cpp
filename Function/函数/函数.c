#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>//��׼��
#include<stdio.h>

#define Pi 3.14159



//�������ã�	�����ĵ�����C������Ҫ�Ǻ������
//дC���ԣ�����д����
//��Ҫ�Ǵ������ã�ģ�黯�����ڶ�λ���󣩣� 
//�������Ƕ�ĳһ�ض����ܵĳ���
void printR(double R)
{
	printf("�������:%.2f\n", 4 / 3 * Pi*R*R*R);

	printf("�������:%.2f", 4 * Pi*R*R);

}

void maindd()
{
	double x;
	scanf("%lf", &x);
	printR(x);

	system("pause");

}