#define  _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//�����������
//�ļ�����
//�ַ�������



char * EncryptStr(char *key,char *str);//�ַ�������
char * DecryptStr(char *key,char * enstr);//�ַ�������
void  EncryptFile(char *path,char *enpath, char *key);//�ļ�����
void DecryptFile(char *enpath,char *depath, char *key);//�ļ�����
int GetFileSize(char *path);//��ȡ�ļ���С
