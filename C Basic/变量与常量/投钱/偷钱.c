#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>





//五舍六入 
void main5()
{
	float RMB;
	scanf("%f", &RMB);
	printf("\n现在有%.2f元",RMB);
	float changeRMB=(int)(RMB*10.0f+0.4f)/10.0f;
	printf("\n五舍六入的结果%.2f", changeRMB);
	RMB > changeRMB ? printf("\n可以偷%f", RMB - changeRMB) : printf("\n原封不动");
	system("pause");
}