
/* 3.	把25个字母A、B 、C、••• 、X、Y按如下要求打印出来：
从最中间的字母M开始打印，然后一左一右依次打印出其它字母，即M，L，N，K，O
要求：初始化时按字母表顺序赋值。
                                                                   */



#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main3()
{

	char cap[27] = { 0 };
	for (int i = 0; i < 25; i++)
	{
		cap[i] = 'A' + i;
	}
	cap[26] = '\0';
	int n = 12;
	printf("%c", cap[n]);
	for (int i = 1; i <13; i++)
	{
	
			printf("%3c", cap[n - i]);
			printf("%3c", cap[n + i]);
		
		
	}
	printf("\n");
	system("pause");

}