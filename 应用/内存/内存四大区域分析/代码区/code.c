#include<stdlib.h>
#include<stdio.h>

//��������ڴ�����
void gogo()
{
	printf("%d,%d\n", 10, 20);


}

void main1()
{


	printf("%x\n", gogo);//��������ź����ĵ�ַ
	//������ֻ�ܶ�����д
	gogo();//ֱ�ӵ���
	void(*p)()= gogo;//ָ�뺯��
	p();//��ӵ���
	system("pause");
}


void main()
{

	char *p = "ABCDEFGH";//p�洢�����ַ����ĵ�ַ
	//�����ַ����ڴ�������ֻ�ܶ�
	printf("%d,%d\n", sizeof(p), sizeof("ABCDEFH"));
	printf("%p\n", p);//�����ַ�����ַ
	printf("%p\n",&p);//�鿴ָ������ĵ�ַ

	getchar();


}