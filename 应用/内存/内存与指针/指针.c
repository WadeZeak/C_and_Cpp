#include<stdlib.h>
#include<stdio.h>


void main13()
{

	int a = 5;
	int b = 8;
	int *p = &b;
	int *(*pp) = &p;//**p �Գ�int,���Ե���int������
	//int * ��ָ��
	//��������
	**pp = 1;
	int **p1=&p;
	*p1= &a;
	*(*p1) = 100;
	printf("%d\n", *pp);
	printf("&pp=%x,pp=%x,&(*pp)=%x,*pp=%x", &pp, pp, &(*pp), *pp);

	system("pause");


}





void mainrgegere()
{

	int a = 10;
	int b = 20;
	int *p = &a;
	printf("*p=%d,a=%d\n", *p, a);
	printf("p=%x,&a=%x\n", p, &a);
	printf("&p=%x\n", &p);
	*p = b;
	printf("%d", *p);


	system("pause");
}