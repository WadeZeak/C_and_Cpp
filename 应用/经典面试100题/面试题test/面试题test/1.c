#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>


void main1()
{
	float x;
	const float EPSINON = 0.000001;
	printf("%f\n", EPSINON);
	scanf("%f", &x);
	if (x<=EPSINON&&x>=-EPSINON)
	{
		printf("%f\n", x);
		printf("OK!!!");
	}
	else
	{
		printf("%f\n", x);
		printf("Lose!!!");
	}

	system("pause");
}



