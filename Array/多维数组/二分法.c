#include<stdlib.h>
#include<stdio.h>


void main()
{
	int a[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int num = 5;
	for (int i = 0; i <16; i++)
	{
		if (a[i] == num)
			printf("ур╢Ракa[%d]=%d\n",i,a[i]);
	}


	system("pause");

}