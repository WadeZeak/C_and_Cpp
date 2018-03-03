
#include<stdlib.h>
#include<stdio.h>

int main10()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);//指向数组的指针,步长是一个数组。&a代表整个整个数组的首地址
	printf("%d,%d", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;
}