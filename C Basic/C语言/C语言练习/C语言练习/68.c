/*
68.	��������������10�����ȳ����ַ���������һ��������������
Ȼ�����������������10�����ź�����ַ�������ָ��������ɡ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strSort(char **pp)
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = strlen(*(pp + i));
	}


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				char *ptmp = *(pp + j);
				*(pp + j) = *(pp + j + 1);
				*(pp + 1 + j) = ptmp;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}



void main68()
{
	char *p[10] = { "11", "44444", "222", "6666666", "3333", "555555", "99999999999", "7777777", "0", "88888888" };
	char **pp = p;

	strSort(pp);


	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", p[i]);
	}

	system("pause");

}