#include<stdio.h>
#include<stdlib.h>


//C���Բ��������ֵ����ֵ���Զ�ת��
void main()
{

	//-1 ? system("calc") : system("mspaint");

	int numA = 5 < 3 ? 10 : 20;
	printf("%d\n", numA);

	int a = 3;
	//(a = 3) = 5;//��C�����в��Ϸ�����C++�кϷ�
	////a=3 ��ֵ,��������в���

	int b = 7;
	//(a > b ? a : b) = 10;//��C�����в��Ϸ�����C++�кϷ�
	
	//(++a)++;//��C�����в��Ϸ�����C++�кϷ�


	register int num = 10;//�Ĵ�������
	//C���ԼĴ�����������ȡ��ַ
	//printf("%p\n", &num);

	system("pause");
}



//C���Ե�ȫ�ֱ����������붨��Ĳ��
//C�����������
//���¾�Ϊ����
int a;
int a;
int a;
int a;
int a;
int a;
//C���Եľ�̬ȫ�ֱ����������붨��Ĳ��
static int b;
static int b;



//���� Ӧ�����βα�
//void test(int x, double, char)//����C++������
//{
//
//
//}