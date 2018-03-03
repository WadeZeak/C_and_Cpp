/*
39.	有n个整数，编程序将前面的各个数依次向后移动k个位置，
最后k个数移到最前边的k个位置（见下图，其中n=8，k=3）。
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



void main39()
{
	
	int n = 0;
	printf("请输入数组个数: ");
	scanf("%d", &n);
	int k = 0;
	printf("请输入移动的位置: ");
	scanf("%d", &k);
	if (k>n)
	{
		printf("移动的位置过大\n");
		goto Loop;
		return;
	}

	int *p = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		p[i] = i;
		printf("%d  ", p[i]);
	}

	int *pb = (int *)malloc(sizeof(int)*k);

	for (int i = k, j=0; i >0&&j<k ; i--,j++)
	{
		pb[j] = p[n - i];
	}
	
	int tmp = p[0];
	int next = p[0];
		for (int i = 0; i <k; i++)
		{
			tmp = p[i];
			for (int j = i; j < n; j+=k)
			{
				if (j + k >= n)
					break;
				
				next = p[j + k];
				p[j + k] = tmp;
				tmp = next;
			}
		}

		for ( int i = 0; i < k; i++)
		{
			p[i] = pb[i];

		}
		printf("\n");
	
		for (int i = 0; i < n; i++)
		{
			printf("%d  ", p[i]);
		}


		free(p);
		free(pb);
	goto Loop;


	
Loop:
	system("pause");

}