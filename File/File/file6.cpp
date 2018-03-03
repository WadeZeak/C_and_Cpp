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
	printf("feof:%d\n", feof(fp));//判断文件是否读取完毕，读取完毕，返回0，否则非0
//文件指针指向文件末尾
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
	//以块的形式写入或者读取数据，常用于数组或结构体

	//以二进制方式读取数据
	fread(stu1, sizeof(struct Student), 3, fp1);

	for (int i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\=t%c\n", stu1[i].name, stu1[i].num, stu1[i].age, stu1[i].sex);
	}
	printf("ftell:%d\n",ftell(fp1));
	printf("\n\n--------------------------------------------------------------------------------------------------------------\n\n");
	//重新从文件头读取 rewind() 文件指针重新指向文件头部
	rewind(fp1);

	//fseek() 定义文件指针到任意一个位置
	fseek(fp1, sizeof(struct Student), 0);
	//第二个参数 + 向前移； - 向后移
	// 0 起始位置 ；1 当前位置； 2 文件结束位置

	//ftell 测试文件指针的当前位置
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
