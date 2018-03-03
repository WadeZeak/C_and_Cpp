/*
66.	编写将一个十进制数M转化成N进制数（2≤N≤16）的程序。
提示：转化成N进制数的各位数可以分别放在数组的各个元素中。
　　注意：进制N超过10时, 用A表示10，B表示11,…，F表示15。
  */
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void Conversion(int num, int N)
{
	if (!num)
	{
		return;
	}
	else
	{
		
		Conversion(num / N, N);
		if (num%N>=10)
		{
			printf("%c", num%N-10 + 'A');
		}
		else
		{
			printf("%d", num%N);
		}
		
	}
}

void main66()
{
	int num;
	int N;
	printf("请输入进行转换的数字:");
	scanf("%d", &num);
	printf("请输入进制(2-16):");
	scanf("%d", &N);
	Conversion(num, N);
	printf("\n");
	system("pause");

}