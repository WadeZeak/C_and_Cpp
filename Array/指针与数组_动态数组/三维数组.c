#include<stdlib.h>
#include<stdio.h>

//һά����
//a[10]  -> *p
//��ά����
//a[10][10] -> (*p)[10]
//��ά����
//a[3][4][5] -> (*p)[4][5]
 


void print(int a[3][4][5])
{

	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("%-4d", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n-------------------------\n");
	}

}


void printA(int (*p)[4][5])
{


	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				//printf("%-4d", p[i][j][k]);
				//printf("%-4d", (*(p+i))[j][k]);
			//	printf("%-4d", (*(*(p+i)+j))[k]);
				//ָ�������ά����
				printf("%-4d", *((*(*(p+i)+j))+k));
			}
			printf("\n");
		}
		printf("\n-------------------------\n");
	}



}


void main()
{

	int a[3][4][5];
	printf("%p\n", &a[0][0][0]);
	printf("%d\n", sizeof(a));//3*4*5*4


	int i = 0;
	//���Գ�ʼ��
	for (int *p = &a[0][0][0]; p < (&a[0][0][0]+60); p++)
	{
		*p = i;
		i++;
	}

	//print(a);
	printA(a);
	system("pause");
}