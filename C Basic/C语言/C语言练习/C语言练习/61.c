/*
���ܣ� ��д�Ӻ���, ��һά��������M[10]�����ֵ�������ֵ�������ֵ���ܲ����ڣ���
������������10������, Ȼ����������Ӻ���, �������ֵ����, ��������ֵ�������ֵ,
����������ֵ��'NO'�����Ҳ����������ʵ�֣�

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int getMaxnum(int arr[]);
int getSecond(int arr[],int max);

void main61()
{

	int arr[10] = { 0 };

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%4d", arr[i]);
	}
	int max=getMaxnum(arr);

	printf("\n�����:%d\n",max );

	int secmax = getSecond(arr, max);
	if (secmax)
	{
		printf("�ڶ������:%d\n", secmax);
	}
	else
	{
		printf("û�еڶ������");
	}
	system("pause");

}

int getMaxnum(int arr[])
{
	int max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;
}



int getSecond(int arr[],int max)
{
	
	for (int i = 1; i < 9; i++)
	{
		if (arr[i] == arr[i + 1])
			return 0;
	}
	int secmax = 0;
	for (int i = 1; i < 10; i++)
	{
		if (max > arr[i]&&secmax<arr[i])
			secmax = arr[i];
	}
	
	return secmax;



}