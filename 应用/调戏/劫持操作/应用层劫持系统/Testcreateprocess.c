#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
void main1()
{

	//system("calc");

	//ShellExecuteA(0, "open", "calc", 0, 0, 1);

	STARTUPINFO si = { sizeof(si) };//启动信息
	PROCESS_INFORMATION pi;//保存了所有进程的信息
	si.dwFlags = STARTF_USESHOWWINDOW;//表示建立窗口
	si.wShowWindow = 1;//1表示显示创建进程的窗口
	wchar_t cmdline[] = L"\"E:\\progra~1\\Netease\CloudMusic\\cloudmusic.exe\"";
	CreateProcessW(NULL,cmdline,NULL,NULL,0,CREATE_NEW_CONSOLE,NULL,NULL,&si,&pi);
}
