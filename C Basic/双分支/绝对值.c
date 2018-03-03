#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>

void main()
{

	int x, y;
	scanf("%d%d", &x, &y);

	unsigned x1, y1;
	if (x >= 0)
	{
		x1 = x;
	}
	else
	{
		x1 = -x;
	}


	if (y>= 0)
	{
		y1 = y;
	}
	else
	{
		y1 = -y;
	}

	x1 > y1 ? printf("%d", x) : printf("%d", y);
	system("pause");
}