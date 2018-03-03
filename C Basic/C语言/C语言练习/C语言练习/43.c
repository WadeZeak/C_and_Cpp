/*
43.	求n!的末尾有多少个零。可以通过检查n!含有多少个10的因数来求它末尾零的个数。
因为10=2×5，在n!中含有2的因数显然多于含有5的因数。
一种求n!中5的因数的个数的算法如下:
1) 输入正整数n;
2) 0=>k, n=>m;
3) 若m<5，转第5步，否则执行第4步;
4) m/5（取整）=>m, k+m=>k, 转第3步;
5) 输出k（n!末尾零的个数）。
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//n!
int Factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*Factorial(n - 1);
	}


}


int FunctionA(int n,int k)
{
	if (n<5)
	{
		return k;
	}
	else
	{
		return FunctionA(n / 5, k + n/5);
	}



}


void main43()
{
	int num;
	printf("请输入数字:");
	scanf("%d", &num);

	int i = FunctionA(num, 0);
	printf("%d!中因数5的个数为%d\n", num, i);
	system("pause");


}
