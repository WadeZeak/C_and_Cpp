#include<stdlib.h>
#include<stdio.h>

void maingedrg()
{

	//���Ϊ0������λ0
	int a = 9;//0000 1001
	int b = 3;//0000 0011


	//�������ʵ�����ݽ���
	//����Խ��
	a = a^b;//0000 1010  10
	b = b^a;//0000 1001  9
	a = a^b;//0000 0011  3
	printf("a=%d,b=%d\n",a,b );


	//����������
	//a=a+b;
	//b=a-b;
	//a=a-b;
	//�˳�������


	system("pause");
}