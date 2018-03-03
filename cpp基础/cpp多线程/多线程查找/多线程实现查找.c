#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<Windows.h>


int flag = 0;//起初假设没有找到，标记为0
int *addfind = NULL;//指定数据的地址
struct MyStruct
{
	int *pfindstart;//要查找的首地址
	int length;//限定长度，从起始地址开始
	int bh;//线程的编号
	int num;//要查找的数据
	int *pflag;//传递flag地址,修改flag,访问
	int **add;//传递一个指针的地址,找到的指定数据的地址
};

void find(void *p)
{

	struct MyStruct *pstruct = (struct MyStruct *)p;//指针类型的转换
	//内存遍历，从起始地址开始100个元素
	for (int *px = pstruct->pfindstart; px < pstruct->pfindstart+pstruct->length; px++)
	{
		Sleep(100);
		if (*(pstruct->pflag) != 0)//其他线程已经找到指定数据
		{
			printf("线程%d无能,没有找到指定数据,其他是线程找到\n", pstruct->bh);
			return;//线程结束

		}
		if (*px == pstruct->num)
		{
			printf("第%d个找到,%p,%d\n",pstruct->bh, px,*px);
			*(pstruct->add) = px;
			*(pstruct->pflag) = 1;
			return;
		}

	}

	//printf("第%d个线程没有找到!!\n",pstruct->bh);
	return;

}


void main()
{

	int a[1000];
	for (int i = 0; i < 1000; i++)
	{
		a[i] = i;
	}
	struct 	MyStruct  threaddata[10];//使用结构体数组避免不同的线程访问同一个结构体

	for (int i = 0; i <10; i++)//创建10个线程，并行
	{
		int *p = a + i * 100;
		
		//结构体初始化
		threaddata[i].pfindstart = p;
		threaddata[i].length = 100;
		threaddata[i].bh = i;
		threaddata[i].num = 785;	
		threaddata[i].pflag = &flag;
		threaddata[i].add = &addfind;
		printf("%d\n", threaddata[i].bh);
		_beginthread(find,0,&threaddata[i]);

		//Sleep(30);//创建线程缓冲时间，循环会执行的相当快
	}

	Sleep(30000);
	system("pause");
	printf("\n%d,%p\n", *addfind, addfind);//打印指定数据的地址以及指定数据
	system("pause");
}