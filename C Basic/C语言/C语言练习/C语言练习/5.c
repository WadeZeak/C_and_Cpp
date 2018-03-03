/* 5.	某单位排队形，开始排成3路纵队，末尾多出了2人。后改成5路纵队，
末尾又多出了3人，最后改成7路纵队，正好没有余数。编程序求出该单位至少有多少人。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main5()
{
	int i = 0;
	while (++i)
	{
		if (i%3==2&&i%5==3&&i%7==0)
		{
			printf("%d\n", i);
			break;
		}

	}

	system("pause");
}