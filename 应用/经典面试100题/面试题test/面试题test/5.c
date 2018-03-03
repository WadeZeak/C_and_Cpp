#include<stdio.h>
#include<stdlib.h>

typedef union{ long i; int k[5]; char c; }  DATE;

struct data//最大基类型的整数倍
{
	int cat;//  4
	DATE cow;//20
	double dog;//8
};


void main5()
{
	DATE max;
	int size1 = sizeof(max);
	int size2=sizeof(struct data);
	printf("size1=%d\n",size1);//32
	printf("size2=%d\n", size2);//20
	
	system("pause");

}