#include<stdlib.h>
#include<stdio.h>



void main()
{
	int a,b, k;
	k = (a = 2, b = 3, a + b);

	printf("%d\n",k);//5

	printf("%c\n", '081');//1  

	int m;
	m = -2L;
	printf("%d,%d\n", m,sizeof(m));
	system("pause");
}