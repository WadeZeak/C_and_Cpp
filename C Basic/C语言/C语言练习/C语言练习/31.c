/*
31.	猜号码∶由随机函数产生一个1至1000之间的整数，让人猜之。
计算机仅回答人猜的数大、小还是相等，当人猜对时，
由计算机打印出人一共猜了几次
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
		printf("请输入猜测的数字:");
		scanf("%d", &n);
		
		if (n==num)
		{
			
			printf("恭喜,回答正确!!!!总共猜测%d次\n",count);
			break;
		}
		else if (n>num)
		{
			printf("猜测的数据过大\n");
		}
		else
		{
			printf("猜测的数据较小\n");
		}
		
		printf("\n");
	}


	system("pause");

}