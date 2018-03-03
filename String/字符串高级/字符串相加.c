#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	//字符串处理函数


//字符串长度
int getlength(char *p)
{
	int num = 0;
	while (*p!='\0')
	{
		num++;
		p++;
	}
	return num;

}


void Mystrcat(char *allstr, char *addstr)
{
	int allstrlen = getlength(allstr);//原有字符串长度
	int addstrlen = getlength(addstr);//需要拷贝的字符串长度
	allstr += allstrlen;//指针移动到\0

	while (*addstr)//拼接字符串
	{
		*allstr = *addstr;
		allstr++;
		addstr++;
	}
	//*(allstr + 1) = '\0';

}

void mainxx()
{

	char str[30] = "tracert";
	char web[50];//指针的本质是地址
	scanf("%s", web);//网址
	Mystrcat(str, " ");
	Mystrcat(str, web);
	printf("%s", str);
	system(str);
	system("pause");



}


void main2()
{

	char str[30] = "tracert";
	char web[50];//指针的本质是地址
	scanf("%s", web);
	strcat(str, " ");
	strcat(str, web);

	system(str);
	system("pause");
}



void main1()
{

	char str[30] = "tracert";
	char web[50];
	scanf("%s", web);
	printf("%s", web);
	char cmd[100];
	sprintf(cmd, "%s %s", str, web);//字符串相加
	system(cmd);
	system("pause");
}