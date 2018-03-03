#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void main1()
{

	while (-1)//非零死循环
	{
		//system("calc");
		ShellExecuteA(0,"open", "calc", 0, 0, 1);
		//第1个参数:0 系统弹出
 		//第2个参数: open 打开
		//第3个参数:执行的命令
		//第3.第4个参数:默认
		//最后一个参数:0 隐藏窗口 1正常 3最大化 6最小化
		Sleep(2000);
	}

}