#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


void print1()
{
	printf("11111\n");
}


void print2()
{
	printf("22222\n");
}


void print3()
{

	printf("33333\n");
}

void newprint1()
{
	MessageBoxA(0, "11111", "11111", 0);
}


void newprint2()
{
	MessageBoxA(0, "22222", "22222", 0);
}


void newprint3()
{
	MessageBoxA(0, "333333", "333333", 0);
}


void main1()
{
	void(*p)() = print1;
	printf("%p\n", &p);
	printf("%p,%p\n", print1, newprint1);//打印函数地址

	while (1)
	{
		p();
		Sleep(3000);
	}

	system("pause");
}





void main()
{


	void(*p[3])() = { print1, print2, print3 };//函数指针数组
	void(*px[3])() = { newprint1, newprint2, newprint3 };

	printf("p=%p\n",p);

	for (int i = 0; i < 3; i++)
	{
		printf("px[%d]=%p\n", i, px[i]);
	}


	
	while (1)
	{

		for (int i = 0; i < 3; i++)//调用函数
		{	
			p[i]();
			Sleep(20);
		}
		Sleep(2000);

	}


	
}