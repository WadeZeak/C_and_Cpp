/*
56.	编程序求3至39之间满足下列条件的各组素数：每组有3个素数，第2个比第1个大2，第3个比第2个大4。例如 5,7,11就是满足条件的一组。
要求：
1) 不许使用数组。
2) 打印满足条件的各组素数。
3) 求出满足条件的素数共有多少组。

*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int isPrime56(int num)
{

	for  (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}

	return 1;
}




void main56()
{
	
	for (int  i = 3; i <= 39; i++)
	{
		if (isPrime56(i))
		{
			if (i+6<=39)
			{
				if (isPrime56(i+2)&&isPrime56(i+6))
				{
					printf("%d,%d,%d\n", i, i + 2, i + 6);
				}
			}
		}
	}



	system("pause");


}