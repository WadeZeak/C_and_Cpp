#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL 
#include <stdio.h>
#include<stdlib.h>
#include"afx.h"

//struct _iobuf {
//	char *_ptr;
//	int   _cnt;
//	char *_base;
//	int   _flag;
//	int   _file;
//	int   _charbuf;
//	int   _bufsiz;
//	char *_tmpfname;
//};
void printFilePointer(FILE *fp)
{
	printf("%p,%d,%p,%d,%d,%d,%d,%p\n", fp->_ptr, fp->_cnt,
		fp->_base, fp->_flag, fp->_file, fp->_charbuf, fp->_bufsiz, fp->_tmpfname);
	printf("feof:%d\n", feof(fp));//�ж��ļ��Ƿ��ȡ��ϣ���ȡ��ϣ�����0�������0
//�ļ�ָ��ָ���ļ�ĩβ
}

struct Student
{
	char name[20];
	
	int age;
	char sex;
	int num;
}stu1[3],stu2[3];

int _tmain(int argc, TCHAR argv[])
{
	FILE *fp1;
	fp1 = fopen("F:\\test2.txt", "r+");
	printFilePointer(fp1);
	//�Կ����ʽд����߶�ȡ���ݣ������������ṹ��

	//�Զ����Ʒ�ʽ��ȡ����
	fread(stu1, sizeof(struct Student), 3, fp1);

	for (int i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\=t%c\n", stu1[i].name, stu1[i].num, stu1[i].age, stu1[i].sex);
	}
	printf("ftell:%d\n",ftell(fp1));
	printf("\n\n--------------------------------------------------------------------------------------------------------------\n\n");
	//���´��ļ�ͷ��ȡ rewind() �ļ�ָ������ָ���ļ�ͷ��
	rewind(fp1);

	//fseek() �����ļ�ָ�뵽����һ��λ��
	fseek(fp1, sizeof(struct Student), 0);
	//�ڶ������� + ��ǰ�ƣ� - �����
	// 0 ��ʼλ�� ��1 ��ǰλ�ã� 2 �ļ�����λ��

	//ftell �����ļ�ָ��ĵ�ǰλ��
	fread(stu2, sizeof(struct Student), 1, fp1);
	for (int i = 0; i < 1; i++)
	{
		printf("%s\t%d\t%d\=t%c\n", stu2[i].name, stu2[i].num, stu1[i].age, stu2[i].sex);
	}


	
	printFilePointer(fp1);

	fclose(fp1);
	system("pause");
	return 0;

}
