#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int num = 0;

int Mystrlen2(char *p)
{
	if (*p == '\0')
		return num;
	else
	{
		num++;
		p++;
		Mystrlen2(p);
	}
}



int Mystrlen1(char *p)
{
	int num=0;
	while (*p!='\0')
	{
		num++;
		p++;
	}
	return num;
}




void main()
{

	char str[50];
	scanf("%s", str);
	//printf("字符串长度%d\n", strlen(str));
	//printf("字符串长度%d\n", Mystrlen1(str));
	printf("字符串长度%d\n", Mystrlen2(str));
	//strlen() 遇到\0便结束
	system("pause");
}
