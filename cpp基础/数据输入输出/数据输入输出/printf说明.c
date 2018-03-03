#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>





void main555()
{ 
	//大写的输出格式

	//%x,%e,%g,%c可以大写，%e输出时 e->E

	printf("%D\n", 10);//%对应空,输出D
	printf("%O\n", 10);//输出O
	printf("%X\n", 15);//十六进制，大写X不妨碍输出
	printf("%U\n", 15);//U
	printf("%E\n", 10000000.0);//%E 输出时 e变成E，其余正常
	printf("%C\n",'A');//正常输出，与%c一致
	printf("%S\n", "ABC");//%S不能正常输出，为空
	printf("%G\n", 100000.0);//指数G，g的输出影响E，e的输出
	printf("%G\n", 100.123456);//实数输出最大为整数部分6位

	getchar();

}


void main8()
{
	//char exe[100] = "\"\E:\\Program Files (x86)\\Netease\\CloudMusic\\cloudmusic.exe\"";
	char exe[100];
		sprintf(exe,"\"\E:\\Program Files (x86)\\Netease\\CloudMusic\\cloudmusic.exe\"");
	system(exe);

}



void main7()
{
	char strcmd[50];
	sprintf(strcmd, "for /l %%i in (1,1,5) do calc ");
	system(strcmd);

}


void main6()
{
	printf("%\n");//输出NULL
	printf("%%\n");//输出%
	system("pause");

}