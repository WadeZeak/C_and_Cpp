#include<stdlib.h>
#include<stdio.h>
#include<limits.h>

void main8()
{

	int x = 1;
	int y = -1;

	printf("%p,%p\n", &x, &y);
	system("pause");

}


void main9()
{
	//int/unsigned int 4�ֽ� 32λ

	//1111 1111 1111 1111 1111 1111  1111 1111 1111 //����   ȫ������
	//0111 1111 1111 1111 1111 1111  1111 1111 1111 //�з��� ���һλ������� 0 :+  ; 1-> -
	printf("%d,%d\n", INT_MAX, INT_MIN);//%d��Χ INT_MIN -- INT_MAX 
	printf("%d,%d\n", INT_MAX-1, INT_MIN-1);
	printf("%u,%u\n", 0, UINT_MAX);//%u ��Χ 0--UINT_MAX



	system("pause");
}

void main11()
{
	int num = UINT_MAX;//-1

	//1111 1111 1111 1111 1111 1111 1111 1111
	//�޷���,û�з���Ϊ��ȫ��������  4294967285
	//�з��� ,��ȡ����,��ȡ���� -1

	printf("%u,%d\n",num, num);

	//0000 0000 0000 0000 0000 0000 0000 0001   1 ԭ�� �����룬�����һ����

	//1000 0000 0000 0000 0000 0000 0000 0001  -1 ԭ��
	//1111 1111 1111 1111 1111 1111 1111 1110 -1  ����
	//1111 1111 1111 1111 1111 1111 1111 1111  -1 ����


	int y = -1;
	printf("%d,%u\n", y, y);



	system("pause");

}



void hrh757()
{


	unsigned int num = -1;
	printf("%u,%d\n", num, num);

	system("pause");
}