#include<stdlib.h>
#include<stdio.h>


//const int *p//�޶���ַ�����ƶ�������ֻ�ܶ�������д
//int const *p


//int * const p//��ַ�����ƶ������ǿɶ���д




//const  int *  const p //�޶���ַ�������ƶ���ֻ�ܶ�������д
//int const * const  p





void main1()
{

	int num = 10;//����
	const int data = num;//const �޶��˳���,���������޸�,ֻ�г�ʼ���ǿ��Ը�ֵ
//	num = 3;
	const int *p = &num;//pָ������ָ��
	//����Ȩ�ޣ�ֻ�ܶ�,�����޸�
	p = &data;
	printf("%d\n", *p);
	system("pause");

}



void main2()
{
	int num = 10;
	int data = 20;
	int const *p = &num;//�޶�д��Ȩ��,�ɶ�����д
	p = &data;
	//*p = 1000;//���ܶԳ�����ֵ
	printf("%d\n", *p);

	system("pause");
}




void main3()
{
	int num = 10;
	int data = 20;
	int * const p = &num;

//	p = &data;//�����޸ĵ�ַ
	*p = data;//�����޸�����

	printf("%d\n", *p);
	system("pause");
}



void main()
{

	int num = 10;
	int data = 20;
	const int *  const p = &data;
	//p = &num;//�����޸ĵ�ַ
	//*p = num;//���ɸ�������


}