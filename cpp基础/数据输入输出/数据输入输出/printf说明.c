#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>





void main555()
{ 
	//��д�������ʽ

	//%x,%e,%g,%c���Դ�д��%e���ʱ e->E

	printf("%D\n", 10);//%��Ӧ��,���D
	printf("%O\n", 10);//���O
	printf("%X\n", 15);//ʮ�����ƣ���дX���������
	printf("%U\n", 15);//U
	printf("%E\n", 10000000.0);//%E ���ʱ e���E����������
	printf("%C\n",'A');//�����������%cһ��
	printf("%S\n", "ABC");//%S�������������Ϊ��
	printf("%G\n", 100000.0);//ָ��G��g�����Ӱ��E��e�����
	printf("%G\n", 100.123456);//ʵ��������Ϊ��������6λ

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
	printf("%\n");//���NULL
	printf("%%\n");//���%
	system("pause");

}