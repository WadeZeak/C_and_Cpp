#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<Windows.h>


//������̵�ģʽ
//�����������Ҫ������
//Ȩ�޹�������,ʵ�ֱȽ��鷳


void OpenPro(const char *exe,int mode)//�򿪽��� mode ģʽ
{
	ShellExecuteA(0, "open", exe, 0, 0, mode);
}


void AllProcess()
{
	system("tasklist");
}


void CloseProcessbByName(const char *name)//ͨ�����ƹر�Ӧ��
{
	char cmdstr[100] = { 0 };//Ԥ��������
	sprintf(cmdstr, "taskkill /f /im %s", name);//ƴ�ӳ�����
	system(cmdstr);
}


void CloseProcessbByPID(const int pid)//ͨ�����̺�(PID)�ر�Ӧ��
{
	char cmdstr[100] = { 0 };//Ԥ��������
	sprintf(cmdstr, "taskkill /pid  %d ", pid);
	system(cmdstr);
}



void main1()
{

	AllProcess();
	OpenPro("notepad", 1);
	AllProcess();
	Sleep(2000);
	//CloseProcessbByName("notepad.exe");

	int pid;
	scanf("%d", &pid);
	CloseProcessbByPID(pid);

	system("pasue");
}


//���� a+bi 
struct Complex //����
{
	int a;
	int b;
};


struct Complex addComplex(struct Complex complex1, struct Complex complex2)
{
	
	struct Complex complex3;
	complex3.a = complex1.a + complex2.a;
	complex3.b = complex1.b + complex2.b;

	return complex3;

}



void main2()
{

	//���ݿ�����㱻���ʣ���㱻�޸�
	struct Complex complex1 = { 3, 4 };
	struct Complex complex2 = { 30, 40 };
	//complex1.a = 100;//�޸�����
	struct Complex complex3 = addComplex(complex1, complex2);;
	printf("%d+%di", complex3.a, complex3.b);
	getchar();
}