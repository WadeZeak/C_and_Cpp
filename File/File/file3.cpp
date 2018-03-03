#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"

//将文件data1.txt中的内容复制到data2.txt
int _tmain3(int argv, TCHAR argc[])
{
	FILE *data1, *data2;
	//char *szbuf = (char *)malloc(sizeof(char) * 100);
	char szbuf[100];
	//打开两个文件
	data1=fopen("F:\\data1.txt","r");
	data2 = fopen("F:\\data2.txt", "w");

	//从文件data1.txt进行读取
	while((fgets(szbuf, 100, data1))!= NULL)
	{
		//将读取的内容写入data2.txt
		fputs(szbuf, data2);
	}
	

	

	fclose(data1);
	fclose(data2);
	return 0;

}