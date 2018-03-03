/*
42.	写一个函数比较两个字符串,如果s1=s2，
则返回值0；如果s1>s2，则返回值1；如果s1<s2， 则返回-1。
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define maxLen 100

int strCompare(char *str1, char *str2)
{
	char *p1 = str1;
	char *p2 = str2;
	while (*p1!='\0'&&*p2!='\0')
	{
		if (*p1>*p2)
		{
			return 1;
		}
		else if (*p1<*p2)
		{
			return -1;
		}
		p1++;
		p2++;
	}

	if (*p1=='\0')//str1比较短
	{
		return -1;
	}
	else if (*p2 == '\0')//str2比较短
	{
		return 1;
	}
	return 0;
}


void main42()
{
	
	char str1[maxLen] = { 0 };
	char str2[maxLen] = { 0 };

	printf("请输入字符串1:");
	scanf("%s", str1);

	printf("请输入字符串2:");
	scanf("%s", str2);
	int k=strCompare(str1, str2);
	if (k==0)
	{
		printf("两个字符串一样\n");
	}
	else if (k==1)
	{
		printf("第一个字符串比较大\n");
	}
	else
	{
		printf("第二个字符串比较大\n");
	}


	system("pause");
}