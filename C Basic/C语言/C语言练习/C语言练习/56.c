/*
56.	�������3��39֮���������������ĸ���������ÿ����3����������2���ȵ�1����2����3���ȵ�2����4������ 5,7,11��������������һ�顣
Ҫ��
1) ����ʹ�����顣
2) ��ӡ���������ĸ���������
3) ��������������������ж����顣

*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int isPrime56(int num)
{

	for  (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			return 0;
		}
	}

	return 1;
}




void main56()
{
	
	for (int  i = 3; i <= 39; i++)
	{
		if (isPrime56(i))
		{
			if (i+6<=39)
			{
				if (isPrime56(i+2)&&isPrime56(i+6))
				{
					printf("%d,%d,%d\n", i, i + 2, i + 6);
				}
			}
		}
	}



	system("pause");


}