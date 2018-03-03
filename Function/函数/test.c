#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>//µÚÈý·½¿â




void mainsdg()
{

	SetCursorPos(40, 40);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0,0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);	
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	Sleep(2000);
	keybd_event(VK_MENU,0, 0, 0);
	keybd_event(VK_F4, 0, 0, 0);
	keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_F4, 0, KEYEVENTF_KEYUP, 0);
}