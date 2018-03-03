
/*
19.	找3个数字，填在下面式子中，使等式成立。
_6325 = 6325_ ×   ____  （等号左边是五位）
1,若答案有多个，则打印一组即可；
2,若无满足条件的数字，则显示'NO DIGITALS'。
*/
#include<stdlib.h>
#include<stdio.h>

void main19()
{
	int num = 0;
	int data1 = 6325;
	int data2 = 63250;
	for (int i = 1; i <=9; i++)
	{
		num = num * 10000 + data1;
		for (int  j = 0; j <= 9; j++)
		{
			data2 += j;
			if (num%data2==0)
			{
				printf("%d6352 = 6352%d * %d\n", i, j, num / data2);
				goto Loop;
				return;
			}
			data2 = 63250;
		}
	}


	printf("NO DIGITALS\n");
	goto Loop;




Loop:
	system("pause");


	

}

void main500_19()
{
	int data = 6325;
	int temp1;
	int temp2 = data * 10;
	int flag = 1;//结束标志
	for (int i = 1; i <= 9; i++)
	{
		temp1 = i * 10000 + data;
		for (int j = 0; j <= 9; j++)
		{
			temp2 = temp2 + j;
			for (int k = 0; k < 100; k++)
			{
				if (temp1 == temp2 * k)
				{
					flag = 0;
					printf("temp1 = %d", temp1);
					break;
				}
			}
		}

	}
	if (flag)
	{
		printf("NO DIGITALS\n");
	}
	system("pause");
}