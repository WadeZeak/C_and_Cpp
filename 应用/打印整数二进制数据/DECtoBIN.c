#define _CRT_SECURE_NO_WARNINGS 

#include<stdlib.h>
#include<stdio.h>


//����
void main1()
{

	 
	int num;
	scanf("%d", &num);
	printf("num=%d,&num=%p\n", num,&num);
	int data = 1 << 31;//����һ������������
	for (int i = 1; i <= 32; i++)
	{

		if ((data&num)==0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		num <<= 1;
		if (i % 4 == 0)
		{
			printf("   ");
		}
	
	}

	system("pause");
}


//��ԭ��
void main()
{


	int num;
	scanf("%d", &num);
	printf("num=%d,&num=%p\n", num, &num);
	int data = 1 << 31;//����һ������������

	//������ԭ��
	if (num < 0)
	{
		num = ~num + 1;//ȷ������λ
		num = num | data;//ȷ������λ 1
	}


	
	for (int i = 1; i <= 32; i++)
	{

		if ((data&num) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		num <<= 1;
		if (i % 4 == 0)
		{
			printf("   ");
		}

	}

	system("pause");
}