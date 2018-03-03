#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	//字符串处理函数


//字符串长度
int getlength1(char *p)
{
	int num = 0;
	while (*p != '\0')
	{
		num++;
		p++;
	}
	return num;
}

char *findstr(char *substr, char *str)
{
	char *pl = NULL;
	int substrlen = getlength1(substr);//获取母字符串长度
	int strlen = getlength1(str);//获取子字符串长度

	for (int i = 0; i < substrlen-strlen; i++)
	{
		int flag = 1;//标识,假定字符串相等
		for (int j = 0; j < strlen; j++)
		{	
			if (substr[i+j]!=str[j])//判定字符是否相等
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			pl = &substr[i];
			break;
		}
	}
	return pl;
}



void maindh()
{
	char allstr[300] = "I love China I love cpp";
	char str[30] = "love";
	//char *p = strstr(allstr, str);//strstr() 没有匹配项,返回NULL (0)，此时*p=NULL 即*p=0x0000000
	char *p = findstr(allstr, str);
	if (p != NULL)
	{
		printf("Find\n");
		printf("*p=%c", *p);
	}
	else
	{
		printf("Can't Find\n");
		
	}
	system("pause");
}