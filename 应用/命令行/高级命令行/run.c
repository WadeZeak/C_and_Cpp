#include<stdlib.h>

void run1()
{
	system(" start notepad"); //���У�ͬʱִ��
	//system("notepad");//ִ��������Ժ���ִ����һ�д���
	system(" start calc");
	system(" start mspaint");
}

void run2()
{
	system("notepad");
	system("calc");
	system("mspaint");
}


void run3()
{
	system("shutdown -s -t 600");//�ػ��ƻ���600S��10���ӣ���ػ�
	system("pause");
	system("shutdown -a");//ȡ���ػ��ƻ�
}


void main()
{
	run3();
}