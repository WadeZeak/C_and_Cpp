#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>





//�������� 
void main5()
{
	float RMB;
	scanf("%f", &RMB);
	printf("\n������%.2fԪ",RMB);
	float changeRMB=(int)(RMB*10.0f+0.4f)/10.0f;
	printf("\n��������Ľ��%.2f", changeRMB);
	RMB > changeRMB ? printf("\n����͵%f", RMB - changeRMB) : printf("\nԭ�ⲻ��");
	system("pause");
}