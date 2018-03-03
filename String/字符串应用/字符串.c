
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void main1()
{

	//char str[100] = "for /l %i in (1,1,5) do echo HelloWorld";//str是数组,存储每一个字符串的字符
	//char *p = "for /l %i in (1,1,5) do echo HelloWorld";//p是一个指针,存储字符串的首地址
	
	//str[0] = ' ';
//	*p = ' ';//字符串常量,不允许修改
	//printf("for / l %%i in(1, 1, 5) do echo HelloWorld");//% -> %%,否则会将%i当做一种解析格式

	char str[100] = { 0 };
	//printf("for / l %%i in (1, 1, 5) do echo HelloWorld");
	char op[30] = { 0 };
	
	int num;
	printf("请输入执行的次数:");
	scanf("%d", &num);
	printf("请输入执行的命令:");
	scanf("%s", op);
	sprintf(str, "for /l %%i in  (1, 1, %d) do %s", num, op);


	system(str);
	system("pause");
}


void main2()
{

	char str[100] = { 0 };
	char op[30] = { 0 };
	printf("请输入需要关闭的进程名:");
	scanf("%s", op);
	sprintf(str, "taskkill /f /im %s", op);
	system(str);
	system("pause");
}




void main3()
{
	system("tasklist");
	char str[100] = { 0 };
	for (int i = 0x0; i < 0xf; i++)
	{
		sprintf(str, "color %x%x", i, 0xf - i);
		system(str);
		Sleep(2000);
	}


}



void main4()
{

	char str[100] = "我有1000元";

	int num;
	sscanf(str, "我有%d元", &num);//提取字符串
	printf("%d\n", num);
	system("pause");
}


void main5()
{
	printf("%s\n", "1234.abcd");

	system("pause");
}


void main()
{
	char str1[100] = "Your name is xixihaha";
	char str2[30] = "xixi";
	char *p = strstr(str1, str2);
	if (p==NULL)
	{
		printf("Don't Find");
	}
	else
	{
		printf("%s,%p\n", p, p);
	}
	system("pause");


}