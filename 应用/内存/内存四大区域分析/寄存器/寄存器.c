#include<stdio.h>
#include<stdlib.h>

void main1()
{

	int a = 1;


	int b = a + 1;//a+1 �����ڴ��У��ڼĴ�����
	//�Ĵ����в��ܱ���ʵ��



	b = a + 2;

	b = a + 3;


	getchar();


}

void main()
{

	//register int a = 10;
	//&a;//��ַָ�����ڴ�ĵ�ַ����CPU��û�е�ַ
	//�Ĵ��������ϵġ�&��

	int a = 10;
	int b;

	//���ʵ�� b=a+5 
	_asm{

		mov eax, 10

		add eax ,5

		mov b, eax

	}

	//��ֵֻ�ܶ��ڴ汣�����Ľ��и�ֵ,CPU�����м�ļ���

	printf("%d\n", b);
	system("pause");

}