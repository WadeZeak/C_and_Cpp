
/*
ĳ���չ�˾�涨������������7��9�·ݣ�����Ʊ����20�ţ��Ż�Ʊ�۵�15����20�����£��Ż�5����
�����ε���1��5�¡�10�¡�11�·ݶ�Ʊ����20�ţ��Ż�30����20�����£��Ż�20���������·ݲ��Żݡ�
�������ܸ����·ݺ��ÿͶ�Ʊ���������Ż��ʡ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void Rate_of_Concession(int month, int ticket)
{
	if (month<0||month>12||ticket<0)
	{
		printf("�������������!!\n");
		return;
	}


	if (month>=7&&month<=9)
	{
		if (ticket<20)
		{
			printf("�Ż���Ϊ5%%\n");
		}
		else
		{
			printf("�Ż���Ϊ15%%\n");
		}
	}
	else if ((month>=1&&month<=5)||month==10||month==11)
	{
		if (ticket<20)
		{
			printf("�Ż���Ϊ20%%\n");
		}
		else
		{
			printf("�Ż���Ϊ30%%\n");
		}
	}
	else
	{
		printf("��ʵ���Ż�����\n");
	}

}

void main20()
{
	int month = 0;
	int ticket = 0;	
	printf("���������ε��·�:");
	scanf("%d", &month);
	printf("�����붩Ʊ������:");
	scanf("%d", &ticket);


	 Rate_of_Concession(month, ticket);
	system("pause");



}