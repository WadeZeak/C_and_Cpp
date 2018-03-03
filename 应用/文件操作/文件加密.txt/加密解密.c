#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

//加密方式
//按照固定模式加密
//根据密码加密



//按照字节的方式加密
char EncryAlgo(char chr)
{

	//return chr + 1;
	return chr ^123;
}


char DecryAlgo(char chr)
{

	//return chr -1;
	
	return chr ^ 123;
}



//文件末尾的'?' 是'\0'解密失败


void Decrypt(char *enpath, char *depath)//解密
{
	

	FILE *pfr, *pfw;
	pfr = fopen(enpath, "r");//读取加密文件
	pfw = fopen(depath, "w");
	if (pfr == NULL || pfw == NULL)//文件打开失败
	{

		printf("文件打开失败!!");
		return;
	}
	else
	{

		while (!feof(pfr))
		{
			char chr = fgetc(pfr);
			putchar(chr);
			fputc(DecryAlgo(chr), pfw);//向解密的文件中写入解密后的字符

		}
	}
	fclose(pfr);
	fclose(pfw);


}


void Encrypt(char *path,char *enpath)//加密
{

	FILE *pfr, *pfw;
	pfr = fopen(path, "r");//读取原文件
	pfw = fopen(enpath, "w");//写入加密后的数据
	if (pfr == NULL||pfw==NULL)//文件打开失败
	{

		printf("文件打开失败!!");
		return;
	}
	else
	{

		while (!feof(pfr))
		{
		char chr=fgetc(pfr);
		putchar(chr);
		fputc(EncryAlgo(chr), pfw);//想加密文件中写入加密后的字符

		}
	}
	fclose(pfr);
	fclose(pfw);

}



void main()
{

	char *path = "C:\\Users\\Zeak_K\\Desktop\\text.txt";
	char *enpath = "C:\\Users\\Zeak_K\\Desktop\\entext.txt";
	char *depath = "C:\\Users\\Zeak_K\\Desktop\\detext.txt";

	Encrypt(path, enpath);
	printf("\n\n\n--------------------------------------------------------------------------\n\n\n");
	Decrypt(enpath,depath); 

	system("pause");
}


void main1()
{
	FILE *pfr;//文件结构体指针
	char *path = "C:\\Users\\Zeak_K\\Desktop\\text.txt";
	pfr = fopen(path, "r");
	if (pfr == NULL)
	{
		printf("文件打开失败!!");
	}
	else
	{
		while (!feof(pfr))//到达文件末尾返回非0
		{
			char chr=fgetc(pfr);//从文件中读取一个字符
			putchar(chr);//输出字符
		}	
	}

	rewind(pfr);//文件指针回到文件开头

	printf("\n\n\n--------------------------------------------------------------------------\n\n\n");
	while (!feof(pfr))//到达文件末尾返回非0
	{
		char chr = fgetc(pfr);//从文件中读取一个字符
		putchar(chr+1);//移位加密后输出
	}


	fclose(pfr);//关闭文件

	system("pause");
}