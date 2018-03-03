#include<stdlib.h>
#include<stdio.h>

//递归不可以无限循环
void go()
{

	printf("HelloWorld!!\n");
	go();
}

void goA(n)
{
	//system("echo gogogo");
	printf("%d,%s\n", n, "gogogo");
	if (n == 1)
	{
		return ;
	}
	else
	{
		goA(n-1);
	}

}

int goB(int n)
{

	if (n == 1)
	{
		return 1;
	}
	else
	{
		return goB(n-1)+n;
	}

}



int tencent(int n)
{
	if (n==1)
	{
		return 1;
	}
	else if (n==2)
	{
		return 3;
	}
	else
	{
		return tencent(n - 1) + tencent(n - 2);
	}

}







void main746746()
{
	//goA(10);
	//printf("%d", goB(-1));

	//printf("%d", tencent(4));
	change(10);
	system("pause");


}