//�ٳ�ʧ��
//���ڿ��ֽڶ��ֽڵ�ԭ��,Hook()����ִ��ʧ�� �˴�Ϊunicode����

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"detours.h"//����ͷ�ļ�
#pragma comment(lib, "detours.lib")//����ʹ�þ�̬��

//��������
//static int WINAPI MessageBoxW(//��̬����ֹӰ��������Դ�ļ�
//HWND hWnd,
// LPCSTR lpText,
// LPCSTR lpCaption,
// UINT uType);
//WINAPI ����

//���庯��ָ��
static int (WINAPI *OldMessageBoxW)(
HWND hWnd,
 LPCSTR lpText,
 LPCSTR lpCaption,
 UINT uType)=MessageBoxW;//����MessageBoxW��ַ



int WINAPI NewMessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
{

	printf("ִ����һ��\n");
	return 0;

};

//��ʼ����
void Hook()
{
	DetourRestoreAfterWith();//�ָ�ԭ�е�״̬,����
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳� 
	//�������������ε���DetoursAttach������hook�������
	DetourAttach((void **)&
		
		OldMessageBoxW, NewMessageBoxW);//ʵ�����غ���
	//(void **)OldMessageBoxW �ı亯��ָ������
	DetourTransactionCommit();//������Ч

}


//ȡ������
void UnHook()
{
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳�
	//�������������ε���DetourDetach,���������������Hook
	printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourDetach((void **)&OldMessageBoxW, NewMessageBoxW);//�������غ���
	printf("%p,%p\n", OldMessageBoxW, NewMessageBoxW);
	DetourTransactionCommit();//������Ч


}

void main1()//�����������˺�����ڵ�ĵ�ַ


{
	//printf("%p\n", main);
	printf("%p\n", MessageBoxW);

	MessageBoxW(0,L"�����յ���1", L"��ʵѧC������", 0);
	Hook();//���ڿ��ֽڶ��ֽڵ�ԭ��,����ִ��ʧ�� �˴�Ϊunicode����
	printf("%p\n", MessageBoxW);
	MessageBoxW(0, L"�����յ���2", L"��ʵѧC������", 0);
	system("pause");
}