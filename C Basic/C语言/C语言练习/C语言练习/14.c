
/*
14.	��дһ���������ɲ�������һ���ַ������ֱ�������ַ�������ĸ��
���ֺ������ַ����������ո񣩵ĸ�����������������������ʵ��

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
	printf("��ĸ����:%d\n", count[0]);
	printf("���ָ���:%d\n", count[1]);
	printf("�����ַ�����:%d\n", count[2]);
	system("pause");


}