#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"

struct Student
{
	char name[100];
	int age;
	char sex;
}stu = {"Korea",17,'M'},stu2;




int _tmain4(int argc, TCHAR argv[])
{

	//FILE *fp1;
	FILE *fp2;

	//char *szBuf = (char *)malloc(100);

//	fp1= fopen("F:\\data3.txt", "w+");
	//���ո�ʽд��
	//fprintf(fp1, "%s\t%d\t%c", stu.name, stu.age, stu.sex);
	//fprintf(fp2, "%s\t%d\t%c", stu.name, stu.age, stu.sex);

	fp2 = fopen("F:\\data4.txt", "r");
	//���ո�ʽ��ȡ
	fscanf(fp2, "%s\t%d\t%c", stu2.name, &stu2.age, &stu2.sex);
	//��ӡ
	printf("%s\t%d\t%c\n", stu2.name, stu2.age, stu2.sex);
	fclose(fp2);
	system("pause");

	return 0;
}