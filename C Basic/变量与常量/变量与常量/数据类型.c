#include<stdio.h>
#include<stdlib.h>

void main1()
{
	//��������ָ���˶�������ν���
	int num1 = 10;
	float num2 = 10.0;
	printf("%x,%x\n", &num1, &num2);

	printf("%f,%x\n", num1, num1);//ͬһ��������һ�ν�������֮��Ľ�����һֱ����

	printf("%x,%f\n", num2, num2);
	

	getchar();
}