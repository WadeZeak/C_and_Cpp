
/* 4.	��һ�����򣬰�һ�����������е�ż����������ƽ��ֵ�ֱ���������������Ϊ��ֹ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void main4()
{	
	int Oddsum = 0;
	int Evensum = 0;
	int num=0;
	int oddi = 0;
	int eveni = 0;

	while (1)
	{
		scanf("%d", &num);
		if (num==0)
		{
			printf("Oddsum=%d,Oddavg=%d\n", Oddsum, Oddsum / oddi);
			printf("Evensum=%d,Evenavg=%d\n", Evensum, Evensum / eveni);
			break;
		}
		else
		{

			if (num%2==0)
			{
				eveni++;
				Evensum += num;
			}
			else
			{
				Oddsum += num;
				oddi++;
			}

		}
	}
	system("pause");
}