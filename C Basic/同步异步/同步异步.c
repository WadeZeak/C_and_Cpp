#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void main1()
{

	while (-1)//������ѭ��
	{
		//system("calc");
		ShellExecuteA(0,"open", "calc", 0, 0, 1);
		//��1������:0 ϵͳ����
 		//��2������: open ��
		//��3������:ִ�е�����
		//��3.��4������:Ĭ��
		//���һ������:0 ���ش��� 1���� 3��� 6��С��
		Sleep(2000);
	}

}