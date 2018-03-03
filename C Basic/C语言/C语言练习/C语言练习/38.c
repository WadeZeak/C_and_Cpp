
/*
38.	假设a-1和a+1是大于10的素数，验证a3-4a可被120整除。编程序输入a的值，
判a-1和a+1是否为素数。若不是输出“NOT PRIME!”；若都是素数，再验证a3-4a是否可被120整除。

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int isPrime(int num)
{
	int a1 = num - 1;
	int a2 = num + 1;
	if (a1<10||a2<10)
	{
		return 0;
	}
	
	for (int i = 2; i < sqrt(a1); i++)
	{
		if (a1%i==0)
		{		
			return 0;
			
		}
	}

	for (int i = 2; i < sqrt(a2); i++)
	{
		if (a2%i == 0)
		{
			return 0;

		}
	}

	return 1;


}

void Function(int num)
{
	if (isPrime(num))
	{
		if ((int)(pow(num,3)-(int)pow(4,num))%120==0)
		{

			printf("可以被120整除\n");
			return;
		}
	}
	printf("%d\n", (int)(pow(num, 3) - (int)pow(4, num)) % 120);
	printf("输入的数据不符合条件\n");
	return;

}

void main38()
{

	int num = 0;
	printf("请输入数字:");
	scanf("%d", &num);
	Function(num);
	
	system("pause");
}