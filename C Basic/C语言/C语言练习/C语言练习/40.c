
/*
��һ����M�ֽ�Ϊ��������M��0����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int IsPrime(int num)
{

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}

	return 1;
}
void main40()
{

	int num = 0;
	printf("����������:");
	scanf("%d", &num);
	
	for (int  i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			if (IsPrime(i)&&IsPrime(num/i))
			{
				printf("�ɷֽ�Ϊ��������:%d,%d", i, num / i);
				break;
			}
		}
	}

	
	system("pause");


}