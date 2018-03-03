#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<Windows.h>

void gogo(void *p)
{
	int *px = (int *)p;

	Sleep(2000);
	printf("A\n");
	//return;//线程执行完后返回
	
	int i = 0;
	while (1)
	{

		if (i>10)
		{
			printf("%d,%d\n", i,*px);
			_endthread();//结束当前线程
		}
		i++;
		Sleep(1000);
	}
}

//空指针可以接收任何类型的指针

//线程定时器
void time(void *p)
{
	int i = 0;
	while (1)
	{
		char str[100] = { 0 };
		sprintf(str, "title 当前时间第%d秒", i);
		system(str);
	///	printf(str);
		i++;
		Sleep(1000);

	}


}

void main()
{

	_beginthread(time, 0, NULL);
	//多线程
	//主线程挂了之后，其他子线程都将结束
	for (int i = 0; i < 5; i++)
	{

		HANDLE hd = _beginthread(gogo, 0, &i);//hd是一个线程编号
		WaitForSingleObject(hd, INFINITE);//等待，阻塞模式,没有wait,并行模式
		Sleep(1000);
	}



	system("pause");
}