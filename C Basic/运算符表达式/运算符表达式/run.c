#include<stdio.h>

void main1()
{
	int num = 10;
	num = num+5;
	//printf("%d", num);

	//����������
	_asm
	{
	mov eax,num //eax�Ǵ洢������num��ֵ�浽eax��

	add eax,5 //eax + 5

	mov num,eax//��eax��ֵ��ֵ��num
	}
	printf("\n%d", num);
	getchar();


}