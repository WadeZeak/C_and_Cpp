#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
void mainvvvv()
{

	//申请一片内存，内存首地址传递给一个指针
	while (1)
	{
		int *p = (int *)malloc(1024 * 1024 *10);//10MB
	//	p = (int *)malloc(0xfffffffff);//内存分配失败时报错
		//内存分配成功，返回地址，否则返回NULL
		printf("%x\n", p);
		if (p == NULL)
		{

			printf("分配内存失败\n");
		}
		else
		{
			printf("分配成功\n");
		}
		Sleep(10000);
		Sleep(1000);
		free(p);//释放内存空间
	}



	system("pause");
}