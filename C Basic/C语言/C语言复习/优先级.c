#include<stdlib.h>
#include<stdio.h>

void main2()
{

	int a[] = { 1, 2, 3, 4, 5, 6 };
	int *p = a;


	//���ȼ���ͬһ������������ִ��
	//��������ȼ���ȵ�����£����㷽��


	//printf("%d\n", *p++);//++ �����ȼ����� * �ȼ���  p++�ȵ���,������  *(p++) 
	//printf("%d\n", *++p);//2 ������,�ٵ���
	printf("%d\n", ++*p);//���ȼ�����Ҫ�Ӵ�    �Ƚ��,������ �����

	getchar();



}


void main3()
{
	int i = 0;
	while (i++<5)
	{
		printf("gogogogo\n");

	}

	getchar();

}




void main4()
{

	int a = 10; 
	int b = 0;
	//printf("%d\n", b&&++a); //��·���� ++aû����Ч
	//printf("%d,%d\n", a ,b);

	printf("%d\n", b||++a); //��·����
	printf("%d,%d\n", a, b);

	getchar();

}




void main5()
{


	long long  data = 11234567890;//long long 8�ֽ�
	printf("%lld\n", data);
	getchar();



}