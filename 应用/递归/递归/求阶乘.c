#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



int fac(int n)

{
	int t;

	if ((n == 1) || (n == 0)) return 1;

	else

	{
		t = n*fac(n - 1);

		return t;

	}

}

void main()

{
	int m, y;

	printf("Enter m : ");

	scanf("%d", &m);

	if (m<0) printf("Input data Error!\n");

	else

	{
		y = fac(m);

		printf("\n%d!= %d \n", m, y);

	}
	system("pause");
}
