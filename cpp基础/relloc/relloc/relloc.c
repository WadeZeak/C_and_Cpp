#include<stdio.h>
#include<stdlib.h>



void main1()
{
	int *p = (int *)calloc(10, sizeof(int));//分配内存 calloc 默认为void* 类型
	printf("%p\n", p);
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;//*(p+i)等价于p[i]
	}
	int *pnew = (int *)realloc(p, 100);//新的内存大小100Byte,25个元素

	//relloc
	//第一种情况:后续的内存可以使用，直接拓展内存
	//第二种情况,后续的内存被人占用,无法使用，重新开辟内存，拷贝原来的内容，之后释放原来的内存

	printf("%p\n", pnew);

	for (int i = 10; i < 25; i++)
	{
		*(pnew + i) = i;
	}
	system("pause");
}