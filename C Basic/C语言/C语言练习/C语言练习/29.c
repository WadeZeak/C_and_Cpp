/*
���ܣ����ά������ÿ��Ԫ�ص�ƽ��ֵ��������������������

*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void main29()
{
	srand((unsigned)time(NULL));
	int arr[5][5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100;
			printf("%4d", arr[i][j]);
		}
		
		printf("\n");
	}

	int line_sum = 0;
	for (int  i = 0; i < 5; i++)
	{
		for (int  j = 0; j < 5; j++)
		{
			line_sum += arr[i][j];
		}
		printf("��%d�е�ƽ��ֵΪ%d\n", i+1, line_sum / 5);
		line_sum = 0;
	}
	system("pause");

}