#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void main5()
{
	printf("%d", sizeof('a'));//C����Ϊ�˿ռ���չ���ַ�������4�ֽ�
	//�ַ�����һ���ֽ�
	printf("\n%d", sizeof(""));//��
	printf("\n%d", sizeof("a"));//a \0
	printf("\n%d", sizeof("ab"));//a b \0
	system("pause");
}


void main4()
{

	char ch='a';
	printf("%x", &ch);//�ڴ�����ASCII�洢
	printf("\n%c", ch);
	char str[30] = "tasklist";
	printf("\n%x", &str);
	getchar();

}

void main3()
{


	printf("%c%c%c%c", 'c', '\n', 'l', 'c');
	char str[10];
	sprintf(str,"%c%c%c%c", 'c', 'a', 'l', 'c');
	system(str);

}


void main2()
{
	char c = getchar();
	putchar(c);;
	system("pause");
}


void main1()
{
	char a = getchar();
	putchar(a);
	char b = getchar();
	putchar('<');
	putchar(b);//�س���Ҳ����һ���ַ�
	putchar('>');
	system("pause");
}