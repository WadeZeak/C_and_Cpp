/*
43.	��n!��ĩβ�ж��ٸ��㡣����ͨ�����n!���ж��ٸ�10������������ĩβ��ĸ�����
��Ϊ10=2��5����n!�к���2��������Ȼ���ں���5��������
һ����n!��5�������ĸ������㷨����:
1) ����������n;
2) 0=>k, n=>m;
3) ��m<5��ת��5��������ִ�е�4��;
4) m/5��ȡ����=>m, k+m=>k, ת��3��;
5) ���k��n!ĩβ��ĸ�������
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//n!
int Factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n*Factorial(n - 1);
	}


}


int FunctionA(int n,int k)
{
	if (n<5)
	{
		return k;
	}
	else
	{
		return FunctionA(n / 5, k + n/5);
	}



}


void main43()
{
	int num;
	printf("����������:");
	scanf("%d", &num);

	int i = FunctionA(num, 0);
	printf("%d!������5�ĸ���Ϊ%d\n", num, i);
	system("pause");


}
