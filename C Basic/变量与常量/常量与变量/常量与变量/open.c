#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void main5()
{
	int num;
	scanf("%d", &num);
	char str[50];
	sprintf(str,"for /l %%i in (1,1,%d) do @echo HelloWorld",num);
	//@ÒþÊ½Ö´ÐÐÃüÁî
	//sprintf(str, "for /l %%i in (1,1,%d) do start calc", num);
	system(str);
	system("pause");
}