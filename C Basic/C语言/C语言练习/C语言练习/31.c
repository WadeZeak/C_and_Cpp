/*
31.	�º�����������������һ��1��1000֮������������˲�֮��
��������ش��˲µ�����С������ȣ����˲¶�ʱ��
�ɼ������ӡ����һ�����˼���
*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>


void main31()
{
	srand((unsigned)time(NULL));
	int num = rand() % 1000;
	printf("%d\n",num);
	int n = 0;
	int count = 0;
	while (1)
	{
		count++;
		printf("������²������:");
		scanf("%d", &n);
		
		if (n==num)
		{
			
			printf("��ϲ,�ش���ȷ!!!!�ܹ��²�%d��\n",count);
			break;
		}
		else if (n>num)
		{
			printf("�²�����ݹ���\n");
		}
		else
		{
			printf("�²�����ݽ�С\n");
		}
		
		printf("\n");
	}


	system("pause");

}