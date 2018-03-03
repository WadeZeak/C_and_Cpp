
/*
54.	有N张牌，计算机和你轮流取牌，每次只能取 1─2张，谁最后取完谁胜利。编写完成此功能的程序。
要求：
1) 让计算机先取。
2) 你取的张数由键盘输入。
3) 计算机第一次取牌时由键盘输入来确定是取1还是取2，以后它再取牌时由程序判断来决定取几张牌。
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void main54()
{

	int mflag = 0;
	printf("请输入取牌的顺序: 1代表玩家先取,2代表计算机先取\n");
	scanf("%d", &mflag);
	if (mflag!=2&&mflag!=1)
	{
		printf("输入的数据有误!!\n");
		system("pause");
		return;
	}

	int cards = 0;
	int num =0;
	int tmp = 0;
	printf("请输入牌的数量:");
	scanf("%d", &num);
	if (num<2)
	{
		printf("输入的数据有误!!\n");
		system("pause");
		return;
	}
	if (mflag==1)
	{
	
		while (num)
		{
		
			printf("玩家请输入取牌的数量:");
			scanf("%d", &cards);
			if (cards != 1 && cards != 2)
			{
				printf("输入的数据有误!!\n");
				system("pause");
				return;
			}
			num -= cards;
			printf("剩余的牌的数量:%d\n", num);
			if (num<=0)
			{
				printf("玩家获胜!!\n");
				system("pause");
				return;
			}

			tmp = rand() % 2 + 1;
			num -= tmp;
			printf("电脑取牌:%d\n", tmp);
		//	printf("剩余的牌的数量:%d\n", num);
			if (num<=0)
			{
				printf("电脑获胜!!");
				system("pause");
				return;
			}

		}

	}
	else
	{
		while (num)
		{
			tmp = rand() % 2 + 1;
			num -= tmp;
		//	printf("剩余的牌的数量:%d", num);
			printf("电脑取牌:%d\n", tmp);

			if (num<=0)
			{
				printf("电脑获胜!!\n");
				system("pause");
				return;
			}
			printf("玩家请输入取牌的数量:");
			scanf("%d", &cards);
			if (cards != 1 && cards != 2)
			{
				printf("输入的数据有误!!\n");
				system("pause");
				return;
			}
			num -= cards;
			printf("剩余的牌的数量:%d\n", num);
			if (num<=0)
			{
				printf("玩家获胜!!");
				system("pause");
				return;
			}
		}
	}



}