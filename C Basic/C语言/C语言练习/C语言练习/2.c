/* 2.	��һ���Ȳ�����40���ַ�������֪���а��������ַ���A����
�����������ַ���A���м���ַ�������������Щ�ַ����δ�ӡ����*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


#define MAXLEN 40

void main2()
{

	char str[MAXLEN] = { 0 };
	scanf("%s", str);
	int count = 0;
	int i = 0;
	do
	{
		if (str[i]=='A')
		{
			i++;
			while (str[i]!='A'&&str[i]!='\0')
			{
				count++;
				i++;
			}

			break;
		}
	} while (str[i++]!='\0');


	printf("�ַ�����:%d\n", count);
	system("pause");

}