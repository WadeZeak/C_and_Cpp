#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


void openQQ()
{

	system("\"E://progra~1//Tencent//QQ//Bin/QQScLauncher.exe");
	//注意:\ ->/
	//64位情况下(x86)需要空格
	//注意:转义字符

	//ShellExecuteA(0, "open", "\"E:\\Program Files\\Tencent\\QQ\Bin\\QQProtect.exe\"", 0, 0, 1);
}

void closeQQ()
{

	system("taskkill /f /im QQ.exe");//结束进程

}


void moveQQ1(HWND win, int i)
{
	if (i == 1200)
	{
		return  ;
	}
	else
	{
		SetWindowPos(win, NULL, i, i * 9 / 16, 300, 400, 1);//移动窗口
		//i+=10
		moveQQ1(win, i + 10);
	}


}

void moveQQ()
{
	HWND win;//指针，返回窗口的编号
	win = FindWindowA("TXGuiFoundation", "QQ");//寻找QQ
	//第1个参数:窗口类型
	//第2个参数:窗口标题
	//异步执行，一步一步执行
	//同步,一起执行

	if (win==NULL)//空指针避免野指针
	{
		printf("没有找到QQ");
	}
	else
	{
		printf("找到QQ");
	}
	//控制窗口隐藏或者显示
	//while (1)
	//{

	//	ShowWindow(win, SW_HIDE);//窗口隐藏
	//	Sleep(3000);
	//	ShowWindow(win, SW_SHOW);//窗口显示
	//	Sleep(3000);
	//}
	//设置窗口位置
	//SetWindowPos(win, NULL, 0, 0, 300, 400, 1);
	//第1个参数:HWND 窗口编号
	//第2个参数:下一个窗口
	//第3，第4个参数:位置,坐标分别对应x,y
	//第5,第6个参数:对应窗口的长宽
	//最后一个参数(第7个),默认1


	
	int x = 0;
	int y = 0;

	//for循环
	for (; x <= 1200; x+=10)//循环结束 x=1200
	{
		SetWindowPos(win, NULL, x, 0, 300, 400, 1);//移动窗口
		Sleep(30);
	}


	
	//while 循环
	while (y<=600)//循环结束 y=600
	{
		SetWindowPos(win, NULL, 1200, y, 300, 400, 1);//移动窗口
		y += 10;
		Sleep(30);
	}


	//do while 循环
	do//循环结束后 x=0
	{
		SetWindowPos(win, NULL, x, 600, 300, 400, 1);//移动窗口
		x -= 10;
		Sleep(30);
	} while (x);




AAA:	if(y)//y==0时，终止
	{
		SetWindowPos(win, NULL, 0, y, 300, 400, 1);//移动窗口
		y -= 10;
		Sleep(30);
	}

		goto AAA;


		//for循环跑对角线
		////{
		////	for (int i = 0; i <= 1200; i+=10)
		////	{
		////		SetWindowPos(win, NULL, i, i * 9 / 16, 300, 400, 1);//移动窗口
		////	}
		////}
		moveQQ1(win, 0);

}





void main()
{

	openQQ();
	printf("Hello QQ!!\n");
	Sleep(5000);
	moveQQ();

	Sleep(2000);
	closeQQ();
	printf("Goodbye QQ!!\n");
	system("pause");

}