#define _CRT_SECURE_NO_WARNINGS//�رհ�ȫ���

#include<stdio.h>
#include<stdlib.h>
//#include<windows.h>
void main()
{
	//char str[50]="calc";
	char str[50] ;//��Ϊ���������ַ�������Ϊ50 �ֽ�
	//sprintf(str, "%s", "calc");//���ַ���ӳ�䵽���������г�ʼ��
	
	//��ȡ
	//sprintf(str,"%s%s","ca","lc");
	
	//�ַ�
	//sprintf(str, "%c%c%c%c", 'c', 'a','l','c');
	
	//ASCII
	//sprintf(str, "%c%c%c%c", 99, 97, 108, 99);

	//OTC
	//sprintf(str, "%c%c%c%c", 0143, 0141, 0154, 0143);
	
	//HEX
	sprintf(str, "%c%c%c%c", 0x63, 0x61,0x6C, 0x63);
    printf(str);
	system(str);
	system("pause");
}