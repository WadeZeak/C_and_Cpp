#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


#include"detours.h"//����ͷ�ļ�
#pragma comment(lib, "detours.lib")//����ʹ�þ�̬��

int(*poldsystem)(const char * _Command) = system;

//��ֹ
int  newsystem(const char * _Command)
{

	printf("%s", _Command);
	return 0;
};


void Hook()
{
	DetourRestoreAfterWith();//�ָ�ԭ�е�״̬,����
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳� 
	//�������������ε���DetoursAttach������hook�������
	DetourAttach((void **)&poldsystem, newsystem);//ʵ�����غ���
	//(void **)OldMessageBoxW �ı亯��ָ������
	DetourTransactionCommit();//������Ч

}


_declspec(dllexport) void go()
{
	//MessageBoxA(0, "��ֹ����", "��ʾ", 0);
	Hook();


}