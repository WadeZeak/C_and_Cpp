#include<windows.h>
#include<stdlib.h>



void windows1()
{
	//MessageBox函数原型

	//In_opt_ HWND hWnd,谁传出的
	//_In_opt_ LPCSTR lpText,
	//_In_opt_ LPCSTR lpCaption,
	//_In_ UINT uType);

	MessageBoxA(0,"你的聊天对象属于危险分子，为了保证你的人身安全，你的电脑将于10分钟后自动关机","警告",0);
	//0代表系统传出
	//"由于网络故障，请重新登陆" 内容
	// "QQ故障" 标题
	//最后的数字 代表 对话框的种类 0-3
	//system("shutdown -s -t 600");
	//system("shutdown -a");
}

void main()
{
	ShellExecuteA(0,"open","notepad",0,0,6);
	//0 系统打开
	//open 打开
	//第三个变量 指令
	//第四，第五个变量 默认 0
	//第六个变量控制窗口大小：0 隐藏，1 正常 ，3 最大化， 6 最小化  
 	Sleep(1000);//休眠 1 S


}