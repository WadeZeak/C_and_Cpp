#include<stdlib.h>
#include<stdio.h>

char a = 'A';
char b = 'B';
char c = 'C';


//������������ݣ���ָ��������������ĵ�ַ
//�����ָ�룬����Ҫ����ָ�뱣��ָ��ĵ�ַ

void changeP(char *p)//�����µ��ڴ��ַ
{

	p = &c;


}
void changepp(char **p)
{


	*p = &c;//*p �Գ�char *
	**p = 'd';//**p �Գ� char

}

void main3564()
{
	

	char *p = &a;//p�ĵ�ַΪa�ĵ�ַ
	printf("����Ϊ%c,%x\n", *p);
	p = &b;
	printf("����Ϊ%c,%x\n", *p);
	changeP(p);
	printf("����Ϊ%c,%x\n", *p);
	changepp(&p);
	printf("����Ϊ%c,%x\n", *p);

	system("pause");
}