#include<stdio.h>
#include<stdlib.h>

#define N 10 //CPU�в�����10->1010,����ȡ��ַ

const int num = 10;
//const α�������޶��������������޸�


void main()
{
	//&N;//N����ȡ��ַ
	const int a = 100;//const ����Ա�������ֱ�Ӹ�ֵ�޸�
	int *p = &a;//����ָ��ָ��const int 
	int *p1 = p;
	*p1 = 200;

	printf("%d\n", a);

	getchar();
}