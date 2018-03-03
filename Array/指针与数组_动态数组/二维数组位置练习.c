#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

struct pos
{
	int x;
	int y;
};

//struct pos  pos1[8] = { { 100, 200 },
//{ 100, 0 },
//{ 200, 400 } ,
//{300,400},
//{390,600},
//{ 190, 900 },
//{ 990, 100 },
//{ 1390, 600 }
//};
struct pos pos1[8][2] = {
		//位置             //大小
		{{ 100, 200 }, { 1000,500 }},
		{{ 300, 400 }, {1200, 700 }},
		{{ 1000, 1200 },{ 900, 800 }},
		{{ 900, 500 }, { 1300, 1400 }},
		{{ 800, 200 }, { 500, 400 }},
		{{ 600, 600 }, { 600, 300 }},
		{{ 300, 1400 }, { 700, 600 }},
		{{ 1300, 600 }, { 500, 700 }},
};



void mainss()
{

	HWND *win = FindWindowA("Notepad", "无标题 - 记事本");
	if (win == NULL)
	{
		return;
	}



	for (int i = 0; i < 8; i++)
	{
		//设置窗口位置,大小
		SetWindowPos(win, NULL, pos1[i][0].x, pos1[i][1].y, pos1[i][1].x, pos1[i][i].y, 1);
		Sleep(2000);
	}


}