#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



void main10()
{
	printf("%d%d%d", 1);
	char a = '��';
	
	printf("\n%d", sizeof(a));
	printf("\n%c", a);//���Ϊ��

	//�ַ�������Ԥ����������4�ֽ�
	printf("\n%d", sizeof('abcd'));

	wchar_t ch = '��';//���ַ�
	getchar();

}

void main789()
{
	int RMB=1;
	scanf("�����Q���Ǯ%d", &RMB);//�����������scanf�е�����һ�£�����������ֵ


	printf("%d", RMB);
	system("pause");

}



void main987()
{

	int num;
	printf("%x\n", &num);
	scanf("%d", &num);
	num > 10000 ? printf("You Win!!") : printf("You Lose");
	system("pause");


}