#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>


struct Student
{
	char name[20];
	int age;
	char sex;
}stu[5];


void main()
{
	float avg;
	for (int  i = 0; i < 5; i++)
	{
		scanf("%s %d %c", stu[i].name, &stu[i].age, &stu[i].sex);
	}

	int sum=0;
	for (int j = 0; j < 5; j++)
	{
		sum += stu[j].age;
	}

	avg = sum / 5.0f;
	printf("avg=%f", avg);

	system("pause");
}