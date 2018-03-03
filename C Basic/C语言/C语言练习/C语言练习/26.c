/*
26.	把一个偶数位的数从当中分开成为两个数，这两个数的和的平方等于原数。
如（8+1）2=81，（20+25）2=2025。求10至9999之间满足这样条件的数是哪些? 共有多少个?
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int Evenbit(int num)
{


	int count = 1;

	while (num)
	{
		num /= 10;
		if (num)
		{
			count++;
		}

	}

	return count;


}

int isEligible(int num,int count)
{
	int first = 0;
	int second = 0;
	if (count==2)
	{
		first = num % 10;
		second = num / 10;
		if (((first + second)*(first + second)) == num)
		{
			return 1;
		}
	}

	if (count==4)
	{
		first = num % 100;
		second = num / 100;
		if (((first + second)*(first + second)) == num)
		{
			return 1;
		}
	}


	return 0;
}


void main26()
{
	int count = 0;
	int tmp = 0;
	
	for (int i = 10; i < 10000; i++)
	{
		tmp = Evenbit(i);
		if (tmp % 2 == 0 && isEligible(i, tmp))
		{
			printf("%d  ", i);
			count++;
		}
	}
	printf("\n符合条件的数字的个数:%d\n", count);

	system("pause");
}