#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>

void main()
{
	int num = 3;
	char cmd[50];
	sprintf(cmd,"for /l %%i in (1,1,%d) do calc",num);
	system(cmd);
	getchar();
}