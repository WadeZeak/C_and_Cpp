#include<iostream>
#include<time.h>
using namespace std;


int search(int *p, int n, int data)
{

	for (int i = 0; i < n; i++)//循环次数,统计时间复杂度
	{
		if (*(p+i)==data)
		{
			return i;
		}
	}

	return NULL;
}


void swap(int *p1,int *p2)
{
	//节约空间
	*p1 ^=  (*p2);//异或
	*p2 ^= (*p2);
	*p1 ^= (*p2);

	{
		//浪费了空间
		int temp = (*p2);
		(*p2) = *p1;
		(*p1) = temp;
	}
}



void main342()
{

	time_t ts;
	unsigned int times = time(&ts);
	srand(times);//随机数种子

	int a[100];



	for (int i = 0; i < 100; i++)
	{
		a[i] = rand();
		cout << a[i] << endl;
	}

	cin.get();
}


