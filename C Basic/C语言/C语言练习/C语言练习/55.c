/*
���ܣ���֪A����30��Ԫ�ص��������飬��дһ����A[I1]��A[I2]��I1��I2��֮���Ԫ������ĺ������Ӵ�С����
��������������Ƚ�A[5]��A[20]֮���Ԫ������Ȼ��A�е�����Ԫ��ֵ������ٵ�������������A[15]��A[30]֮���Ԫ������
����ٽ�A��30��Ԫ��ֵ�����
Ҫ��1) �����������������ʵ�֡�
2) ���ʱÿ10��Ԫ��ռ1�С�

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void Sort55(int A[],int I1, int I2)
{

	for (int i = I1 - 1; i < I2-1 ; i++)
	{
		for (int j = I1-1; j < I2-(i+1-I1)-1; j++)
		{
			if (A[j]>A[j+1])
			{
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
}


void main55()
{
	int A[30] = { 0 };
	for (int i = 0; i < 30; i++)
	{
		A[i] = rand()%100;
	}

	for (int i = 0; i < 30; i++)
	{
		printf("%4d", A[i]);
		if ((i+1) % 10 == 0)
		{
			printf("\n");
		}
	}
	int I1 = 0;
	int I2 = 0;
	
	printf("\n������I1��I2(I1<=I2):");

	scanf("%d", &I1);
	scanf("%d", &I2);
	Sort55(A, I1, I2);
	printf("\n��һ�������\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%4d", A[i]);
		if ((i+1)%10==0)
		{
			printf("\n");
		}
	}


	printf("\n\n\n������I1��I2(I1<=I2):");

	scanf("%d", &I1);
	scanf("%d", &I2);

	Sort55(A, I1, I2);
	printf("\n�ڶ��������\n");

	for (int  i = 0; i < 30; i++)
	{
		printf("%4d", A[i]);
		if ((i+1) % 10 == 0)
		{
			printf("\n");
		}
	}

	system("pause");
}