#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **pp;//存储指针数组的地址


//26669*4/1024=104KB 存储文件中每一行字符串的首地址
void intdatatomem(char *path,int num)
{
    pp = (char **)malloc(sizeof(char *)*num);//分配指针数组
	FILE *pf;
	pf = fopen(path, "r");//按读取方式打开 fopen()函数不安全
	if (pf == NULL)
	{
		printf("Fail");
		return -1;//文件读取失败
	}

	else
	{

		for (int i = 0; i < num; i++)
		{
			char str[200] = {0};//读取字符串的缓冲区
			fgets(str, 200, pf);//从文件中逐行读取字符串
			int strlength = strlen(str)+1;//获取字符串长度，+1原因存储'\0'
			char *px = (char *)malloc(sizeof(char)*strlength);//分配内存存储字符串
			strcpy(px, str);//拷贝字符串,遇见'\0'终止
			px[strlength - 1] = '\0';//补上终止条件'\0'
			pp[i]=px;//存储字符串的首地址
		}

		printf("载入内存成功\n");
		fclose(pf);
	}
	

}


int getfilesize(char *path)
{
	FILE *pf;
	pf = fopen(path,"r");//按读取方式打开 fopen()函数不安全
	if (pf == NULL)
	{
		return -1;//文件读取失败
	}
	else
	{
		fseek(pf, 0, SEEK_END);//文件指针移动到文件末尾
		int num = ftell(pf);//文件开头到文件指针当前位置的字节
		fclose(pf);//关闭文件
		return num;//429997
	}
}


int getn(char *path)
{

	FILE *pf;
	pf = fopen(path, "r");//按读取方式打开 fopen()函数不安全
	if (pf == NULL)
	{
		return -1;//文件读取失败
	}
	else
	{
		int i = 0;
		while (!feof(pf))//判断文件是否到达末尾,没有到达末尾返回0,否则返回1
		{
			char str[200];
			fgets(str, 200, pf);//读取文件的一行
			i++;//计数,文件有多少行
		}
		fclose(pf);
		return i;//26669
	}
}





char *findstr(char *searchstr,int rownum)
{

	for (int   i= 0; i < rownum; i++)//遍历所有指针地址，进行字符串查找
	{
		char *ptemp = strstr(pp[i], searchstr);//没有找到目标字符串,返回NULL
		if (ptemp != NULL)
		{
			printf("%p,%d,%s\n", pp[i], i,pp[i]);
			
			//return pp[i];
		}
	}
	/*printf("没有找到!!!\n");
	return NULL;*/
}




void main()
{
	char *path = "C:\\Users\\Zeak_K\\Desktop\\key.txt"; 
	//int size = getfilesize(path);
	//printf("%dByte,%fKB,%fMB\n", size, size / 1024.0, size / (1024.0*1024.0));
	//printf("有%d行\n", getn(path));

	int rownum = getn(path);
	intdatatomem(path, rownum);

	char searchstr[100] = { 0 };//需要查询的字符串
	scanf("%s", searchstr);
	char *p = findstr(searchstr, rownum);
	system("pause");

}