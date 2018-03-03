#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void main5()
{
	printf("%d", sizeof('a'));//C语言为了空间拓展，字符常量是4字节
	//字符变量一个字节
	printf("\n%d", sizeof(""));//空
	printf("\n%d", sizeof("a"));//a \0
	printf("\n%d", sizeof("ab"));//a b \0
	system("pause");
}


void main4()
{

	char ch='a';
	printf("%x", &ch);//内存中以ASCII存储
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
	putchar(b);//回车键也当做一个字符
	putchar('>');
	system("pause");
}