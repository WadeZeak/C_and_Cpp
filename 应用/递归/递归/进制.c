#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



int change(n)
{

	if (n == 1)
	{
		printf("%d", n);
	}
	else
	{
		change(n / 2);
		printf("%d", n % 2);
		

	}
}
void maintt()
{
	int num;
	scanf("%d", &num);
	change(num);

	system("pause");



}