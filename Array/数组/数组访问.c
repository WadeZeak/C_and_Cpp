#include<stdlib.h>
#include<stdio.h>

//逆序
void mainfgsg()
{

	int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 9; i >= 0 ; i--)
	{
		printf("%d,%x\n", *(num + i), num + i);
	}

	getchar();
}



void maing()
{
	int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d,%d,%x,%x\n", num[i],*(num+i),&num[i],num+i);
		//num[i]等价于*(num+i),&num[i]等价于num+i
	}


	system("pause");
}