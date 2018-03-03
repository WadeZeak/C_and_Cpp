#include<stdlib.h>
#include<stdio.h>
#include"动态数组.h"
#pragma comment(lib,"数组lib.lib")



void main1()
{

	struct data data1;
	int a[10] = { 1545, 26, 6453, 26, 635, 646, 537, 648, 309, 26 };
	init(&data1);//传入一个结构体的地址
	addobject(&data1, 13);
	addobject(&data1, 13);
	addobject(&data1, 11);
	addobject(&data1, 11);
	addobject(&data1, 14);
	//reinit(&data1);
	addobjects(&data1, a, 10);
	sort(&data1,1);
	printall(&data1);
	system("pause");
}



void main()
{
	struct data *pdata = (struct data *)malloc(sizeof(struct data));
	int a[10] = { 1545, 26, 6453, 26, 635, 646, 537, 648, 309, 26 };

	init(pdata);
	addobject(pdata, 13);
	addobject(pdata, 11);
	addobject(pdata, 11);
	addobjects(pdata, a, 10);
	deleteall(pdata, 11);

	sort(pdata, 1);
	printall(pdata);
	system("pause");
}

