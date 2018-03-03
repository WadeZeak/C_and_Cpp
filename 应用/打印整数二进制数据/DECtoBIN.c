#define _CRT_SECURE_NO_WARNINGS 

#include<stdlib.h>
#include<stdio.h>


//求补码
void main1()
{

	 
	int num;
	scanf("%d", &num);
	printf("num=%d,&num=%p\n", num,&num);
	int data = 1 << 31;//构建一个相遇的数据
	for (int i = 1; i <= 32; i++)
	{

		if ((data&num)==0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		num <<= 1;
		if (i % 4 == 0)
		{
			printf("   ");
		}
	
	}

	system("pause");
}


//求原码
void main()
{


	int num;
	scanf("%d", &num);
	printf("num=%d,&num=%p\n", num, &num);
	int data = 1 << 31;//构建一个相遇的数据

	//负数的原码
	if (num < 0)
	{
		num = ~num + 1;//确定数据位
		num = num | data;//确定符号位 1
	}


	
	for (int i = 1; i <= 32; i++)
	{

		if ((data&num) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		num <<= 1;
		if (i % 4 == 0)
		{
			printf("   ");
		}

	}

	system("pause");
}