
/*
���ܣ����Ԫ�������������������25��[25,75]֮��������� �����͵�һά����M�С�
Ҫ���M[I],M[I+J],M[I+2*J],����ЩԪ�ذ���С�����˳������
J��ֵ�ɼ������룬I��1��J�仯��ʵ��������JΪ�������J�����У�ÿ�������д�С��������
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void Sort67(int arr[], int i,int J)
{


	if (i<25/J)
	{
		for (int  m = 0; m < 25/J; m++)
		{
			for (int n = i; n < 25-(m+1)*J-i; n+=J)
			{
				if (arr[n]>arr[n+J])
				{
					int tmp = arr[n];
					arr[n] = arr[n + J];
					arr[n + J] = tmp;
				}
			}
		}
	}
	else
	{
		for (int m = 0; m < 25 / J-1; m++)
		{
			for (int n = i; n < 25 - (m + 1)*J - i; n += J)
			{
				if (arr[n]>arr[n + J])
				{
					int tmp = arr[n];
					arr[n] = arr[n + J];
					arr[n + J] = tmp;
				}
			}
		}
	}
}



void main67()
{
	int arr[25] = { 0 };

	for ( int i = 0;   i < 25;   i++)
	{
		arr[i] = rand() % 51 + 25;
		printf("%4d", arr[i]);
	}


	int J = 0;
	printf("\n\n��������:");
	scanf("%d", &J);

	for (int i = 0; i < J; i++)
	{
		Sort67(arr, i, J);
	}

	printf("\n\n�����:\n");
	for (int i = 0; i < 25; i++)
	{
		printf("%4d", arr[i]);
	}

	
	system("pause");
}