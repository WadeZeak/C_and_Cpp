#include<stdio.h>
#include<stdlib.h>


void testRec(int n)
{

	if (n >= 1000)
		return;

	else
	{

	int	ge = n % 10;
	int	shi = n/ 10 % 10;
	int	bai = n / 100;
	if (n == ge*ge*ge + shi*shi*shi + bai*bai*bai)//判断是否为水仙花数
	printf("%d^3+%d^3+%d^3=%d\n", ge, shi, bai, n);
	testRec(n + 1);
	}



}


void main2()
{

 testRec(100);
	system("pause");



}
void main1()
{

	int ge = 0;
	int shi = 0;
	int bai = 0;
	for (int i = 100; i < 1000; i++)//遍历所有的数据
	{
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100;
		if (i == ge*ge*ge + shi*shi*shi + bai*bai*bai)//判断是否为水仙花数
			printf("%d^3+%d^3+%d^3=%d\n",ge,shi,bai, i);
	}

	system("pause");

}