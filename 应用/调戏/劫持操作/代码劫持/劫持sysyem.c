#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"detours.h"//����ͷ�ļ�
#pragma comment(lib, "detours.lib")//����ʹ�þ�̬��



static int  (*Oldsystem)(const char * _Command)=system;//���庯��ָ�룬����ԭ�������ĵ�ַ
///����ָ�� ��ԭ���ĺ������ڵ�������*��


static int Newsystem(const char * _Command)//�µĺ���
{


	return 0;

}



//��ʼ����
void HookA()
{
	DetourRestoreAfterWith();//�ָ�ԭ�е�״̬,����
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳� 
	//�������������ε���DetoursAttach������hook�������
	DetourAttach((void **)&Oldsystem, Newsystem);//ʵ�����غ���
	//(void **)OldMessageBoxW �ı亯��ָ������
	DetourTransactionCommit();//������Ч

}


//ȡ������
void UnHookA()
{
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳�
	//�������������ε���DetourDetach,���������������Hook
//	printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourDetach((void **)&Oldsystem, Newsystem);//�������غ���
	//printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourTransactionCommit();//������Ч


}

void main()
{
	//system() ���ֽں���

	system("notepad");
	printf("%p,%p,%p\n", system, Oldsystem, Newsystem);
	HookA();
	printf("%p,%p,%p\n", system, Oldsystem, Newsystem);
	system("calc");
	getchar();


}