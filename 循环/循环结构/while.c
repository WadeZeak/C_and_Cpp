#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>

void main()
{
	int num,wei=0;
	scanf("%d", &num);

	while (num)
	{
		wei++;
		num=num / 10;
	}

	printf("wei=%d", wei);
	system("pause");
}


void main99()
{
	int m = 10;
	int n = 1;
	while (m)
	{
		m--;
		n = n * 2;
		printf("%d\n", n);

	}

	system("pause");

}


void main4()
{
	int i = 0, j = 0;

	while (i<50 && j<50)//1
	{
		printf("%d,%d\n",i++,j++);
	}

	system("pause");
}






void main5()
{
	int sum = 0, i = 0;
	while (i++<100)
	{
		sum += i;
		printf("%d\n", sum);
	}
	system("pause");
}
void main1()
{
	int num=1, i=0;
	while (num)
	{
		printf("输出结果为%d\n", i);
		i++;
	}





}



