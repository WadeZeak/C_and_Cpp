/*18.	设有8×8的二维数组a，其中每个元素取值如下：
当 i = j 时 a[i][j] = M （M是你的学号）
当 i<j 时 a[i][j] = i＋j
当 i>j 时 a[i][j] = i×j
编程序求所有的数组元素之和。
*/




#include<stdlib.h>
#include<stdio.h>

void main18()
{
	int arr[8][8] = { 0 };
	int Sum = 0;
	int M = 1;
	for (int  i = 0; i < 8; i++)
	{
		for (int  j = 0; j < 8; j++)
		{
			if (i==j)
			{
				arr[i][j] = M;

			}
			else if (i<j)
			{
				arr[i][j]= i+j;
			}
			else
			{
				arr[i][j] = i*j;
			}
			printf("%5d", arr[i][j]);
			Sum += arr[i][j];
		}
		printf("\n");
	}

	printf("Sum=%d\n", Sum);
	system("pause");

}
