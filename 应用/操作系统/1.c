#define  _CRT_SECURE_NO_WARNINGS

#include<dos.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef char string[10]; /* //����stringΪ����10���ַ�Ԫ�ص��ַ���������*/
struct task {
	string name;  /*��ҵ��*/
	int arrTime; /* ��ҵ����ʱ��*/
	int serTime; /*��ҵҪ�����ʱ��*/
	int waiTime; /*�ȴ�ʱ��*/
	int begTime; /*��ʼ����ʱ��*/
	int finTime; /*��������ʱ��*/
	int turTime; /*��תʱ��*/
	int wTuTime; /*��Ȩ��תʱ��*/
	int priority;/*����Ȩ*/
	int finish;/*�Ƿ��Ѿ����*/
}JCB[10];

int num;
void input()
{
	int i;
	system("cls");
	printf("\n��������ҵ����: ");
	scanf("%d", &num);
	for (i = 0; i<num; i++)
	{
		printf("\n��������ҵ NO.%d:\n", i);
		printf("  ��ҵ����: ");
		scanf("%s", JCB[i].name);
		printf("  ����ʱ��: ");
		scanf("%d", &JCB[i].arrTime);
		printf("  ����ʱ��: ");
		scanf("%d", &JCB[i].serTime);
		JCB[i].priority = 0;
		JCB[i].finish = 0;
	}
}

int HRN(int pre)
{
	int current = 1, i, j;/* ����Ȩ =(�ȴ�ʱ��+����ʱ��)/����ʱ��*/
	for (i = 0; i<num; i++)
	{
		JCB[i].waiTime = JCB[pre].finTime - JCB[i].arrTime; /*�ȴ�ʱ�� =��һ����ҵ�����ʱ��-����ʱ��*/
		JCB[i].priority = (JCB[i].waiTime + JCB[i].serTime) / JCB[i].serTime;
	}
	for (i = 0; i<num; i++)
	{
		if (!JCB[i].finish)
		{
			current = i;  /*�ҵ���һ����û��ɵ���ҵ*/
			break;
		}
	}
	for (j = i; j<num; j++) /*�ͺ������ҵ�Ƚ�*/
	{
		if (!JCB[j].finish) /* ��û���(����)*/
		{
			if (JCB[current].arrTime <= JCB[pre].finTime)  /*�����ҵ����һ����ҵ���֮ǰ����*/
			{
				if (JCB[j].arrTime <= JCB[pre].finTime&&JCB[j].priority>JCB[current].priority)
					current = j;/* �ҳ�����ʱ������һ����ҵ���֮ǰ������Ȩ�ߵ���ҵ*/
			}
			else /* �����ҵ������һ����ҵ���֮�󵽴�*/
			{
				if (JCB[j].arrTime<JCB[current].arrTime)
					current = j;  /* �ҳ��Ƚ��絽���һ��*/
				if (JCB[j].arrTime == JCB[current].arrTime) /* ���ͬʱ����*/
					if (JCB[j].priority>JCB[current].priority)
						current = j; /*�ҳ�����ʱ��Ƚ϶̵�һ��*/
			}
		}
	}
	return current;/*���ص�ǰ��ҵ*/
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
		printf("     ����  ����ʱ��  ����ʱ��  ��ʼʱ��  ���ʱ��  ��תʱ��  ��Ȩ��תʱ��\n");
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
	printf("(����ƽ��ֵ)             %9d%9d%9d%9d\n", NULL, sumTurTime, aveTurTime, aveWTuTime);
	printf("-------------------------------------------------------------------------\n");
}

void main23()
{
	char again;
	do {
		system("cls");  /*����*/
		printf("please input 4 groups of datas:\n");
		input();
		check();
		printf("Continue...(Y/N): ");
		do{
			again = getchar();
		} while (again != 'Y' && again != 'y' && again != 'N' && again != 'n');
	} while (again == 'Y' || again == 'y');
}

