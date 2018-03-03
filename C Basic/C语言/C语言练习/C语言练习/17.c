/*
功能：有人说在400, 401, 402, ...499这些数中4这个数字共出现112次，请编程序判定这
种说法是否正确。若正确请打印出'YES'，否则打印出'NO'及4的出现次数

*/

#include<stdlib.h>
#include<stdio.h>

void main17()
{
	int num = 400;
	int count = 0;
	while (num<500)
	{
		if ( num % 10 == 4)
			count++;
		if ((num / 10) % 10 == 4  )
		{
			count++;
		}
		count++;
		num++;

	}
	if (count == 112)
		printf("Yes\n");
	else
		printf("No,%d\n",count);
	system("pause");
	
}