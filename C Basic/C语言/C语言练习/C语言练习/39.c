/*
39.	��n�������������ǰ��ĸ�������������ƶ�k��λ�ã�
���k�����Ƶ���ǰ�ߵ�k��λ�ã�����ͼ������n=8��k=3����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



void main39()
{
	
	int n = 0;
	printf("�������������: ");
	scanf("%d", &n);
	int k = 0;
	printf("�������ƶ���λ��: ");
	scanf("%d", &k);
	if (k>n)
	{
		printf("�ƶ���λ�ù���\n");
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