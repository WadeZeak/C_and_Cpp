#include<stdlib.h>
#include<stdio.h>

void main()
{
	//ջ�����ϵݼ����������µ���
	void *p1 = malloc(100);
	void *p2 = malloc(200);

	printf("%x,%x\n", &p1,&p2);//��ַ��ջ��
	printf("%x,%x\n",p1, p2);//����

	getchar();
}