#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[3][4];
	int num=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;  j < 4; j++)
		{
			a[i][j] = num++;
			printf("%d,%x\n", a[i][j],&a[i][j]);
		}

	}


	getchar();

}



void maindfh()
{

	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	//二维数组，内存地址按照连续的方式排列
	printf("%d\n", sizeof(a));
	printf("%x\n", &a);

	getchar();
}