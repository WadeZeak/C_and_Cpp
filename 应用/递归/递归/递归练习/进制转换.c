#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>





void  DECtoBIN(int num)//������ת��Ϊʮ����
{
	if (num==0)
	{
		return ;

	}
	else
	{
		DECtoBIN(num / 2);//�������
		int i = num % 2;
		printf("%d", i);
		//DECtoBIN(num / 2);//˳�����
	}
}



void main()
{
	int num;
	scanf("%d", &num);
	DECtoBIN(num);
	system("pause");
}