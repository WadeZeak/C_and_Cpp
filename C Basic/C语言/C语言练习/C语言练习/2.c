/* 2.	有一长度不大于40的字符串，已知其中包含两个字符“A”，
求处于这两个字符“A”中间的字符个数，并把这些字符依次打印出来*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


#define MAXLEN 40

void main2()
{

	char str[MAXLEN] = { 0 };
	scanf("%s", str);
	int count = 0;
	int i = 0;
	do
	{
		if (str[i]=='A')
		{
			i++;
			while (str[i]!='A'&&str[i]!='\0')
			{
				count++;
				i++;
			}

			break;
		}
	} while (str[i++]!='\0');


	printf("字符个数:%d\n", count);
	system("pause");

}