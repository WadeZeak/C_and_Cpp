#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
void main1()
{

	//system("calc");

	//ShellExecuteA(0, "open", "calc", 0, 0, 1);

	STARTUPINFO si = { sizeof(si) };//������Ϣ
	PROCESS_INFORMATION pi;//���������н��̵���Ϣ
	si.dwFlags = STARTF_USESHOWWINDOW;//��ʾ��������
	si.wShowWindow = 1;//1��ʾ��ʾ�������̵Ĵ���
	wchar_t cmdline[] = L"\"E:\\progra~1\\Netease\CloudMusic\\cloudmusic.exe\"";
	CreateProcessW(NULL,cmdline,NULL,NULL,0,CREATE_NEW_CONSOLE,NULL,NULL,&si,&pi);
}
