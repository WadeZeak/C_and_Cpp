#include<stdlib.h>
#include<stdio.h>



void main1()
{

	int *p = (int *)malloc(sizeof(int) * 40);//һά����
	for (int *px = p,i=0; px < p+40; px++,i++)
	{

		*px = i;
	//	printf("%p,%d\n", px, *px);
	}

	//����ȥ����������������
	//����ָ��
	int(*pp)[8] = (int(*)[8])p;//ָ�����;��������ķ��ʷ�ʽ

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
		//	printf("%-5d", pp[i][j]);
			printf("%-5d", *((pp+i)+j));//pp����ָ��
		}
		printf("\n");

	}


	//p[i][j][k]
	int(*ppp)[2][5] = (int(*)[2][5])p;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("%-5d", *(*(*(ppp + i) + j )+ k));
				//printf("%-5d",ppp[i][j][k] );//��ӡԪ��
			}
			printf("\n");
		}

		printf("\n---------------------------------\n");
	}
		 





	system("pause");
}



void main2()
{

	int a[3][4] = { 0 };

	for (int  i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = i + j;
		}
	}

	int i = 0;


	printf("%p,%p,%p\n\n\n", a[0], a[1], a[2]);


	for (int *p = a; p<a[0]+8; p++)//a�������е��е�ַ,a[0]�����һ��Ԫ�صĵ�ַ,������ͬ
	{
		i++;
		printf("%-5d", *p);
		if (((p - a[0]) + 1) % 4 == 0)
			printf("\n");
	}


	printf("\n\n\ni=%d\n", i);

	system("pause");
}