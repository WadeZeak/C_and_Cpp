/*
42.	дһ�������Ƚ������ַ���,���s1=s2��
�򷵻�ֵ0�����s1>s2���򷵻�ֵ1�����s1<s2�� �򷵻�-1��
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

	if (*p1=='\0')//str1�Ƚ϶�
	{
		return -1;
	}
	else if (*p2 == '\0')//str2�Ƚ϶�
	{
		return 1;
	}
	return 0;
}


void main42()
{
	
	char str1[maxLen] = { 0 };
	char str2[maxLen] = { 0 };

	printf("�������ַ���1:");
	scanf("%s", str1);

	printf("�������ַ���2:");
	scanf("%s", str2);
	int k=strCompare(str1, str2);
	if (k==0)
	{
		printf("�����ַ���һ��\n");
	}
	else if (k==1)
	{
		printf("��һ���ַ����Ƚϴ�\n");
	}
	else
	{
		printf("�ڶ����ַ����Ƚϴ�\n");
	}


	system("pause");
}