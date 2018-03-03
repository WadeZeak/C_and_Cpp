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
		//一般其况下，exit(0) 程序正常退出,而exit(非零)则是程序出错退出

	}

	//写入字符串
	//fputs("Hello World!!!\nHello China!!!", fp);
	//fputs("\nHello BaiDu!!!\nHello Google!!!", fp);

	//从文件中读取一行字符串

	fgets(str, 100, fp);
	printf("%s\n", str);



	fclose(fp);//将f指向的文件关闭，fp不再指向该文件
	system("pause");
	return 0;





}