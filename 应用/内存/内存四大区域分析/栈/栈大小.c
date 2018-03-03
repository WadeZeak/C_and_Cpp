#include<stdlib.h>
#include<stdio.h>


void main2()
{
	//栈的大小编译器决定
	//无法使用较大内存
	//用完之后立刻回收
	//
	int a[1024*300];//1M=1024*1024
	//Stack overflow
	//修改栈大小  属性-> 连接器->系统->堆栈保留大小 默认 1M
	//修改为 2M
	getchar();
}

void main()
{

	while (1)//栈区,一直分配释放内存，比较损耗CPU
	{

		double db[1024 * 200];//损耗CPU
		void *p = malloc(1024 * 1024 * 100);//损耗内存
	}





}