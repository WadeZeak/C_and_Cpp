/*
功能：请编程序按如下格式打印一个直角三角形的九九乘法表:
       1   2   3   4   5   6   7   8   9
           4   6   8  10  12  14  16  18
               9  12  15  18  21  24  27
                  16  20  24  28  32  36
                      25  30  35  40  45
                          36  42  48  54
                              49  56  63
                                  64  72
                                      81

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main21()
{
	for (int  i= 1; i < 10;i++)
	{
		for (int k = 0; k < i; k++)
		{
			printf("     ");
		}

		for (int  j =i ; j < 9; j++)
		{
			printf("%5d", i*j);
		}
		printf("\n");

	}


	system("pause");


}