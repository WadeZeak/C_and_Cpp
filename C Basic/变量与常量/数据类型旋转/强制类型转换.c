#include<stdio.h>

// +,-,*,/��= (��ֵ) �Զ�ת����������
//printf()�޷��Զ�ת��


void main()
{
	printf("%c",65.0);//�ַ��� 0 ����NULL
	printf("\n%c", (char)65.0);
	getchar();
}



void main5()
{
	//��ֵ���Ż��Զ�������������ת��
	int num = 3.6;
	int x = 'A';
	printf("%d,%d",sizeof(num),sizeof(3.6) );
	printf("\n%d", num);
	printf("\n%d", x);//ת��ΪASCII��
	getchar();
}