#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void main7893()
{

	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}

	int b[4][3];
	for (int  k = 0; k < 4; k++)
	{
		for (int m = 0; m < 3; m++)
		{

			b[k][m] = a[m][k];
			printf("%-3d", b[k][m]);
		}
		printf("\n");
	}



	system("pause");

}



void mainsss()
{

	
	int m;
	scanf("%d", &m);
	int num[10][10];
	int sum = 0;
	//for (int i = 0; i < m; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		num[i][j] = i*m + j + 1;
	//		printf("%-3d", num[i][j]);
	//	
	//	}
	//	printf("\n");
	//}
	

	int a=1;
	for(int i=0;i<m*m;i++)
	{
	num[i/m][i%m]=a++;
	printf("%-3d",num[i/m][i%m]);
	if((i+1)%m==0)
	printf("\n");
	}
	
	for (int k = 0; k < m; k++)
	{
		sum += num[k][k];
	}
	printf("%d\n", sum);

	system("pause");
}