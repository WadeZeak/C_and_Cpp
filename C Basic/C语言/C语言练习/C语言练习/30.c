/************************************************************************/
/*
30.	�������㺯��
P(x)=b0xn + b1xn-1 + ... + bn-1x + bn
��ֵ��Ҫ���Ƚ�X�ĸ���ϵ�������뵽����B�У�Ȼ������ѭ���ṹ��P(X)��ֵ��

*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void main30()
{
	srand((unsigned)time(NULL));
	int B[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		B[i] = rand() % 100;
	}
	int Px=0;

	for (int  i = 0; i < 10; i++)
	{
		Px += rand() % 100 * B[i];
	}

	printf("%d\n", Px);
	system("pause");

}