#include<stdlib.h>
#include<stdio.h>


void main2()
{
	//ջ�Ĵ�С����������
	//�޷�ʹ�ýϴ��ڴ�
	//����֮�����̻���
	//
	int a[1024*300];//1M=1024*1024
	//Stack overflow
	//�޸�ջ��С  ����-> ������->ϵͳ->��ջ������С Ĭ�� 1M
	//�޸�Ϊ 2M
	getchar();
}

void main()
{

	while (1)//ջ��,һֱ�����ͷ��ڴ棬�Ƚ����CPU
	{

		double db[1024 * 200];//���CPU
		void *p = malloc(1024 * 1024 * 100);//����ڴ�
	}





}