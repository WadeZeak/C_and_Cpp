#define _CRT_SECURE_NO_WARNINGS //�رհ�ȫ���

#include<stdio.h>
#include<stdlib.h>

void main4()
{
	int num;
	char str[50];
	scanf("%d",&num);//��ֵ��ע��&
	sprintf(str,"for /l %%i in (1,1,%d) do notepad",num);
	//���ַ����У�%%�൱��%
	//������ start�����ǲ���
	system(str);
	system("pause");
}