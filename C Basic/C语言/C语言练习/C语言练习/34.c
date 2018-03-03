
/*
34.	编程序将一个6×6的二维数组左下三角部分全赋值为-1，右上三角全赋值为1，
主对角线（行，列下标相同）上的元素送入2。把数组中的值按列对齐方式输出。
要求: 不允许使用scanf函数。

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main34()
{
	int arr[6][6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (i>j)
			{
				arr[i][j] = -1;
			} 
			else if (i<j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 2;
			}
			printf("%4d", arr[i][j]);
		}
		printf("\n");

	}
	system("pause");



}