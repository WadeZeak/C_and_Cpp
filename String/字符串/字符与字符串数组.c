#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


void maintrhrth()
{
	//�ڲ���ϵͳ��,C���ݽ������豸�����ļ����в���
	/*printf("printf-HelloWorld\n");
	fprintf(stdout,"fprintf-HellWorld\n");*/
	//stdin�Ǳ�׼���룬һ��ָ�������뵽��������Ķ�����
	//stdout��һ���ļ�ָ��,C������ͷ�ļ��ж���õ��ˣ�����ֱ��ʹ�ã�����������һ���ļ�ָ�롣
	char str[10];
	fscanf(stdin, "HelloWorld", str);

	system("pause");
}

void main911()
{
	char str[50];
	char str1[10];
	char str2[10];
	gets(str1);
	scanf("%s", str2);
	printf("%s %s\n", str1, str2);
	sprintf(str, "%s %s",str1,str2);//��ʽ���ַ�����ӡ��str
	system(str);
	fprintf(stdout, "HelloWorld");
	system("pause");


}




//void xxxx()
//{
//
//	char str[10] = "tasklist";
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c", str[i]);
//	}
//
//	printf("%s", str);//����\0 �Զ���ֹ
//	for (char *p = str; p < str + 10; p++)
//	{
//		printf("%c", *p);
//	}
//	system("pause");
//
//
//}