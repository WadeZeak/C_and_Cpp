/*6.	��һ��6��6����ĵ�һ�С������С����Խ��ߺ͸��Խ����ϵ�Ԫ�ض�����1��
�����Ԫ�ض����� - 1��������ʵ�֡�*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main6()
{
	int arr[6][6];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (i==0||i==5||i==j||j==5-i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = -1;
			}
			
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j= 0; j < 6; j++)
		{
			printf("%3d", arr[i][j]);

		}
		printf("\n");
	}


	system("pause");
}