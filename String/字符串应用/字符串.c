
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void main1()
{

	//char str[100] = "for /l %i in (1,1,5) do echo HelloWorld";//str������,�洢ÿһ���ַ������ַ�
	//char *p = "for /l %i in (1,1,5) do echo HelloWorld";//p��һ��ָ��,�洢�ַ������׵�ַ
	
	//str[0] = ' ';
//	*p = ' ';//�ַ�������,�������޸�
	//printf("for / l %%i in(1, 1, 5) do echo HelloWorld");//% -> %%,����Ὣ%i����һ�ֽ�����ʽ

	char str[100] = { 0 };
	//printf("for / l %%i in (1, 1, 5) do echo HelloWorld");
	char op[30] = { 0 };
	
	int num;
	printf("������ִ�еĴ���:");
	scanf("%d", &num);
	printf("������ִ�е�����:");
	scanf("%s", op);
	sprintf(str, "for /l %%i in  (1, 1, %d) do %s", num, op);


	system(str);
	system("pause");
}


void main2()
{

	char str[100] = { 0 };
	char op[30] = { 0 };
	printf("��������Ҫ�رյĽ�����:");
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

	char str[100] = "����1000Ԫ";

	int num;
	sscanf(str, "����%dԪ", &num);//��ȡ�ַ���
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