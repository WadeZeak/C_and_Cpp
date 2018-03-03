/*
功能：洗扑克牌。将54张牌分别编号为1,2,…,54号，并放在数组M中。
洗牌方法如下：产生[1,54]区间内的一个随机数K，将M[1]与M[K]交换；
然后产生[2,54]之间的随机整数K，让M[2]与M[K]交换；…，
直到剩下最后一张牌为止。请编写实现上述洗牌的程序。
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void main53()
{
	int card[54] = { 0 };
	for (int  i = 0; i < 54; i++)
	{
		card[i] = i + 1;
	}

	int K = 0;
	int tmp = 0;
	for (int i = 0; i < 53; i++)
	{
		K = rand() %(53-i)  + i;//(i,52)
		tmp = card[i];
		card[i] = card[K];
		card[K] = tmp;
		
	}

	for (int i = 0; i < 54; i++)
	{
		printf("%4d", card[i]);
	}
	system("pause");
}