/*
66.	��д��һ��ʮ������Mת����N��������2��N��16���ĳ���
��ʾ��ת����N�������ĸ�λ�����Էֱ��������ĸ���Ԫ���С�
����ע�⣺����N����10ʱ, ��A��ʾ10��B��ʾ11,����F��ʾ15��
  */
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void Conversion(int num, int N)
{
	if (!num)
	{
		return;
	}
	else
	{
		
		Conversion(num / N, N);
		if (num%N>=10)
		{
			printf("%c", num%N-10 + 'A');
		}
		else
		{
			printf("%d", num%N);
		}
		
	}
}

void main66()
{
	int num;
	int N;
	printf("���������ת��������:");
	scanf("%d", &num);
	printf("���������(2-16):");
	scanf("%d", &N);
	Conversion(num, N);
	printf("\n");
	system("pause");

}