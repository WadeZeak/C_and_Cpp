#include<stdio.h>
 
void main3()
{
	//���ֽڵ���������ֽڵ����ݵ�����(+,-,*,/)ʱ���Զ�����ֽ���������ת��
	char ch = 'A';//1Byte
	int num =1;//4Byte
	printf("%d,%d,%d",sizeof(ch),sizeof(num),sizeof(ch+num));//1,4,4
	double db = 1.0;
	printf("\n%d,%d,%d", sizeof(num), sizeof(db), sizeof(db + num));//4,8,8
	printf("\n%d,%d,%d", sizeof(ch), sizeof(db), sizeof(db + ch));//1,8,8
	getchar();

}



void main2()
{

	//����������=����
	//������ʵ��=ʵ��
	//ʵ��ת����������С����������
	int num = 3 / 2;//0
	float f1 = 1/ 2.0;
	float f2 = 3 / 2;
	printf("%d,%f",num,num);//1;����ʧ�� 0.000000
	printf("\n%f,%d", f1, f1);//0.5�� ����ʧ�� 0
	printf("\n%f,%d", f2, f2);
	getchar();
}



void main1()
{
	//printf()����ʲô���ͣ�����ʧ�ܾ���0
	//printf("%d\n", 1.0);//0
	//printf("%f",1);//0.000000
	//��������ת��
	printf("%d\n", (int)1.0);
	printf("%f",(double)1);
	getchar();

}