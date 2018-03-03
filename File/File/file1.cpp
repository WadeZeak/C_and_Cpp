//file.cpp 定义控制台应用程序入口点
//首先安装 Multibyte MFC Library for Visual Studio 2013
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
		//一般其况下，exit(0) 程序正常退出,而exit(非零)则是程序出错退出

	}



//char fc=fputc('A', fp);//写入字符
//
//
//printf("EOF=%d\n",fc);
//printf("%c\n", fc);
//if (EOF == fc)//EOF=-1
//{
//	printf("写入失败");
//}
//else
//{
//	printf("写入成功");
//}



	//输入字符
	//回车也算字符
	//while (1)
	//{
	//	char ch = getchar();
	//	//fflush(stdin);//清空输入缓冲区
	//	if (ch == '*')
	//		break;
	//	else
	//		fputc(ch, fp);
	//}

	//读取字符
	/*
	while (1)
	{
		char ch = fgetc(fp);
		if (ch == EOF)
			break;
		printf("%c", ch);
	}
*/

	fclose(fp);//将f指向的文件关闭，fp不再指向该文件

	system("pause");
	return 0;
}