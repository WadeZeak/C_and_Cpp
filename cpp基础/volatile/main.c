#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
 time_t start, end;
	double res = 0;
	register int i ;
	time(&start);
	for ( i = 0; i < 3000000000; i++)
	{
	    	res += i;
	}
	time(&end);
	printf("Consumption time%fs\n", difftime(end, start));
 	printf("%lf\n", res);
    return 0;
}


int main2()
{
    time_t start, end;
	double res = 0;
	volatile int i;
	time(&start);
	for (i = 0; i < 3000000000; i++)
	{
		res += i;
	}
	time(&end);
	printf("volatitle Consumption time:%fs\n", difftime(end, start));
 	printf("%lf\n", res);
    return 0;
}
