#define  _CRT_SECURE_NO_WARNINGS
#define _AFXDLL
//Լ�������MFC������ʹ�õľ�̬���ӿ⻹�Ƕ�̬���ӿ⡣
//�������������꣨ͨ�����ڹ�����Ŀ�����У���˵��ʹ�õ���MFC��̬���ӣ�����ΪMFC��̬���ӡ�

#include"afx.h"
#include<stdlib.h>
#include<stdio.h>

int i = -5;
int j = 5;
int array[6][6];

//����
void printBit(int n)
{

	for (int i = 31; i >=0; i--)
	{
		int k = (n >> i) &1;//kΪ��iλ��ֵ
		printf("%d", k);
	}
	printf("\n");
}

//�ҹ���
void Div()
{
	//��һ��
	for (int i = 0; i < 6; i++)
	{
		array[i][0] = 1;
	}

	array[0][1] = 2;
	//��һ��
	for (int k = 0; k < 4; k++)
	{
		array[0][k + 2] = array[0][k] + array[0][k + 1];
	}

	//ʣ�µĲ���

	for (int m = 1; m < 6; m++)
	{
		for (int n = 1; n < 6; n++)
		{
			array[m][n] = array[m][n - 1] + array[m - 1][n] + array[m - 1][n - 1];
		}	
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%6d", array[i][j]);
		}
		printf("\n");
	}
}


//f(n)=f(n-1)*b
int  Rec(int b, int n)
{
	if (n == 0)
		return 1;
	else
	{
		return Rec(b, n - 1)*b;
	}
}

//����
void  InvSeq(int arr[],int n)
{

	for (int i = 0; i < n/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	printf("\n\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int _tmain(int argc, _TCHAR argv[])
{
	/*printf("%x,%d\n", &j, j);
	printf("%x,%d\n",&i, i);
*/
	//printBit(-21);
	
	//Div();
	/*int x, y;
	printf("������x,y��ֵ:\n");
	scanf("%d%d", &x, &y);	
	printf("\n%d\n", Rec(x, y));	*/

	int m;
	printf("������Ԫ�ظ���:\n");
	scanf("%d", &m);
	int *a= (int *)malloc(sizeof(int)*m);
	printf("������Ԫ��:\n");
	for (int i = 0; i < m; i++)
	{
		scanf("%d", a+i);
	}

	InvSeq(a, m);
	system("pause");
	return 0;
}