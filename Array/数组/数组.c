#include<stdlib.h>
#include<stdio.h>
#define N 20

void main1()
{

	int p[N];
	//printf("%x", &N); define����ĳ��������ڵ�ַ���ɱ��������ڳ�������û�е�ַ�����޸�
	
	const int num=10;
	printf("%x", &num);	
	/*
	int a[num]; ������ʹ��const ����ĳ������������С
	const �޶��Ĵ��벻���޸ģ����ڴ���ʵ�壬���ڴ����ǿɱ��
	����ǿ��ȥ����������
	*/
	getchar();


}

void main55()
{
	//����Խ�粻����
	//��Ϊ�����ⲿ���ڴ�ռ䲻ȷ���Ƿ���з���Ȩ�ޣ����Խ����ʣ�������ܱ���

	int a[10];

	for (int i = 0; i < 160; i++)
	{
 		a[i] = i+1;
	}
	getchar();
}

void mainfgh()
{
	//  \0ֻ�������ַ���
	int  num[5] = {1,2,3,4,5};//�������ڴ�����������
	printf("%x\n", &num);
	printf("%d\n", sizeof(num));//�����С
	printf("%d\n", sizeof(num) / sizeof(int));//Ԫ�ظ���

	for (int i = 0; i < 5; i++)
	{
		printf("num[%d]=%d,%x\n", i, num[i],&num[i]);
	}

	system("pause");


}