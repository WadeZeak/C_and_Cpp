
#define  _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>


int  InverNum(int num,int inum)
{

	if (num==0)
	{
		return inum;
	}

	else
	{
		int shu = num % 10;
		num /= 10;
		inum = inum * 10 + shu;
	   InverNum(num, inum);
	}


}


void main6()
{

	int num;
	scanf("%d", &num);
	printf("num=%d\n", num);
	printf("倒序之后:inum=%d\n", InverNum( num, 0));
	system("pause");
}



void main5()
{

	int num;
	scanf("%d", &num);
	printf("num=%d\n", num);
	int inum = 0;
	int shu = 0;

	while (num)
	{
		shu = num % 10;
		num /= 10;
		inum = inum * 10 + shu;
	}

	printf("倒序之后:inum=%d\n", inum);
	system("pause");
}