#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"

struct Student
{
	char name[10];
	int num;
	int age;
	char sex;
}stu[3] = {
		{ "test1",1001, 15,'M' },
		{ "test2", 1002,18, 'M' },
		{ "test3", 1003,17, 'W' },
}

;

int _tmain5(int argc, TCHAR argv[])
{
	FILE *fp1;
	fp1 = fopen("F:\\test1.txt", "w+");
	//�Կ����ʽд����߶�ȡ���ݣ������������ṹ��

	//�Զ����Ʒ�ʽд������stu�е�����
	fwrite(stu, sizeof(struct Student), 2, fp1);

	fclose(fp1);
	return 0;

}
