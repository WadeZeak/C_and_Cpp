#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<process.h>


struct Mystruct
{
	int num;
	double x;

}test = {0,0};





void run(void *p)
{
	int *px = (int *)p;//ָ������ת��
	char str[100] = { 0 };
	sprintf(str,"�߳�%d����\n", *px);
	MessageBoxA(0, str, "���߳�", 0);
}






void mainQQ()
{

	//ͬ��
	//����
	for (int  i = 0; i < 5; i++)
	{
		//run(NULL);
		_beginthread(run, 0, &i);
		Sleep(10);
	}
//_beginthread()
	//��1������:��ʼ��ַ
	//��2������:ջ����С 0 Ĭ��,1M
	//��3������:��Ӧ�Ĳ�����ַ


	system("pause");

}


void main11()
{
	//�谭ģʽ
	//���߳�  
	//һ��һ���򿪶Ի���
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);
	MessageBoxA(0, "123456789", "xxx", 0);

	//�ϵ������д���

	system("pause");
}