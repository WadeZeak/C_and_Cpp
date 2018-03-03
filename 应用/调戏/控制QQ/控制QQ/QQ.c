#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void OpenQQ()
{

	ShellExecuteA(0,"open","\"E://Program Files//Tencent//QQ//Bin//QQScLauncher.exe\"",0,0,1);

}


void CloseQQ()
{
	system("taskkill /f /im QQ.exe");

}





void ShowQQ()
{
	HWND WIN = FindWindowA("TXGuiFoundation", "QQ");//指针类型的窗口结构体
	if (WIN != NULL)
	{

		ShowWindow(WIN, SW_SHOW);
	}

}



void HideQQ()
{

	HWND WIN = FindWindowA("TXGuiFoundation", "QQ");//窗口结构体类型的指针
	if (WIN != NULL)
	{

		ShowWindow(WIN, SW_HIDE);
	}

}


void Rebound()
{


	HWND WIN = FindWindowA("TXGuiFoundation", "QQ2013");
	if (WIN != NULL)
	{
		RECT rectWIN;//区域 ,left ,right ,top,bottom
		GetWindowRect(WIN, &rectWIN);//获取区域
		SetWindowPos(WIN, NULL, rectWIN.left, rectWIN.top - 150, 300, 300, 1);

	}


}



void MoveDown()
{

	HWND WIN = FindWindowA("TXGuiFoundation", "QQ2013");
	if (WIN != NULL)
	{
		RECT rectWIN;//区域 ,left ,right ,top,bottom
		GetWindowRect(WIN, &rectWIN);//获取区域
		SetWindowPos(WIN, NULL, rectWIN.left, rectWIN.top + 150, 300, 300, 1);

	}

}



void MoveLeft()
{

	HWND WIN = FindWindowA("TXGuiFoundation", "QQ2013");
	if (WIN != NULL)
	{
		RECT rectWIN;//区域 ,left ,right ,top,bottom
		GetWindowRect(WIN, &rectWIN);//获取区域
		SetWindowPos(WIN, NULL, rectWIN.left-100, rectWIN.top , 300, 300, 1);

	}

}


void MoveRight()
{

	HWND WIN = FindWindowA("TXGuiFoundation", "QQ2013");
	if (WIN != NULL)
	{
		RECT rectWIN;//区域 ,left ,right ,top,bottom
		GetWindowRect(WIN, &rectWIN);//获取区域
		SetWindowPos(WIN, NULL, rectWIN.left+100, rectWIN.top + 150, 300, 300, 1);

	}

}
void main()
{

	OpenQQ();
	ShowQQ();
	Sleep(5000);
	//HideQQ();
	//Sleep(5000);
	Rebound();

	system("pause");

}