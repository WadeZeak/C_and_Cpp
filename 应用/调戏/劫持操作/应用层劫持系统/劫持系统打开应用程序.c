#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<string.h>

#include"detours.h"//����ͷ�ļ�
#pragma comment(lib, "detours.lib")//����ʹ�þ�̬��



//��������ָ���ַ
BOOL (WINAPI *POLDCreateProcessW)
(
 LPCWSTR lpApplicationName,
 LPWSTR lpCommandLine,
 LPSECURITY_ATTRIBUTES lpProcessAttributes,
 LPSECURITY_ATTRIBUTES lpThreadAttributes,
 BOOL bInheritHandles,
 DWORD dwCreationFlags,
 LPVOID lpEnvironment,
 LPCWSTR lpCurrentDirectory,
 LPSTARTUPINFOW lpStartupInfo,
 LPPROCESS_INFORMATION lpProcessInformation
)=CreateProcessW;


BOOL  NEWCreateProcessW(
	LPCWSTR lpApplicationName,
	LPWSTR lpCommandLine,
	LPSECURITY_ATTRIBUTES lpProcessAttributes,
	LPSECURITY_ATTRIBUTES lpThreadAttributes,
	BOOL bInheritHandles,
	DWORD dwCreationFlags,
	LPVOID lpEnvironment,
	LPCWSTR lpCurrentDirectory,
	LPSTARTUPINFOW lpStartupInfo,
	LPPROCESS_INFORMATION lpProcessInformation
	)
{
	MessageBoxA(0, "��ı�����û�������ܴ�������", "����", 0);
	return 0;
};




//��ʼ����
void Hook()
{
	DetourRestoreAfterWith();//�ָ�ԭ�е�״̬,����
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳� 
	//�������������ε���DetoursAttach������hook�������
	DetourAttach((void **)&POLDCreateProcessW, NEWCreateProcessW);//ʵ�����غ���
	//(void **)OldMessageBoxW �ı亯��ָ������
	DetourTransactionCommit();//������Ч

}

//ȡ������
void UnHook()
{
	DetourTransactionBegin();//��ʼ����
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳�
	//�������������ε���DetourDetach,���������������Hook
	DetourDetach((void **)&POLDCreateProcessW, NEWCreateProcessW);//�������غ���
	DetourTransactionCommit();//������Ч


}
_declspec(dllexport) void go()
{
	Hook();
	int i = 0;

	while (1)
	{
		if (i == 120)
		{
		
			break;
			UnHook();
		}
		Sleep(1000);
			i++;
	}



}