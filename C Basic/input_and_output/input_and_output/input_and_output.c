#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>

void main85()
{
	printf("%u,%o,%x", -1, -1, -1);
	getchar();
	/*
	-1
	原码 : 1000 0000 0000 0000 0000 0000 0000 0001
	反码 : 1111 1111 1111 1111 1111 1111 1111 1110 
	补码 : 1111 1111 1111 1111 1111 1111 1111 1111

	*/
	//整数是原码，负数是补码


	//4294967295,37777777777,ffffffff
	//1111 1111 1111 1111 1111 1111 1111 1111
}






// cmd 进入相关路径 exe input_and_output.exe<1.txt>2.txt 
void main2()
{
	char str[30];
	scanf("%s",str);
	system(str);

}



void main1()
{
	int num;
	char strurl[30];
	scanf("%d%s", &num, strurl);
	printf("num=%d,strurl=%s\n", num, strurl);
	char str[50];
	sprintf(str, "for /l %%i in (1,1,%d) do echo %s",num,strurl);
	system(str);
	system("pause");

}