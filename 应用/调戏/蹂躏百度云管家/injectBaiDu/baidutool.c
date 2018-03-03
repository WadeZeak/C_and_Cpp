#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void openbaidu()
{
	ShellExecuteA(0, "open", "http://www.baidu.com", 0, 0, 3);


}

void closebaidu()
{

	system("taskkill  /f  /im MicrosoftEdge.exe");

}

void search()
{


	keybd_event('X', 0, 0, 0);
	keybd_event('X', 0, 2, 0);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	keybd_event('H', 0, 0, 0);
	keybd_event('H', 0, 2, 0);
	keybd_event('U', 0, 0, 0);
	keybd_event('U', 0, 2, 0);
	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	Sleep(200);
	keybd_event(0x0d, 0, 0, 0);//0x0d »Ø³µ VK_RETURN
	keybd_event(0x0d, 0, 2, 0);

}

void click()
{
	SetCursorPos(200, 300);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0,0);
	
	//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);



}

void main()
{
	openbaidu();
	Sleep(2000);
	search();
	Sleep(2000);
	click();
	Sleep(1000);
	closebaidu();

}