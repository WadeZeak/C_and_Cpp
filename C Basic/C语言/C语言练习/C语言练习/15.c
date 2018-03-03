/*
15.	已知某年不是闰年，给定该年某一天的月份和日期，
求这一天是该年的第几天。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main15()
{

	int month = 0;
	scanf("%d", &month);
	int date=0;
	scanf("%d", &date);
	int Sumday = 0;
	switch (month-1)
	{
	case 1:
		Sumday = 31;
		break;
	case 2:
		Sumday = 59;
		break;
	case 3:
		Sumday = 90;
		break;
	case 4:
		Sumday = 120;
		break;
	case 5:
		Sumday = 151;
		break;
	case 6:
		Sumday = 181;
		break;
	case 7:
		Sumday = 212;
		break;
	case 8:
		Sumday = 243;
		break;
	case 9:
		Sumday = 273;
		break;
	case 10:
		Sumday = 304;
		break;
	case 11:
		Sumday = 334;
		break;
	
	default:
		break;
	}

	printf("days=%d\n", Sumday + date);
	system("pause");

}