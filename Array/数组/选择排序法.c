#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void mainfff()
{

	int num[10];
	time_t tms;//ʱ����������
	srand((unsigned int)time(&tms));//�������������
	for (int k = 0; k< 10; k++)
	{
		num[k] = rand() % 100 + 100;
		printf("%d  ", *(num + k));
	}
	printf("\n\n\n");

	int min;

	for (int i = 0; i < 9; i++)
	{
		min = i;
		for (int j =i +1; j < 10; j++)
		{
			if (num[min] >num[j])
				min = j;
		}
		

		if (min != i)
		{
			
		  int  temp = num[i];
			num[i] = num[min];
			num[min] = temp;
			
		}
		printf("״̬%d\n", i+1);
		for (int m = 0; m < 10; m++)
		{
			
			printf("%d  ", *(num + m));
		}
		printf("\n");

	}

	printf("\n���������Ժ�:\n");

	for (int m = 0; m < 10; m++)
	{
		printf("%d  ", *(num + m));
	}

	getchar();

}


void max_and_min()
{

	int num[10];
	time_t tms;//ʱ����������
	srand((unsigned int )time (&tms));//�������������
	for (int i = 0; i < 10; i++)
	{
		num[i] = rand()%100+100;
		printf("%d ", *(num+i));
	}
	int X = 0;
	int Y = 0;
	for (int i = 0; i < 10; i++)
	{
		if (num[X] < num[i])
		{
			X = i;
		}
		if (num[Y] > num[i])
		{
			Y = i;
		}
	}
	printf("\nmax=%d", num[X]);
	printf("\nmin=%d", num[Y]);
	system("pause");
}