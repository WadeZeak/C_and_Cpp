//file.cpp �������̨Ӧ�ó�����ڵ�
//���Ȱ�װ Multibyte MFC Library for Visual Studio 2013
#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"




int _tmain1(int argc, _TCHAR argv[])
{
	FILE *fp;
	//char *filename = (char *)malloc(sizeof(char) * 2000);
	char filename[200];
	printf("Input the  filename:\n");
	scanf("%s", filename);
	fp=fopen(filename,"r");
	
	printf("%p\n", fp);
	if (fp == NULL)
	{
		
		printf("Can't open the file .\n");
		system("pause");
		exit(1);
		//һ������£�exit(0) ���������˳�,��exit(����)���ǳ�������˳�

	}



//char fc=fputc('A', fp);//д���ַ�
//
//
//printf("EOF=%d\n",fc);
//printf("%c\n", fc);
//if (EOF == fc)//EOF=-1
//{
//	printf("д��ʧ��");
//}
//else
//{
//	printf("д��ɹ�");
//}



	//�����ַ�
	//�س�Ҳ���ַ�
	//while (1)
	//{
	//	char ch = getchar();
	//	//fflush(stdin);//������뻺����
	//	if (ch == '*')
	//		break;
	//	else
	//		fputc(ch, fp);
	//}

	//��ȡ�ַ�
	/*
	while (1)
	{
		char ch = fgetc(fp);
		if (ch == EOF)
			break;
		printf("%c", ch);
	}
*/

	fclose(fp);//��fָ����ļ��رգ�fp����ָ����ļ�

	system("pause");
	return 0;
}