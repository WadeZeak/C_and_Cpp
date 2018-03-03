#define  _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>


//1*2+3*4+5*6+......+99*100
//(2*1-1)*(2*1)+(2*2-1)*(2*2)+(2*3-1)*(2*3)......

void main()
{

	int sum = 0;
	for (int i = 1; i <= 50; i++)
	{
		sum += (2 * i - 1) * 2 * i;
		printf("%d,%d\n",i, sum);
	}
	system("pause");


}


void mainwww()
{
	int X = 0;
	for (int i = 0,j=0; i<100 && j<150; i++,j+=2)
	{
		printf("%d\n", ++X);
	}

	system("pause");
}

void mainsss()
{
	int num;
	int wei = 0;
	scanf("%d", &num);
	printf("\n%d", num);
	for (; num > 0; num /= 10)
	{
		wei++;
	}
	printf("\nwei=%f",(float)wei);
	system("pause");

}




void main47327()
{
	int sum=0;
	for (int i = 0; i <=100; i++)
	{
		sum += i;
		printf("%d,%d\n", i,sum);
	}

	getchar();
}


void mainxxx()
{

	for (;;)
	{
		printf("Hello World!!\n");

	}


}