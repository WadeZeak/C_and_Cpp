
/*
38.	����a-1��a+1�Ǵ���10����������֤a3-4a�ɱ�120���������������a��ֵ��
��a-1��a+1�Ƿ�Ϊ�����������������NOT PRIME!��������������������֤a3-4a�Ƿ�ɱ�120������

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

			printf("���Ա�120����\n");
			return;
		}
	}
	printf("%d\n", (int)(pow(num, 3) - (int)pow(4, num)) % 120);
	printf("��������ݲ���������\n");
	return;

}

void main38()
{

	int num = 0;
	printf("����������:");
	scanf("%d", &num);
	Function(num);
	
	system("pause");
}