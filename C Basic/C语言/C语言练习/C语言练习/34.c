
/*
34.	�����һ��6��6�Ķ�ά�����������ǲ���ȫ��ֵΪ-1����������ȫ��ֵΪ1��
���Խ��ߣ��У����±���ͬ���ϵ�Ԫ������2���������е�ֵ���ж��뷽ʽ�����
Ҫ��: ������ʹ��scanf������

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main34()
{
	int arr[6][6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (i>j)
			{
				arr[i][j] = -1;
			} 
			else if (i<j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = 2;
			}
			printf("%4d", arr[i][j]);
		}
		printf("\n");

	}
	system("pause");



}