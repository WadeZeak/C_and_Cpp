
/*
54.	��N���ƣ��������������ȡ�ƣ�ÿ��ֻ��ȡ 1��2�ţ�˭���ȡ��˭ʤ������д��ɴ˹��ܵĳ���
Ҫ��
1) �ü������ȡ��
2) ��ȡ�������ɼ������롣
3) �������һ��ȡ��ʱ�ɼ���������ȷ����ȡ1����ȡ2���Ժ�����ȡ��ʱ�ɳ����ж�������ȡ�����ơ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void main54()
{

	int mflag = 0;
	printf("������ȡ�Ƶ�˳��: 1���������ȡ,2����������ȡ\n");
	scanf("%d", &mflag);
	if (mflag!=2&&mflag!=1)
	{
		printf("�������������!!\n");
		system("pause");
		return;
	}

	int cards = 0;
	int num =0;
	int tmp = 0;
	printf("�������Ƶ�����:");
	scanf("%d", &num);
	if (num<2)
	{
		printf("�������������!!\n");
		system("pause");
		return;
	}
	if (mflag==1)
	{
	
		while (num)
		{
		
			printf("���������ȡ�Ƶ�����:");
			scanf("%d", &cards);
			if (cards != 1 && cards != 2)
			{
				printf("�������������!!\n");
				system("pause");
				return;
			}
			num -= cards;
			printf("ʣ����Ƶ�����:%d\n", num);
			if (num<=0)
			{
				printf("��һ�ʤ!!\n");
				system("pause");
				return;
			}

			tmp = rand() % 2 + 1;
			num -= tmp;
			printf("����ȡ��:%d\n", tmp);
		//	printf("ʣ����Ƶ�����:%d\n", num);
			if (num<=0)
			{
				printf("���Ի�ʤ!!");
				system("pause");
				return;
			}

		}

	}
	else
	{
		while (num)
		{
			tmp = rand() % 2 + 1;
			num -= tmp;
		//	printf("ʣ����Ƶ�����:%d", num);
			printf("����ȡ��:%d\n", tmp);

			if (num<=0)
			{
				printf("���Ի�ʤ!!\n");
				system("pause");
				return;
			}
			printf("���������ȡ�Ƶ�����:");
			scanf("%d", &cards);
			if (cards != 1 && cards != 2)
			{
				printf("�������������!!\n");
				system("pause");
				return;
			}
			num -= cards;
			printf("ʣ����Ƶ�����:%d\n", num);
			if (num<=0)
			{
				printf("��һ�ʤ!!");
				system("pause");
				return;
			}
		}
	}



}