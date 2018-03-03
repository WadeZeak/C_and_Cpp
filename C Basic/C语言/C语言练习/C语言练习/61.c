/*
功能： 编写子函数, 求一维整型数组M[10]的最大值及次最大值（次最大值可能不存在）。
主函数中输入10个整数, 然后调用上述子函数, 若次最大值存在, 则输出最大值及次最大值,
否则输出最大值及'NO'（输出也在主程序中实现）

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int getMaxnum(int arr[]);
int getSecond(int arr[],int max);

void main61()
{

	int arr[10] = { 0 };

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%4d", arr[i]);
	}
	int max=getMaxnum(arr);

	printf("\n最大数:%d\n",max );

	int secmax = getSecond(arr, max);
	if (secmax)
	{
		printf("第二最大数:%d\n", secmax);
	}
	else
	{
		printf("没有第二大的数");
	}
	system("pause");

}

int getMaxnum(int arr[])
{
	int max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}



int getSecond(int arr[],int max)
{
	
	for (int i = 1; i < 9; i++)
	{
		if (arr[i] == arr[i + 1])
			return 0;
	}
	int secmax = 0;
	for (int i = 1; i < 10; i++)
	{
		if (max > arr[i]&&secmax<arr[i])
			secmax = arr[i];
	}
	
	return secmax;



}