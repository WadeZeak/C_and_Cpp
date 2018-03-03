#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

struct person
{

	char name[20];
	char sex;
	int age;
};

typedef struct person PERSON;

void main()
{


	PERSON per = {"Tas",'M',20};

	system("pause");
}