#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
#define time_block 1

struct job
{
	char name[10];
	int wait_time;
	int execut_time;
	int cycling;
}job[10];


void min_time()
{
	int i, j, n, k;
	printf("请输入作业数量:\n");
	scanf("%d", &n);
	printf("请输入作业名称\t作业执行时间\n");

	for (i = 0; i < n; i++)
	{
		scanf("%s", job[i].name);
		getchar();
		scanf("%d", &job[i].execut_time);
	}

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - j; i++)
		{
			if (job[i].execut_time >= job[i + 1].execut_time)
			{
				k = job[i].execut_time;
				job[i].execut_time = job[i + 1].execut_time;
				job[i + 1].execut_time = k;
			}

			if (i == 0)
			{
				job[0].wait_time = 0;
			}
			else
			{
				job[i].wait_time = job[i - 1].execut_time;
			}
		}
		printf("作业的执行次序为:");
		printf("%s", job[i].name);
	}
	float s = 0;
	for (i = 0; i < n; i++)
	{
		job[i].cycling = job[i].execut_time + job[i].wait_time;
		s += job[i].cycling;
	}
	printf("周转时间为:");
	printf("%f", s / n);
}



void main()
{
	min_time();
	system("pause");
}
