
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#include"detours.h"//����ͷ�ļ�
#pragma comment(lib, "detours.lib")//����ʹ�þ�̬��


int  (*poldsystem)( const char * _Command)=system;

//��ֹ
int  newsystem(const char * _Command)
{
	
	printf("%s", _Command);
	return 0;
};


//����
//��ִֹ��tasklist
int  newsystemA(const char * _Command)
{

	char *p=strstr(_Command,"tasklist");
	if (p == NULL)
	{
		poldsystem(_Command);
	
	}
	else
	{
		printf("%s��ִֹ��", _Command);
		return 0;

	}
	
};

//��ʼ����
void Hook()
{
	DetourRestoreAfterWith();//�ָ�ԭ�е�״̬,����
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳� 
	//�������������ε���DetoursAttach������hook�������
	DetourAttach((void **)&poldsystem, newsystemA);//ʵ�����غ���
	//(void **)OldMessageBoxW �ı亯��ָ������
	DetourTransactionCommit();//������Ч

}


//ȡ������ 
void UnHook()
{
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳�
	//�������������ε���DetourDetach,���������������Hook
	DetourDetach((void **)&poldsystem, newsystemA);//�������غ���	
	DetourTransactionCommit();//������Ч


}



void main()
{
	system("calc");
	Hook();
	system("calc");
	system("tasklist");
	getchar();

}