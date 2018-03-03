#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


void main1()
{

	int a[10] = { 0 };
	time_t ts;
	unsigned int randdata = time(&ts);//获取时间转换为无符号整型
	srand(randdata);//随机数种子
	int *p[10];//指针数组，数组中的元素是地址
	for (int i = 0; i < 10; i++)
	{
		p[i] = &a[i];//只针对应每一个元素的地址
	}

	while (1)
	{
		for (int i = 0; i < 10; i++)
		{
			a[i] = rand() % 1000;
			printf("%d\n", a[i]);//打印数据
		}

		Sleep(5000);
		printf("\n");
		for (int j = 0; j < 10; j++)
		{

			if (*p[j] < 500)
				*p[j] += 100;
			printf("%d\n", a[j]);
		}

		Sleep(5000);

		printf("\n\n");
	}

	system("pause");
}




void main2()
{

	char *p[] = { "calc", "notepad", "mspaint", "write", "tasklist & pause" };

	int n = sizeof(p) / sizeof(char *);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
		system(p[i]);
		Sleep(2000);
	}


	
}

static int jia(int a,int b)//static 只能在本C文件中适应
{
	//printf("%d+%d=%d\n", a, b, a + b);

	return a + b;

}

static int jian(int a, int b)
{
	return a - b;
}


static int cheng(int a,int b)
{
	return a*b;
}

static int chu(int a, int b)
{
	return a / b;

}


void main3()
{

	//函数名是一个常亮指针
	int(*p)(int a, int b) = jia;//存储函数的地址
	printf("%d\n", p(1, 2));
	p = jian;
	printf("%d\n", p(1, 2));
	system("pause");
}





//函数指针数组
//函数类型尽量一致
//批量管理地址
void main4()
{
	//int * a[10];指针数组

	int(*p[4])(int a, int b) = {jia,jian,cheng,chu};

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", p[i](10, 2));
	}


	system("pause");
}