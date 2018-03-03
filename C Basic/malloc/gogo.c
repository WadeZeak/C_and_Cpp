#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>

void main()
{

	int num;
	scanf("%d", &num);
	printf("num=%d\n\n", num);
	int *p = (int *)malloc(num*sizeof(int));
	for (int i = 0; i < num; i++)
	{
		p[i] = rand() ;
		printf("%d\n", p[i]);
	}

	free(p);

	system("pause");
}