#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void main867()
{
	//一步一步执行

	SetCursorPos(40, 40);
	Sleep(200);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	Sleep(5000);
	system("taskkill /f /im mspaint.exe");
	system("pause");

}