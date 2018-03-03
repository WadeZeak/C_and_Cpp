#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


//内存分配函数 malloc calloc realloc
//自动分配内存,使用堆
//堆利用碎片化的内存
void test()
{
	int *p = (int *)malloc(sizeof(int) * 10);

	int num = 0;
	for (int *px= p; px < p+10; px++)
	{
		*px = num;
		printf("%x,%d\n", px, *px);
		num++;
	}


}



void main2()
{
	test();

	printf("\n\n");
	test();//重新开辟一段内存

	system("pause");

}





void mainA()
{

	//鲸吞内存
	unsigned  long long num = 1024 * 1024 * 1024;//范围0 -- 2^64 -1
	num *= 1;
	void *p = (void *)malloc(num);
	if (p == NULL)
	{

		printf("内存分配失败\n");
	}
	else
	{
		printf("内存分配成功");
	}


	system("pause");
}


//蚕食
void main()
{

	while (1)
	{
		//内存一定要及时释放
		void *p = malloc(1024 * 1024 * 100);//100M
		Sleep(2000);
		free(p);//释放内存
		Sleep(2000);
	}


}