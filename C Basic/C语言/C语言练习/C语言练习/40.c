
/*
将一个数M分解为质因数（M≠0）。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int IsPrime(int num)
{

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}

	return 1;
}
void main40()
{

	int num = 0;
	printf("请输入数据:");
	scanf("%d", &num);
	
	for (int  i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			if (IsPrime(i)&&IsPrime(num/i))
			{
				printf("可分解为的质因子:%d,%d", i, num / i);
				break;
			}
		}
	}

	
	system("pause");


}