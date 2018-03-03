#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void change(int *p)
{
	*p = 100;
}


void main1()
{

	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	change(p);
	printf("%d\n", *p);
	system("pause");

}





void main()//Ë³Ðò¶þ½øÖÆ
{
	int num;
	scanf("%d", &num);

	while (num)
	{
		printf("%d", num % 2);
		num /= 2;
	}

	system("pause");
}