#include<stdlib.h>
#include<stdio.h>



int num= 200;//��̬��
//��̬����ջ������
//�ھ�̬������򹲴�������̬�������ڴ�������main����
//ջ�����������գ������ͷ�



void test()
{
	int data = 100;//ջ��

	printf("%p,%p\n", &num, &data);

	num = 101;


	data = 35;

	

}


void main()
{

	test();

	printf("\n\n");


	test();

	getchar();


}