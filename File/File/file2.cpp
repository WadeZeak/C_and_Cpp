#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"


int _tmain2(int argc, _TCHAR argv[])
{

	FILE *fp;
	//char *filename = (char *)malloc(sizeof(char) * 2000);
	char filename[200];
	char *str = (char *)malloc(sizeof(char) * 100);
	printf("Input the  filename:\n");
	scanf("%s", filename);
	fp = fopen(filename, "r");
	printf("%p\n", fp);
	if (fp == NULL)
	{

		printf("Can't open the file .\n");
		system("pause");
		exit(1);
		//һ������£�exit(0) ���������˳�,��exit(����)���ǳ�������˳�

	}

	//д���ַ���
	//fputs("Hello World!!!\nHello China!!!", fp);
	//fputs("\nHello BaiDu!!!\nHello Google!!!", fp);

	//���ļ��ж�ȡһ���ַ���

	fgets(str, 100, fp);
	printf("%s\n", str);



	fclose(fp);//��fָ����ļ��رգ�fp����ָ����ļ�
	system("pause");
	return 0;





}