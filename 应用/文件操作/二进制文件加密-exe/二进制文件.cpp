
#define  _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int GetFileSize(char *path)
{

	FILE *pf;
	pf = fopen(path, "r");
	if (pf==NULL)
	{
		return -1;

	}
	else
	{
		fseek(pf, 0, SEEK_END);
		int filesize = ftell(pf);
		return filesize;

	}

}


void Copy(char *oldpath,char *newpath)//二进制文件拷贝
{
	FILE *pfr, *pfw;
	pfr = fopen(oldpath, "rb");//rb 读取二进制文件
	pfw = fopen(newpath, "wb");//wb 写入二进制文件
	if (pfr==NULL||pfw==NULL)//文件打开失败
	{
		fclose(pfr);//关闭文件
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(oldpath);
		char*p = (char *)malloc(sizeof(char)*filesize);//分配内存
		fread(p, sizeof(char),filesize, pfr);//读取二进制到内存
		fwrite(p, sizeof(char), filesize, pfw);//写入二进制到文件
		fclose(pfr);//关闭文件
		fclose(pfw);
	}
}


void Encrypt(char *path, char *enpath,char *key)//二进制文件加密
{
	FILE *pfr, *pfw;
	pfr = fopen(path, "rb");//rb 读取二进制文件
	pfw = fopen(enpath, "wb");//wb 写入二进制文件
	if (pfr == NULL || pfw == NULL)//文件打开失败
	{
		fclose(pfr);//关闭文件
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(path);
		int keylen = strlen(key);
		char*p = (char *)malloc(sizeof(char)*filesize);//分配内存
		fread(p, sizeof(char), filesize, pfr);//读取二进制到内存

		for (int i = 0; i < filesize; i++)
		{
			p[i] ^= key[i%keylen];
		}

		fwrite(p, sizeof(char), filesize, pfw);//写入二进制到文件
		fclose(pfr);//关闭文件
		fclose(pfw);
	}
}


void Decrypt(char *enpath, char *depath,char *key)//二进制文件解密
{
	FILE *pfr, *pfw;
	pfr = fopen(enpath, "rb");//rb 读取二进制文件
	pfw = fopen(depath, "wb");//wb 写入二进制文件
	if (pfr == NULL || pfw == NULL)//文件打开失败
	{
		fclose(pfr);//关闭文件
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(enpath);
		int keylen = strlen(key);
		char*p = (char *)malloc(sizeof(char)*filesize);//分配内存
		fread(p, sizeof(char), filesize, pfr);//读取二进制到内存
		for (int i = 0; i < filesize; i++)
		{
			p[i] ^= key[i%keylen];
		}
		fwrite(p, sizeof(char), filesize, pfw);//写入二进制到文件
		fclose(pfr);//关闭文件
		fclose(pfw);
	}
}





void main()
{


	char *path="C:\\Users\\Zeak_K\\Desktop\\CPPIDE.exe";
	char *enpath = "C:\\Users\\Zeak_K\\Desktop\\ENCPPIDE.exe";
	char *depath = "C:\\Users\\Zeak_K\\Desktop\\DECPPIDE.exe";
	//int filesize = GetFileSize(oldpath);
	//printf("%d\n", filesize);
	Encrypt(path, enpath,"ABCD");
	Decrypt(enpath, depath,"ABCD");
	//system("pause");
}



