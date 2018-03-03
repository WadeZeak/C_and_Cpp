/*
功能：自然数N一般写成如下形式: N=d[k]d[k-1]d[1]    （d[1]～d[k] 均是十进制数字）
如果d[i+1]>d[i] (i=k-1,k-2,...,1)，则称N是严格降序数；如果d[i+1]<d[i] (i=k-1,k-2,...,1)，
则称N是严格升序数；如果d[i+1]=d[i] (i=k-1,k-2,...,1)，则称N是等序数；此外，则称N是无序数。
例如， 4321是严格降序数，1234是严格升序数，2222是等序数，1243是无序数。从键盘上输入一个大于9的整数N，判它属于上述哪一类。
*/




#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int judge(int *p, int n);
void main51()
{

	int  num = 0;
	printf("请输入一个大于9的数字:");
	scanf("%d", &num);
	if (num<=9)
	{
		printf("输入的数据不符合要求!!!\n");
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
		printf("输入的自然数为无序数\n");
		break;
	case 1:
		printf("输入的自然数为严格升序数\n");
		break;
	case 2:
		printf("输入的自然数为严格降序数\n");
		break;
	case 3:
		printf("输入的自然数为严格等序数\n");
		break;
	default:
		break;
	}
	system("pause");
}

int judge(int *p, int n)
{
	int upflag = 1;

	for (int  i = 0; i < n-1; i++)//递增
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