#include<stdlib.h>
#include<stdio.h>

void change(int a)//����һ���µı���
{
	a = 8;
}

void changeA(int *p)//����һ��ָ��p,����&a��ַ
{
	*p = 8;//*(��ַ) ���и�ֵ
}
void maintktktk()
{
	int a=10;
	change(a);
	printf("%d\n", a);

	changeA(&a);
	printf("%d\n", a);



	system("pause");
}


void mainkg()
{

	int num = 100;
	int *p = &num;
	//(int *)ָ��,����һ����ַ
	//*p ��int������


	//p��ֵһ����ַ���洢��num�ĵ�ַ
	printf("%x,%x\n", &num, &p);
	//*p������һ����ַ��ȡ����
	*p = 20;

	printf("%d", num);



	system("pause");
}

void mainghjf()
{

	/*int a[100] = { 0 };
	printf("%x", a);*/

	int  num = 100;
	printf("%d,%x\n", num, &num);
	printf("%d", *(&num));

	//& ȡ��ַ
	//* ȡ����ַ�е�����
	system("pause");
}