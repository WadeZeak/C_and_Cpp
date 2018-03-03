/*
60.	回文数指左右数字对称的数，如121，2112都是回文数。回文数猜想：取一任意十进制数，将其倒过来，并将这两个数相加，然后把这个相加的和倒过来再与原数相加...， 重复此过程可得到一个回文数。如取68为任意数，经三步相加可得回文数：
6 8
+ 8 6                测试数据：
─────               ① 68
1 5 4                    ② 5
4 5 1                    ③ 876
─────               ④ 12501
6 0 5
5 0 6
─────
1 1 1 1
注意：
1) 上机时不要随便自选数据，因为对有的数经几十万次以上相加还未得到回文数。
2) 由于一位、两位数十分简单，故仅从3位数开始才判它是否为回文数。即5,55,66这样的数在此处不把它当作回文数。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int getBitnum(int num,int count)
{
	if (!num)
	{
		return count;
	}
	else
	{	
		count++;
		return getBitnum(num / 10,count);		
	}

}

int Reverse(int num, int k)
{
	if (!num)
	{
		return k;
	}
	else
	{
		k = k * 10 + num % 10;
		return Reverse(num / 10, k);
	}

}


int endnum(int num)
{
	return  num %(int) pow(10,(getBitnum(num,0)/2));
}


void main60()
{
	int  num = 0;
	printf("请输入一个数字:");
	scanf("%d", &num);
	int renum = Reverse(num, 0);

	while (1)
	{
		if (getBitnum(num, 0)>3)
		{
			if (endnum(num) == endnum(renum))
			{
				printf("回文数为:%d\n", num);
				break;
			}
		}
	
		num +=renum;
		renum = Reverse(num, 0);
	}
	system("pause");

}