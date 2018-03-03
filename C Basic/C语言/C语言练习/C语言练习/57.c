/*
功能：	 已知N是正整数， 它可拆写成三个正整数N1、N2和N3之和的形式N=N1+N2+N3。
请编程序打印出满足上式的全部组合，并当N1、N2和N3中至少有两个是素数时打印“YES”否则打印“NO”。
如N=5时输出：
5 = 1 + 1 + 3     NO
5 = 1 + 2 + 2     YES
5 = 1 + 3 + 1     NO
5 = 2 + 1 + 2     YES
5 = 2 + 2 + 1     YES
5 = 3 + 1 + 1     NO

*/



#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int judPrime(int num)
{
	if (num<2)
	{
		return 0;
	}

	if (num==2)
	{
		return 1;
	}

	for (int i = 2; i <= (int)sqrt((double)num); i++)
	{
		if (num%i == 0)
		{
			return 0;
		}
	}

	return 1;
}
void main57()
{

	int num = 0;
	printf("请输入一个正整数:");
	scanf("%d", &num);

	for ( int i = 1; i < num-1; i++)
	{
		for (int j = 1; j < num-i; j++)
		{
			printf("%d=%d+%d+%d\t", num, i, j, num - i - j);
		
			if (judPrime(i)+judPrime(j)+judPrime(num-i-j)>=2)//至少有两个素数
			{
				printf("YES");
			}
			else
			{
				printf("NO");
			}
			printf("\n");
		}
	
	}




	system("pause");
}