/*
�����һ��������д������������������ƽ���ͣ������ܳ���ʱ�����NO��������
5 �� 1^2 + 2^2  �� 25 �� 3^2 + 4^2
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void main32()
{

	int num = 0;
	printf("����������:");
	scanf("%d", &num);

	for (int i = 1; i <= sqrt(num); i++)
	{
		for (int j = 1; j <= sqrt(num-i*i); j++)
		{
			if (j*j==num-i*i)
			{
				printf("%d=%d*%d+%d*%d\n", num, i, i, j, j);
				system("pause");
				return;
			}

		}
	}

	printf("NO\n");
	system("pause");

}