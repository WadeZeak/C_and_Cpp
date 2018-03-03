
#include<stdlib.h>
#include<stdio.h>
#include<string.h>



typedef int u32;//typedef 取别名

void main213()
{
	printf("%d", sizeof(u32));

	system("pause");
}

void main16(void)
{

	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("arr:%p,&arr:%p\n", arr, &arr);//输出结果一样
	printf("arr+1:%p,&arr+1:%p\n", arr+1, &arr+1);
	
	//a 与&a 数据类型不同

	//数组数据类类型
	//数组数据类型与数组数据类型指针
	//数组数据类型与数组数据类型指针的关系
	
	system("pause");
}
//数据类型的本质就是固定内存大小的别名,其作用是编译器预算的对象的大小空间



void main()
{

	int a = 10;
	int *p = &a;

	printf("%d\n", p);

	*((int *)p) = 20;
	printf("%d\n", a);


	system("pause");


}