#include<stdlib.h>
#include<stdio.h>


void main1()
{


	for (int  i = 0; i < 10; i++)
	{

		int a = 10;//ʹ����ͻ����ڴ�
		static int b = 20;//��̬�ֲ�����������򹲴���,����ʱ�ͳ�ʼ��
		a = a + 1;
		b = b + 1;
		printf("a=%d,b=%d\n", a, b);
	}

	system("pause");

}

void main2()
{


	for (int i = 1; i <= 100; i++)
	{
		static int sum = 0;//static ֻ��ʼ��һ��

		sum += i;
		printf("%d\n", sum);
	}
	system("pause");
}