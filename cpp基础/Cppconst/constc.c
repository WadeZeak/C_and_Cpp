#include<stdlib.h>
#include<stdio.h>


void main1()
{
	const int num = 100;
	//int a[num];//C�����н�ֹ   C������num��α����

	printf("%d\n", num);

	int *p = &num;//C����������������,���ͼ�ⲻ̫�ϸ�
	*p = 50;
	printf("%d\n", num);


	system("pause");
}