/* 5.	ĳ��λ�Ŷ��Σ���ʼ�ų�3·�ݶӣ�ĩβ�����2�ˡ���ĳ�5·�ݶӣ�
ĩβ�ֶ����3�ˣ����ĳ�7·�ݶӣ�����û�����������������õ�λ�����ж����ˡ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main5()
{
	int i = 0;
	while (++i)
	{
		if (i%3==2&&i%5==3&&i%7==0)
		{
			printf("%d\n", i);
			break;
		}

	}

	system("pause");
}