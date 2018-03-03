#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


void maintrhrth()
{
	//在操作系统中,C与演讲所有设备当作文件进行操作
	/*printf("printf-HelloWorld\n");
	fprintf(stdout,"fprintf-HellWorld\n");*/
	//stdin是标准输入，一般指键盘输入到缓冲区里的东西。
	//stdout是一个文件指针,C己经在头文件中定义好的了，可以直接使用，把它赋给另一个文件指针。
	char str[10];
	fscanf(stdin, "HelloWorld", str);

	system("pause");
}

void main911()
{
	char str[50];
	char str1[10];
	char str2[10];
	gets(str1);
	scanf("%s", str2);
	printf("%s %s\n", str1, str2);
	sprintf(str, "%s %s",str1,str2);//格式化字符并打印到str
	system(str);
	fprintf(stdout, "HelloWorld");
	system("pause");


}




//void xxxx()
//{
//
//	char str[10] = "tasklist";
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c", str[i]);
//	}
//
//	printf("%s", str);//遇到\0 自动终止
//	for (char *p = str; p < str + 10; p++)
//	{
//		printf("%c", *p);
//	}
//	system("pause");
//
//
//}