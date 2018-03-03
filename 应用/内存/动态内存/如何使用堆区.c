#include<stdlib.h>
#include<stdio.h>

void mainerhe()
{

	int a= 10;
	
void *p = &a;
//void *p = &a;//空类型指针可以接收任何地址  
// 不能取出内容，不知道大小
//void 无大小,不知道截取的大小

	printf("%x,%x\n", &a, p);
	printf("%d", *((int*)p));

	system("pause");



}




void mainhf()
{



	int *p=(int *)malloc(0 * sizeof(int));
	//malloc分配一片内存空间
	//按照int 型进行解析
	//malloc可以动态合理的分配内存
	printf("%x\n", p);

	for (int i = 0; i < 20;  i++)
	{

		p[i] = i;
		printf("%d,%x\n", p[i], &p[i]);
		printf("%d,%x\n", *(p+i), p+i);
		//p+i 等价于 &p[i]
		//*(p+i)等价于p[i]
	}



	//malloc 返回值是void类型
	//int i = 10;
	///int a[i];
	//数组的下标必须是常量

	system("pause");
}