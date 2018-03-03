#include<stdlib.h>
#include<stdio.h>


//F(n)=F(n-1)+F(n-2)
void maintttt()
{
	double a[50];
	a[0] = 1;
	a[1] = 2;
	for (int i = 2; i < 50; i++)//µÝ¹é×ª»»ÎªÑ­»·
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%.0f\n", *(a + i));
	}

	system("pause");

}