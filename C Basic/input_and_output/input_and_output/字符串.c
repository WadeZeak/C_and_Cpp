#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void main100()
{
	/*int num;
	scanf("%d", &num);*/

	char str[50];
	scanf("%s", str);
	char strurl[50];
	sprintf(strurl, "echo%10.7s", str);//%m.ns ��ȡ�ַ�����ǰn���ַ�,����n-m���ַ�
	printf("str=%s,strurl=%s\n", str, strurl);
	system(strurl);
	system("pause");

}