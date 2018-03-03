#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{

	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("%.1f*x^2+%.1f*x+%.1f=0\n", a, b, c);
	

	if (a == 0)
	{
		if (b == 0)
		{
			if (c==0)
			printf("x为任意解");
			else
			printf("x无解");
			
		}
		else
		{
			printf("x=%.1f", c / b);
		}

	}
	else
	{
		float temp;
		temp = b*b - 4.0f * a*c;

		if (temp < 0)
			printf("方程无解");
		else
		{
			printf("x1=%.1f,x2=%.1f", (-b + sqrt(temp)) / (2.0f* a), -b - sqrt(temp) / (2.0f * a));
		}
	}
	


	system("pause");

}