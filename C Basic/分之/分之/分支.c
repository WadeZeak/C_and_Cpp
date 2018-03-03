
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>



void main555()
{

	int num;
	scanf("%d", &num);
	if (num)
	{

		printf("Hello World!!");

	}

}

void mainfA()
{
	int i = 1;
	while (1)
	{
		if (i % 5== 0)
		{
			ShellExecuteA(0, "open", "http://www.baidu.com", 0, 0, 0);
		}
		if (i % 11 == 0)
		{
			ShellExecuteA(0, "open", "http://cn.bing.com", 0, 0, 0);

		}

		if (i % 13 == 0)
		{
			system("taskkill /f /im MicrosoftEdge.exe");

		}

		Sleep(1000);
		printf("%d\n", i++);
	}


}




void main44()
{


	if (-1)//0,跳过，不执行,其他数字可以执行
	{

		ShellExecuteA(0, "open", "http://www.baidu.com", 0, 0, 0);
	}

	printf("Hello TaoBao!!!");
	system("pause");

}



