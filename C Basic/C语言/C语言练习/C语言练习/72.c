/*
74.	�˻ʺ����⡣
��һ��8��8�Ĺ������������Ϸ���8���ʺ�����˸��ʺ󻥲���ԣ�����8���ʺ����������������ͬһ�С�ͬһ�м�ͬһб���ϡ�
������ҳ����зŷ���
����һ�����ǣ���*��ʾ�ʺ�
��ʾ��
1) ����һά���飨8��Ԫ�أ�����������:
1	  5	  8	  6      	  3	  7  	  2  	 4
2) Ϊ��ʹ����򵥣�������5��5�����ϵ�5�ʺ����⡣
*/


#include<stdio.h>
#include<stdlib.h>

static int methods = 0;

int isSafe(int k,int col,int equeen[])
{

	//�Ƿ�ͬһ��
	for (int i = 0; i < k; i++)
	{
		if (equeen[k]==equeen[i])
		{
			return 0;
		}
	}


	//�Ƿ�ͬһ��

	for (int i = 0; i < k; i++)
	{
		if (equeen[k] == equeen[i])
		{
			return 0;
		}
	}


	//�Ƿ�ͬһб��





}

void Allmethods(int equeen[])
{





}





void main()
{
	int equeen[8] = { 0 };//8�����Ӿ�δ����

	Allmethods(equeen);


	system("pause");

}
