#include<stdlib.h>
#include<stdio.h>

void main1()
{

	for (int i = 0; i <= 50 / 5; i++)
	{
		for (int j = 0; j <= (50 - 5 * i) / 2; j++)
		{
			int z = 50 - 5 * i - 2 * j;
			if (z >= 0)
			{
				printf("%4d%4d%4d\n", i, j, z);
			}
		}
	}


	system("pause");
}