#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include<stdio.h>


//'0'  0
void main()
{
	//�ַ�0��ASCII���48���ַ����0
	printf("�ַ����0=%d,�ַ�0�ַ�=%c", '0', '0');
	printf("\n����0���%d,����0�ַ�%c",0,0);//�ַ����NULL

	printf("\n%d",'0'-0);
	printf("\n%d", '1' - 1);//�ַ���ת��
	//�������0�ı���48
	system("pause");

}

void main10()
{
	char ch = 'a';
	printf("%d,%c", ch, ch+5);//%d ��ӡascii�룬%c��ӡ�ַ�
	system("pause");

}

void main6()
{
	char str[30];
	sprintf(str, "%c%c%c%c", 67,65, 76, 67);
	//0-48,a-65,A-97
	system(str);

}