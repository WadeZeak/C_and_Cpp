#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct String
{

	char *p;
	int len;

};



//ǳ����  �����ĵ�ַ,����һƬ�ڴ�
void main3()
{

	struct String str1;
	str1.len = 10;
	str1.p = (char *)malloc(sizeof(char)*str1.len);
	strcpy (str1.p,"Hello");
	printf("str1.p=%s\n", str1.p);

	struct String str2;
	str2.len = str1.len;
	str2.p = str1.p;
	*(str1.p) = 'K';
	printf("str2.p=%s\n", str2.p);//Kello


	system("pause");

}


//���  �����ڴ��е�����
void main()
{


	struct String str1;
	str1.len = 10;
	str1.p = (char *)malloc(sizeof(char)*str1.len);
	strcpy(str1.p, "Hello");
	printf("str1.p=%s\n", str1.p);

	struct String str2;
	str2.len = str1.len;
	str2.p = (char *)malloc(sizeof(char)*str1.len);
	strcpy(str2.p, str1.p);
	*(str1.p) = 'K';
	printf("str2.p=%s\n", str2.p);
	system("pause");
}