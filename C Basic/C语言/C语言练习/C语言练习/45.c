
/*
功能：用记录来描述一个学生的成绩情况，内容包括：姓名、学号、数学成绩和PASCAL成绩。
要求对一个小组的10个学生的成绩进行统计处理：
1)计算学生的总平均分，并按平均分高低排出名次，打印出姓名。
2)打印出90分以上和不及格者的名字。
要求用子程序来完成。

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Student;
void printAll45(struct Student stu[]);
void printAll45(struct Student stu[]);
void Average45(struct Student *stu);
struct Student
{
	char name[10] ;
	int id;
	int mathScore;
	int PASCALScore;
};

struct Score
{
	int id;
	int avg;
};



void main45()
{
	struct Student Stu[10];
	for (int i = 0; i < 10; i++)
	{
		memset(Stu[i].name, 0, sizeof(char) * 10);
	
	}
	strcpy(Stu[0].name, "A");
	strcpy(Stu[1].name, "B");
	strcpy(Stu[2].name, "C");
	strcpy(Stu[3].name, "D");
	strcpy(Stu[4].name, "E");
	strcpy(Stu[5].name, "F");
	strcpy(Stu[6].name, "G");
	strcpy(Stu[7].name, "H");
	strcpy(Stu[8].name, "I");
	strcpy(Stu[9].name, "J");

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		Stu[i].id = i;
		Stu[i].mathScore = rand() % 100;
		Stu[i].PASCALScore = rand() % 100;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%s,id=%d,mathScore=%d,PASCALScore=%d\n", Stu[i].name, Stu[i].id, Stu[i].mathScore, Stu[i].PASCALScore);
	}

	printf("\n\n\n");
	Average45(Stu);
	printf("\n\n\n");
	printAll45(Stu);

	printf("\n\n\n");
	system("pause");

}


void Average45(struct Student *stu)
{
	struct Score score[10];
	for (int i = 0; i < 10; i++)
	{
		score[i].id = i;
		score[i].avg = (stu[i].PASCALScore + stu[i].mathScore)/2;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10-i-1;j++)
		{
			if (score[j].avg<score[j+1].avg)
			{
				struct Score tmp;
				tmp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%s,avg=%d\n", stu[score[i].id].name, score[i].avg);
	}



}


void printAll45(struct Student stu[])
{

	for (int i = 0; i < 10; i++)
	{

		if (stu[i].mathScore<60||stu[i].PASCALScore<60)
		{
			printf("%s有不及格的成绩\n", stu[i].name);
		}

		if (stu[i].mathScore>90||stu[i].PASCALScore>90)
		{
			printf("%s有90+的成绩\n", stu[i].name);
		}

	}
	return;

}