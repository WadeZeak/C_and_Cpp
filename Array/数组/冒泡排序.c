#include<stdlib.h>
#include<stdio.h>

void maindfhd()
{

	int num[10];
	time_t tms;//ʱ����������
	srand((unsigned int)time(&tms));//�������������

	for (int i = 0; i < 10; i++)
	{
		num[i] = rand() % 100 + 100;
		printf("%d ", *(num + i));
	}
	printf("\n\n");
	for (int i = 0; i < 9; i++)
	{
		printf("״̬%d\n", i+1);
		for (int j = 0; j <9 - i; j++)
		{
			if (num[j]>num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}	

			for (int k = 0; k < 10; k++)
			{
				printf("%d  ", *(num + k));
			}
			printf("\n");
		}
		
		
		printf("\n\n");

	}

	printf("%\n");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", *(num + k));
	}
	getchar();


}


void once()
{

	int num[10];
	time_t tms;//ʱ����������
	srand((unsigned int)time(&tms));//�������������
	for (int i = 0; i < 10; i++)
	{
		num[i] = rand() % 100 + 100;
		printf("%d ", *(num + i));
	}
	
	for (int i = 0; i < 9; i++)
	{
		if (num[i]>num[i+1])
		{
			int temp = num[i];
			num[i] = num[i + 1];
			num[i + 1] = temp;
		}
		
	}
	printf("%\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(num + i));
	}
	getchar();

}