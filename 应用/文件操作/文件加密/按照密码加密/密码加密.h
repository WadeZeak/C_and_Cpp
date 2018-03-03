#define  _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//按照密码加密
//文件解密
//字符串加密



char * EncryptStr(char *key,char *str);//字符串加密
char * DecryptStr(char *key,char * enstr);//字符串解密
void  EncryptFile(char *path,char *enpath, char *key);//文件加密
void DecryptFile(char *enpath,char *depath, char *key);//文件解密
int GetFileSize(char *path);//获取文件大小
