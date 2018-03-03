/*
功能：已知有三个数组A,B,C，A为5行5列的二维数组,B、C为只有5个元素的一维数组,键盘输入数据的顺序如下：
23,45,6,1,-3,4,5,233,456,0,3,56,78,-56,5,6,77,8,89,9,3,6,8,9,90
请编写程序，求出A的各行之和放至数组B的相应元素中，求出数组A的各列之和放至数组C的相应元素之中。
程序的输出部分要按下边形式显示：
23    45     6     1    -3    72
4     5   233   456     0   698
3    56    78  -356     5  -214
6   777     8    89     9   889
3     6     8     9    90   116
39    889   333   199   101
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void main37()
{
	int a[25] = { 23, 45, 6, 1, -3, 4, 5, 233, 456, 0, 3, 56, 78, -56, 5, 6, 77, 8, 89, 9, 3, 6, 8, 9, 90 };
	int arr[5][5] = { 0 };
	int rowsum[5] = { 0 };
	int clmsum[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = a[(i + 1)*(j + 1)-1];
			printf("%6d", arr[i][j]);
			rowsum[i] += arr[i][j];//行的和
			
		}
		printf("%6d", rowsum[i]);
		printf("\n");

	}

	//列的和
	for (int i = 0; i < 5; i++)
	{
		for (int  j= 0; j < 5; j++)
		{
			clmsum[i] += arr[j][i];
		}
		printf("%6d", clmsum[i]);
	}
	printf("\n");

	


	system("pause");
}