/*
���ܣ���д����IND�������ж�һ���ַ����Ƿ�Ϊ��һ���ַ������Ӵ��Ĺ��ܣ������򷵻ص�һ�γ��ֵ���ʼλ�ã����򷵻�0

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int  IND(char *str1,char *str2)
{
	int  len1 = 0;
	int len2 = 0;
	while (str1[len1])
	{
		len1++;
	}
	while (str2[len2])
	{
		len2++;
	}

	int count = 0;
	for (int  i = 0; i < len1; i++)
	{
		count = 0;
		for (int  j = 0; j < len2; j++)
		{
			
			if (str1[i + j] != str2[j])
				break;
			else
				count++;
		}
		if (count == len2)
		{
			return i;
		}
	}
	return 0;
}

void main13()
{

	char str1[100] = { 0 };
	char str2[100] = { 0 };
	scanf("%s", str1);
	scanf("%s", str2);
	int pos=IND(str1, str2);
	printf("start_pos=%d", pos);
	system("pause");

}