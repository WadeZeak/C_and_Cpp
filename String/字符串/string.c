#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


void mainearte()
{

	char *p;
	p = "tasklist";//p�Ǳ���
	system(p);
	p = "notepad";
	system(p);

	system("pause");


}

void mainthrh()
{
	//
	//char str[10];
	//str = "tasklist";//��ʼ����������

}
void mainzz()
{
	
	char *p = malloc(sizeof(char)*20);//ָ�����ָ��һƬ�ڴ�
	printf("%x\n", p);
	scanf("%s", p);
	printf("%s", p);
	system(p);
	system("pause");
}



void main76()
{
	char *p= "tasklost";//tasklost ���� �������޸�
	char *t;
	t = p + 5;
	*t = 'i';//д��λ�� 0x******** ʱ�������ʳ�ͻ��
	system(p);
	system("pause");

}




//�޸��ַ����е��ַ�
void main768()
{
	char str[10] = "tasklost";
	char *p =str ;//ָ��ָ����һƬ�ڴ�
	p = p + 5;
	*p = 'i';

	printf("%s", str);
	system(str);
	system("pause");

}



void maing()
{

	char str[4][10] = { { "notepad" },
						{ "mspaint" },
						{"calc" },
						{ "ipconfig" }};

	char(*p)[10] = str;//ָ���ά�����ָ��
	printf("%x,%x\n", &p, *p);//*p=str[0]
	for (int i = 0; i < 4; i++)
	{
		system(*(p+i));//�ַ���Ԫ�ص��׵�ַ
	}

	
	system("pause");

}