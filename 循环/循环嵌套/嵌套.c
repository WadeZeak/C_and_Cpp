#include<stdlib.h>
#include<stdio.h>


void all()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
				printf("%2d*%d=%d", i, j, i*j);
		}
		printf("\n");
	}

}



void leftdown()
{
	for(int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i >= j)
				printf("%2d*%d=%d", i, j, i*j);

		}
		printf("\n");
	}
}


void rightup()
{
	for(int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i <= j)
				printf("%2d*%d=%d", i, j, i*j);
			else
				printf("%6s", "");
		}
		printf("\n");
	}

}

void leftup()
{
	for (int i = 0; i <10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i<= 9-j)
				printf("%2d*%d=%d", i, j, i*j);

		}
		printf("\n");
	}
}


void rightdown()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j>= 9-i)
				printf("%2d*%d=%d", i, j, i*j);
			else
				printf("%6s", "");
		}
		printf("\n");
	}

}

void upran()
{
	for (int i = 0; i <10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i<= 9 -j &&i<=j)
				printf("%2d*%d=%d", i, j, i*j);
			else
				printf("%6s", "");

		}
		printf("\n");
	}
}


void downran()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j >= 9 - i&&i>=j)
				printf("%2d*%d=%d", i, j, i*j);
			else
				printf("%6s", "");
		}
		printf("\n");
	}

}



void main()

{
	all();
	printf("\n\n");
	rightup();
	printf("\n\n");
	leftdown();
	printf("\n\n");
	leftup();
	printf("\n\n");
	rightdown();
	printf("\n\n");
	upran();
	printf("\n\n");
	downran();
	system("pause");

}




void sdgsrg()
{
	int X = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("X=%d,i=%d,j=%d\n", X++, i, j);
		}
	}

}
