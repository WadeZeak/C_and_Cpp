#define  _CRT_SECURE_NO_WARNINGS

#include<dos.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef char string[10]; /* //定义string为含有10个字符元素的字符数组类型*/
struct task {
	string name;  /*作业号*/
	int arrTime; /* 作业到达时间*/
	int serTime; /*作业要求服务时间*/
	int waiTime; /*等待时间*/
	int begTime; /*开始运行时间*/
	int finTime; /*结束运行时间*/
	int turTime; /*周转时间*/
	int wTuTime; /*带权周转时间*/
	int priority;/*优先权*/
	int finish;/*是否已经完成*/
}JCB[10];

int num;
void input()
{
	int i;
	system("cls");
	printf("\n请输入作业数量: ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		printf("\n请输入作业 NO.%d:\n", i);
		printf("  作业名称: ");
		scanf("%s", JCB[i].name);
		printf("  到达时间: ");
		scanf("%d", &JCB[i].arrTime);
		printf("  服务时间: ");
		scanf("%d", &JCB[i].serTime);
		JCB[i].priority = 0;
		JCB[i].finish = 0;
	}
}

int HRN(int pre)
{
	int current = 1, i, j;/* 优先权 =(等待时间+服务时间)/服务时间*/
	for (i = 0; i<num; i++)
	{
		JCB[i].waiTime = JCB[pre].finTime - JCB[i].arrTime; /*等待时间 =上一个作业的完成时间-到达时间*/
		JCB[i].priority = (JCB[i].waiTime + JCB[i].serTime) / JCB[i].serTime;
	}
	for (i = 0; i<num; i++)
	{
		if (!JCB[i].finish)
		{
			current = i;  /*找到第一个还没完成的作业*/
			break;
		}
	}
	for (j = i; j<num; j++) /*和后面的作业比较*/
	{
		if (!JCB[j].finish) /* 还没完成(运行)*/
		{
			if (JCB[current].arrTime <= JCB[pre].finTime)  /*如果作业在上一个作业完成之前到达*/
			{
				if (JCB[j].arrTime <= JCB[pre].finTime&&JCB[j].priority>JCB[current].priority)
					current = j;/* 找出到达时间在上一个作业完成之前，优先权高的作业*/
			}
			else /* 如果作业是在上一个作业完成之后到达*/
			{
				if (JCB[j].arrTime<JCB[current].arrTime)
					current = j;  /* 找出比较早到达的一个*/
				if (JCB[j].arrTime == JCB[current].arrTime) /* 如果同时到达*/
					if (JCB[j].priority>JCB[current].priority)
						current = j; /*找出服务时间比较短的一个*/
			}
		}
	}
	return current;/*返回当前作业*/
}
void runing(int i, int times, int pre, int staTime, int endTime)
{
	if (times == 0)
	{
		JCB[i].begTime = JCB[i].arrTime;
		JCB[i].finTime = JCB[i].begTime + JCB[i].serTime;
		JCB[i].turTime = JCB[i].serTime;
		JCB[i].wTuTime = 1.0;
		staTime = JCB[i].begTime;
	}
	else
	{
		if (JCB[i].arrTime>JCB[pre].finTime)
			JCB[i].begTime = JCB[i].arrTime;
		else
			JCB[i].begTime = JCB[pre].finTime;
		JCB[i].finTime = JCB[i].begTime + JCB[i].serTime;
		JCB[i].turTime = JCB[i].finTime - JCB[i].arrTime;
		JCB[i].wTuTime = JCB[i].turTime / JCB[i].serTime;
	}
	if (times == num - 1)
		endTime = JCB[i].finTime;
	JCB[i].finish = 1;
}
void print(int i, int times)
{
	if (times == 0)
	{
		printf("     名称  到达时间  服务时间  开始时间  完成时间  周转时间  带权周转时间\n");
	}
	printf("%9s%9d%9d%9d%9d%9d%9d\n",
		JCB[i].name, JCB[i].arrTime, JCB[i].serTime,
		JCB[i].begTime, JCB[i].finTime, JCB[i].turTime, JCB[i].wTuTime);
}
void check()
{
	int i;
	int staTime, endTime, sumTurTime = 0.0, sumWTuTime = 0.0, aveTurTime, aveWTuTime;
	int current = 0, times = 0, pre = 0;
	JCB[pre].finTime = 0;
	for (i = 0; i<num; i++)
	{
		JCB[i].finish = 0;
	}
	staTime, endTime, sumTurTime = 0.0, sumWTuTime = 0.0, aveTurTime, aveWTuTime;
	current = 0; times = 0; pre = 0; endTime = 0; staTime = 0;
	JCB[pre].finTime = 0;
	printf("-------------------------------------------------------------------------\n");
	for (i = 0; i<num; i++)
	{
		JCB[i].finish = 0;
	}
	staTime, endTime, sumTurTime = 0.0, sumWTuTime = 0.0, aveTurTime, aveWTuTime;
	current = 0; times = 0; pre = 0;
	JCB[pre].finTime = 0;
	printf("\n-- HRRN -----------------------------------------------------------------\n");
	for (times = 0; times<num; times++)
	{
		current = HRN(pre);
		runing(current, times, pre, staTime, endTime);
		print(current, times);
		pre = current;
	}
	for (i = 0; i<num; i++)
	{
		sumTurTime += JCB[i].turTime;
		sumWTuTime += JCB[i].wTuTime;
	}
	aveTurTime = sumTurTime / num;
	aveWTuTime = sumWTuTime / num;
	printf("(计与平均值)             %9d%9d%9d%9d\n", NULL, sumTurTime, aveTurTime, aveWTuTime);
	printf("-------------------------------------------------------------------------\n");
}

void main23()
{
	char again;
	do {
		system("cls");  /*清屏*/
		printf("please input 4 groups of datas:\n");
		input();
		check();
		printf("Continue...(Y/N): ");
		do{
			again = getchar();
		} while (again != 'Y' && again != 'y' && again != 'N' && again != 'n');
	} while (again == 'Y' || again == 'y');
}

