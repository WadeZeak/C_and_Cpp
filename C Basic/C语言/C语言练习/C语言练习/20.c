
/*
某航空公司规定：在旅游旺季7─9月份，若订票超过20张，优惠票价的15％，20张以下，优惠5％；
在旅游淡季1─5月、10月、11月份订票超过20张，优惠30％，20张以下，优惠20％；其余月份不优惠。
请编程序能根据月份和旅客订票张数决定优惠率。
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void Rate_of_Concession(int month, int ticket)
{
	if (month<0||month>12||ticket<0)
	{
		printf("输入的数据有误!!\n");
		return;
	}


	if (month>=7&&month<=9)
	{
		if (ticket<20)
		{
			printf("优惠率为5%%\n");
		}
		else
		{
			printf("优惠率为15%%\n");
		}
	}
	else if ((month>=1&&month<=5)||month==10||month==11)
	{
		if (ticket<20)
		{
			printf("优惠率为20%%\n");
		}
		else
		{
			printf("优惠率为30%%\n");
		}
	}
	else
	{
		printf("不实行优惠政策\n");
	}

}

void main20()
{
	int month = 0;
	int ticket = 0;	
	printf("请输入旅游的月份:");
	scanf("%d", &month);
	printf("请输入订票的数量:");
	scanf("%d", &ticket);


	 Rate_of_Concession(month, ticket);
	system("pause");



}