#include<stdio.h>
#include<stdlib.h>
#include<limits.h>



void main5()
{
	//win 32 ƽ̨��long double �ķ�Χ��double һ��
	printf("%d",sizeof(long double));
}




//%d - int ; %u - unsigned int;%c - char;%s -string
//%f- float %lf-double ;long long -%f 

void main3()
{
	//�޷���Խ�磬��ǰ��λ
	//�з���Խ�磬����
	//unsigned long long num1 = UINT_MAX;
	//printf("%u",num1);
// long long  num2= UINT_MAX;
	//printf("%d", (float)num2);

	printf("%f,%f", (float)LLONG_MAX, (float)LLONG_MIN);//��������ת��
	printf("\n%d,%d", LLONG_MAX, LLONG_MIN);//��ӡ����

	long long num3 = UINT_MAX;//ʹ��float��ӡlong long ���͵�
	printf("%d,%u",num3,num3 );
	getchar();
}

void main2()
{
	printf("%d\n",sizeof(long long));
	float num = 2147483647.0+1 ;
	printf("%f",num);
	getchar();

}