#include <stdio.h>
#include<stdlib.h>

#define X 10 //define �ڲ��ⲿ�������޸�

const int num = 10;//const α�����������޸��ڴ�,�����ڲ������޸�

void main()
{

	//printf("%x",&X);//��������ȡ��ַ
	printf("%x", &num);

	
	printf("%d",num);
	getchar();
}