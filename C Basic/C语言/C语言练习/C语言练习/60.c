/*
60.	������ָ�������ֶԳƵ�������121��2112���ǻ����������������룺ȡһ����ʮ�����������䵹��������������������ӣ�Ȼ��������ӵĺ͵���������ԭ�����...�� �ظ��˹��̿ɵõ�һ������������ȡ68Ϊ����������������ӿɵû�������
6 8
+ 8 6                �������ݣ�
����������               �� 68
1 5 4                    �� 5
4 5 1                    �� 876
����������               �� 12501
6 0 5
5 0 6
����������
1 1 1 1
ע�⣺
1) �ϻ�ʱ��Ҫ�����ѡ���ݣ���Ϊ���е�������ʮ���������ӻ�δ�õ���������
2) ����һλ����λ��ʮ�ּ򵥣��ʽ���3λ����ʼ�������Ƿ�Ϊ����������5,55,66���������ڴ˴�������������������
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int getBitnum(int num,int count)
{
	if (!num)
	{
		return count;
	}
	else
	{	
		count++;
		return getBitnum(num / 10,count);		
	}

}

int Reverse(int num, int k)
{
	if (!num)
	{
		return k;
	}
	else
	{
		k = k * 10 + num % 10;
		return Reverse(num / 10, k);
	}

}


int endnum(int num)
{
	return  num %(int) pow(10,(getBitnum(num,0)/2));
}


void main60()
{
	int  num = 0;
	printf("������һ������:");
	scanf("%d", &num);
	int renum = Reverse(num, 0);

	while (1)
	{
		if (getBitnum(num, 0)>3)
		{
			if (endnum(num) == endnum(renum))
			{
				printf("������Ϊ:%d\n", num);
				break;
			}
		}
	
		num +=renum;
		renum = Reverse(num, 0);
	}
	system("pause");

}