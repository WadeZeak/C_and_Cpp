#define  _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int mid = 0;

void Recdivision(int a[],int head,int end,int num)
{
	mid = (end + head) / 2;
	if (num == a[mid])
	{
		printf("�ҵ���,%d", mid);
		return;
	}
	else if (num<a[mid])
	{
		end = mid - 1;
		Recdivision(a, head, end, num);
	}
	else
	{
		head = mid + 1;
		Recdivision(a, head, end, num);
	}

}


void main()
{
	int a[1024];
	for (int i = 0; i < 1024; i++)
	{
		a[i] = i;
	}

	int num;
	scanf("%d", &num);
	Recdivision(a, 0, 1024, num);
	system("pause");
}
void main2()
{

	int a[1024];
	for (int  i = 0; i < 1024; i++)
	{
		a[i] = i;
	}
	//printf("%p", a);//%p ��ӡ��ַ
	int head = 0;
	int end = 1023;
	int mid = (head + end) / 2;
	int num;
	scanf("%d", &num);
	while (head<=end)
	{
		printf("%d,%d%,%d\n", head, mid, end);
		if (num==a[mid])
		{
			printf("�ҵ���,%d", mid);
			break;
		}
		else if (num<a[mid])
		{
			end = mid - 1;	
		}
		else 
		{
			head = mid +1;
		}
		mid = (end + head) / 2;
	}
	system("pause");
}


void main11()
{

	time_t ts;
	unsigned int num = time(&ts);//��ȡʱ��ת��Ϊ����
	//time�Ǹ�����
	srand(num);//��ʼ�����������
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;//1-100�����
		printf("%d\n", a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i]==4)
		{
			printf("\nfind\n");
			break;
		}
	}

	system("pause");

}