/*
���ܣ�����˵��400, 401, 402, ...499��Щ����4������ֹ�����112�Σ��������ж���
��˵���Ƿ���ȷ������ȷ���ӡ��'YES'�������ӡ��'NO'��4�ĳ��ִ���

*/

#include<stdlib.h>
#include<stdio.h>

void main17()
{
	int num = 400;
	int count = 0;
	while (num<500)
	{
		if ( num % 10 == 4)
			count++;
		if ((num / 10) % 10 == 4  )
		{
			count++;
		}
		count++;
		num++;

	}
	if (count == 112)
		printf("Yes\n");
	else
		printf("No,%d\n",count);
	system("pause");
	
}