/*
22.	��һ��ʵ������������ֹ��ǡ��������ҳ��������е����ֵ����Сֵ��
����������ֵ�����������еĵڼ������������ֵ����γ��֣�ֻ��ӡ����һ����λ�ã���
���ʣ�����ӡ��ÿ�����ֵ����λ�ã�����Ӧ����޸�?
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100

float FindMax(float arr[], int len)
{

	float tmp = arr[0];
	for (int  i = 1; i < len; i++)
	{
		if (arr[i]>tmp)
		{
			tmp = arr[i];
		}
	}
	return tmp;
}

float FindMin(float arr[], int len)
{

	float tmp = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i]<tmp)
		{
			tmp = arr[i];
		}
	}
	
	return tmp;


}

void main22()
{

	float arr[N] = { 0 };
	int count = 0;
	
	while (1)
	{
		float tmp = 0;
		scanf("%f", &tmp);
		if (tmp==0)
		{
			break;
		}
		arr[count] = tmp;
		count++;		
	}

	float maxnum = FindMax(arr, count);
	float minnum = FindMin(arr, count);


	printf("��С������Ϊ:%f\n", minnum);
	printf("��������Ϊ:%f\n", maxnum);

	printf("������ֵ�λ��Ϊ:");
	for (int i = 0; i < count; i++)
	{
		if (arr[i]==maxnum)
		{
			printf("%d ", i);
		}

	}

	printf("\n");

	system("pause");
}