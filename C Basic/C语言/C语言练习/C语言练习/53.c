/*
���ܣ�ϴ�˿��ơ���54���Ʒֱ���Ϊ1,2,��,54�ţ�����������M�С�
ϴ�Ʒ������£�����[1,54]�����ڵ�һ�������K����M[1]��M[K]������
Ȼ�����[2,54]֮����������K����M[2]��M[K]����������
ֱ��ʣ�����һ����Ϊֹ�����дʵ������ϴ�Ƶĳ���
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void main53()
{
	int card[54] = { 0 };
	for (int  i = 0; i < 54; i++)
	{
		card[i] = i + 1;
	}

	int K = 0;
	int tmp = 0;
	for (int i = 0; i < 53; i++)
	{
		K = rand() %(53-i)  + i;//(i,52)
		tmp = card[i];
		card[i] = card[K];
		card[K] = tmp;
		
	}

	for (int i = 0; i < 54; i++)
	{
		printf("%4d", card[i]);
	}
	system("pause");
}