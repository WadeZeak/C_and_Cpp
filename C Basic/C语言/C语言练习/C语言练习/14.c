
/*
14.	编写一个函数，由参数传来一个字符串，分别求出此字符串中字母、
数字和其它字符（不包括空格）的个数，输入和输出均由主函数实现

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100

void  analyse(int *count, char *pstr)
{
	while (*pstr)
	{

		if (*pstr<='Z'&&*pstr>='A'||*pstr>='a'&&*pstr<='z')
		{
			count[0]++;
		}
		else if (*pstr>='0'&&*pstr<='9')
		{
			count[1]++;
		}
		else
		{
			count[2]++;
		}
		pstr++;
	}
	
}

void main14()
{
	char str[N] = { 0 };
	scanf("%s", str);
	int count[3] = { 0 };
	analyse(count, str);
	printf("字母个数:%d\n", count[0]);
	printf("数字个数:%d\n", count[1]);
	printf("其他字符个数:%d\n", count[2]);
	system("pause");


}