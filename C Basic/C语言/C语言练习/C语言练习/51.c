/*
���ܣ���Ȼ��Nһ��д��������ʽ: N=d[k]d[k-1]d[1]    ��d[1]��d[k] ����ʮ�������֣�
���d[i+1]>d[i] (i=k-1,k-2,...,1)�����N���ϸ����������d[i+1]<d[i] (i=k-1,k-2,...,1)��
���N���ϸ������������d[i+1]=d[i] (i=k-1,k-2,...,1)�����N�ǵ����������⣬���N����������
���磬 4321���ϸ�������1234���ϸ���������2222�ǵ�������1243�����������Ӽ���������һ������9������N����������������һ�ࡣ
*/




#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int judge(int *p, int n);
void main51()
{

	int  num = 0;
	printf("������һ������9������:");
	scanf("%d", &num);
	if (num<=9)
	{
		printf("��������ݲ�����Ҫ��!!!\n");
		system("pause");
		return;
	}
	int n = 0;

	int tmp = num;
	while (tmp)
	{
		n++;
		tmp /= 10;
	}
	int *p = (int *)malloc(sizeof(int)*n);
	tmp = num;

	for (int i = n-1; i >=0; i--)
	{		
		p[i] = tmp % 10;
		tmp /= 10;
	}
	int flag=judge(p, n);
	switch (flag)
	{
	case 0:
		printf("�������Ȼ��Ϊ������\n");
		break;
	case 1:
		printf("�������Ȼ��Ϊ�ϸ�������\n");
		break;
	case 2:
		printf("�������Ȼ��Ϊ�ϸ�����\n");
		break;
	case 3:
		printf("�������Ȼ��Ϊ�ϸ������\n");
		break;
	default:
		break;
	}
	system("pause");
}

int judge(int *p, int n)
{
	int upflag = 1;

	for (int  i = 0; i < n-1; i++)//����
	{
		if (p[i]>=p[i+1])
		{
			upflag = 0;
			break;
		}

	}
	
	int downflag = 1;

		for ( int  i = 0; i < n-1; i++)
		{		
				if (p[i] <= p[i + 1])
				{
					downflag = 0;
					break;
				}
		}


		int eqflag =1;
	   for (int i = 0; i < n - 1; i++)
		{
				if (p[i] != p[i + 1])
				{
					eqflag = 0;
					break;
				}
		}

	   if (upflag)
	   {
		   return 1;
	   }
	   else if (downflag)
	   {
		   return 2;
	   }
	   else if (eqflag)
	   {
		   return  3;
	   }
	   else
	   {
		   return 0;
	   }
}