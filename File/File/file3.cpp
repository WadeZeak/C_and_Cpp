#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"

//���ļ�data1.txt�е����ݸ��Ƶ�data2.txt
int _tmain3(int argv, TCHAR argc[])
{
	FILE *data1, *data2;
	//char *szbuf = (char *)malloc(sizeof(char) * 100);
	char szbuf[100];
	//�������ļ�
	data1=fopen("F:\\data1.txt","r");
	data2 = fopen("F:\\data2.txt", "w");

	//���ļ�data1.txt���ж�ȡ
	while((fgets(szbuf, 100, data1))!= NULL)
	{
		//����ȡ������д��data2.txt
		fputs(szbuf, data2);
	}
	

	

	fclose(data1);
	fclose(data2);
	return 0;

}