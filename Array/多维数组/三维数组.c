#include<stdlib.h>
#include<stdio.h>

void mainrthrhrh()
{

	int num[3][4][5];
	int a = 1;
	for (int i = 0; i < 3*4*5; i++)
	{
		num[i / 20][(i / 5) % 4][i % 5] = a++;
		printf("%-3d", num[i / 20][(i / 5) % 4][i % 5]);
		if ((i+1)%5==0)
			printf("\n");
		if ((i+1)%20==0)
		printf("\n\n");

	}

	getchar();

}



void mainhrtr()
{
	int num[5][4][3];
	int a = 1;

	printf("%x\n", num);
	//ÏßÐÔÅÅÁÐ
	printf("%d\n", sizeof(num));


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3  ; k++)
			{
				num[i][j][k] = a++;
				printf("%-3d", num[i][j][k]);
			}
			printf("\n");
		}

		printf("\n\n");
	}
	system("pause");
}