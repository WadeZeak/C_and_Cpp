#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int search(int a[], int n, int m)
{


	for (int i = 0; i < n; i++)
	{
		if (m == a[i])
			return i;
		
	}
	return -1;
}
void sort(int a[], int m)
{
	for (int i = 0; i < m-1; i++)
	{
		for (int j = 0; j < m-1-i; j++)
		{
			if (a[j]>a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}



int search2(int b[],int n,int num )
{
	for (int head = 0, end = n - 1, mid = (n-1)/ 2;head<=end ; mid = (head + end) / 2)
	{
		printf("head=%d,mid=%d,end=%d\n",head,mid,end);
		if (num==b[mid])
		{
			return mid;
		}
		else if (num>b[mid]&&num<b[end])
		{
			head = mid + 1;
		}
		else
		{
			end = mid -1;
		}
	}


	return -1;
}


void main()
{
	int a[64];
	time_t tms;
	srand((int)time(&tms));

	for (int i = 0; i < 64; i++)
	{
		a[i] = rand() % 100;
	}
	sort(a, 64);

	for (int k = 0; k < 64; k++)
	{
		printf("%-3d", a[k]);
	}

	printf("\n");
	int num;
	scanf("%d", &num); 
	//int k = search(a, 64, num);
	int k = search2(a, 64, num);
	if (k!=-1)
	{
		printf("\n找到了,i=%d", k);
	}
	else
	{
		printf("\n数据不存在");
	}

	system("pause");

}

