#include<stdio.h>
#include<stdlib.h>

void main()
{

	int x = 1000;
	printf("%d", 1000);
	printf("\n%15d", 1000);
	printf("\n%015d", 1000);
	printf("\n%-015d", 1000);
	printf("\n%-15d", 1000);

	getchar();

}



void main98()
{

	printf("%d", (1, 2, 3, 4));
	getchar();

}


void main123()
{
	int a = 0;
	int b = 2;
    !a || b++;
	printf("%d,%d", a, b);//¶ÌÂ·
	getchar();

}

void main65()
{
	int a = 0;
	int b = 2;
	a&&b++;
	printf("%d,%d", a, b);//¶ÌÂ· 0,2
	getchar();


}

void main78()
{
	printf("%d", 1.03 == 1.03);
	getchar();



}


void main875()
{

	printf("%d\n", 3 > 2);
	printf("%d", 3>2>1);
	getchar();
}