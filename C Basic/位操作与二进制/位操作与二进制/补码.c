#include<stdio.h>
#include<stdlib.h>


void main3()
{
	//printf() �������õĸ�ʽ���д�ӡ������������͵�ת��
	//��ʽ������Ҫƥ��
	printf("%d\n", 10.3);
	printf("%f\n", 10);


	system("pause");

}


void main4()
{

	int num = 100;
	printf("%p\n", &num);//���ղ�ͬ�ķ�ʽ�������ͻ��������ͬ�Ľ��

	system("pause");
}

void main5()
{

	char ch = 1,ch1='1';//�ַ�����
	printf("%d,%d\n", ch,ch1);
	system("pause");
}

void main6()
{
	//������ʱ�����������͡����ȣ������й�
	unsigned short num = 65535;
	printf("%d\n", num);
	system("pause");


}


void main7()
{

	//����  ������洢�ķ�ʽ
	short num = -1;
	printf("%d\n", num);
	printf("%u\n", num);

	system("pause");


}