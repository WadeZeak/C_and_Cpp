/*
功能：将一个整数（最多是10位数）从低位到高位打印出来，
如该数是12345时，输出应是54321（只占一行）

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int  figures(int num)
{
	int i;
	i = num % 10;
	if (num)
	{		
		num /= 10;			
		printf("%d", i);
		figures(num); 
	}
	else	
		return i;
	

	
}
void  main41()
{

	int num = 0;
	printf("请输入一个数字:");
	scanf("%d", &num);
	printf("\n");


	figures(num);


	system("pause");
}