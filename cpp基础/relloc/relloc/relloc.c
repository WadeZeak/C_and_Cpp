#include<stdio.h>
#include<stdlib.h>



void main1()
{
	int *p = (int *)calloc(10, sizeof(int));//�����ڴ� calloc Ĭ��Ϊvoid* ����
	printf("%p\n", p);
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;//*(p+i)�ȼ���p[i]
	}
	int *pnew = (int *)realloc(p, 100);//�µ��ڴ��С100Byte,25��Ԫ��

	//relloc
	//��һ�����:�������ڴ����ʹ�ã�ֱ����չ�ڴ�
	//�ڶ������,�������ڴ汻��ռ��,�޷�ʹ�ã����¿����ڴ棬����ԭ�������ݣ�֮���ͷ�ԭ�����ڴ�

	printf("%p\n", pnew);

	for (int i = 10; i < 25; i++)
	{
		*(pnew + i) = i;
	}
	system("pause");
}