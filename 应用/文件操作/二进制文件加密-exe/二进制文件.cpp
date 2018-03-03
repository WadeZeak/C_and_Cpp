
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


void Copy(char *oldpath,char *newpath)//�������ļ�����
{
	FILE *pfr, *pfw;
	pfr = fopen(oldpath, "rb");//rb ��ȡ�������ļ�
	pfw = fopen(newpath, "wb");//wb д��������ļ�
	if (pfr==NULL||pfw==NULL)//�ļ���ʧ��
	{
		fclose(pfr);//�ر��ļ�
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(oldpath);
		char*p = (char *)malloc(sizeof(char)*filesize);//�����ڴ�
		fread(p, sizeof(char),filesize, pfr);//��ȡ�����Ƶ��ڴ�
		fwrite(p, sizeof(char), filesize, pfw);//д������Ƶ��ļ�
		fclose(pfr);//�ر��ļ�
		fclose(pfw);
	}
}


void Encrypt(char *path, char *enpath,char *key)//�������ļ�����
{
	FILE *pfr, *pfw;
	pfr = fopen(path, "rb");//rb ��ȡ�������ļ�
	pfw = fopen(enpath, "wb");//wb д��������ļ�
	if (pfr == NULL || pfw == NULL)//�ļ���ʧ��
	{
		fclose(pfr);//�ر��ļ�
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(path);
		int keylen = strlen(key);
		char*p = (char *)malloc(sizeof(char)*filesize);//�����ڴ�
		fread(p, sizeof(char), filesize, pfr);//��ȡ�����Ƶ��ڴ�

		for (int i = 0; i < filesize; i++)
		{
			p[i] ^= key[i%keylen];
		}

		fwrite(p, sizeof(char), filesize, pfw);//д������Ƶ��ļ�
		fclose(pfr);//�ر��ļ�
		fclose(pfw);
	}
}


void Decrypt(char *enpath, char *depath,char *key)//�������ļ�����
{
	FILE *pfr, *pfw;
	pfr = fopen(enpath, "rb");//rb ��ȡ�������ļ�
	pfw = fopen(depath, "wb");//wb д��������ļ�
	if (pfr == NULL || pfw == NULL)//�ļ���ʧ��
	{
		fclose(pfr);//�ر��ļ�
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(enpath);
		int keylen = strlen(key);
		char*p = (char *)malloc(sizeof(char)*filesize);//�����ڴ�
		fread(p, sizeof(char), filesize, pfr);//��ȡ�����Ƶ��ڴ�
		for (int i = 0; i < filesize; i++)
		{
			p[i] ^= key[i%keylen];
		}
		fwrite(p, sizeof(char), filesize, pfw);//д������Ƶ��ļ�
		fclose(pfr);//�ر��ļ�
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



