#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

//一次一个分支,需要调用break
//连续执行多个分支,不需要break




void main1()
{

	int num;
	scanf("%d",&num);
	printf("%d\n", num);

	//常量不能重合
	switch (num)
	{
		//switch 的任何分支都是平等的
		//case 相当一个开关(入口)，满足要求时，开始执行，直到遇到break停止
	case 10 :
		printf("司令");
		break;
	case 9:
		printf("军长");
		break;
	case 8:
		printf("师长");
		//break;
	case 7:
		printf("旅长");
		//break;
	case 6:
		printf("团长");
		//break;
	case 5:
		printf("营长");
	case 4:
		printf("连长");
		//break;
	case 3:
		printf("排长");
		break;
	case 2:
		printf("组长");
		//break;
	case 1 :
		printf("大兵");
		break;
	case 0:
	case -1:
		printf("Hello World");
		break;
		//可以不包含defealt分支,也可以将其放在首部
		//default处理意外的情况
	default :
		printf("输入错误");
		break;
	}


	system("pause");



}