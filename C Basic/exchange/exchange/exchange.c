#include<stdio.h>

void main()
{

	int x=10, y=20;
	printf("x=%d,y=%d \n",x,y);

	//������ʽһ
	/*
	int temp;//�����м����
	temp=x;
	x = y;
	y = temp;
	printf("x=%d,y=%d\n", x, y);
	*/

	//������ʽ��
	//��ѧ���� �Ӽ���
	/*
	x=x+y;
	y= x - y;//x�����ֵ
	x = x - y;//y�������ֵ
	printf("x=%d,y=%d", x, y);
	*/

	//������ʽ�� �˳���,ԭ����Ӽ�������
	x = x*y;
	y = x / y;
	x = x / y;
	printf("x=%d,y=%d", x, y);
	getchar();
}