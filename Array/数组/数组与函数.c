#include<stdio.h>
#include<stdlib.h>

void gogo(int b[10])
{
	printf("%d\n", sizeof(b));

	int c[20];//�ǲ���ʵ�ʴ�С
	printf("%d\n", sizeof(c));

}


void maindfgsg()
{


	int a[10];
	printf("%d\n", sizeof(a));
	gogo(a);//������Ϊ���������ݵ��ǵ�ַ��4���ֽ�
	system("pause");


}
