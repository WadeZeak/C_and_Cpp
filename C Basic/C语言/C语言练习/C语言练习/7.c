
/*7.个位数是6，且能被3整除的五位数共有多少个。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main7()
{
	int num = 10006;
	int count=0;
	while (num<100000)
	{
		if (num%10==6&&num%3==0)
		{
			count++;
		}
		num += 10;
	}

	printf("%d\n", count);

	system("pause");

}