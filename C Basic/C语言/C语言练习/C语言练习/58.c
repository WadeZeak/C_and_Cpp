
/*
58.	编写程序，按照 1,2, ... , 28的顺序填一个7×7数组的左上角，程序的输出结果为：
1    2    4    7   11   16   22
3    5    8   12   17   23
6    9   13   18   24
10   14   19   25
15   20   26
21   27
28
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main58()
{
	int arr[7][7] = { 0 };
	int num = 1;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0,k=i;k>=0 &&j <=i; j++,k--)
		{
			arr[j][k] = num;
			num++;
		}
	}
	
	for (int i = 0; i < 7; i++)
	{
		for (int  j= 0; j < 7-i; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}



	system("pause");

}