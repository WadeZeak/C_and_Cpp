#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void go();//函数声明

/*

第一个为按键的虚拟键值，如回车键为vk_return, tab键为vk_tab
第二个参数为扫描码，一般不用设置，用0代替就行；

第三个参数为选项标志，如果为keydown则置0即可，如果为keyup则设成"KEYEVENTF_KEYUP"；

第四个参数一般也是置0即可。
*/
void mainfgjf()
{
	//键盘事件函数

	//0x5b  windows键
	//按键组合 win+E windows资源管理器
	keybd_event(0x5b, 0, 0, 0);//键盘按下
	keybd_event('E', 0, 0, 0);
	keybd_event(0x5b, 0, 2, 0);//键盘松开
	keybd_event('E', 0, 2, 0);

}
void mainvvv()
{

	keybd_event(0x5b, 0, 0, 0);
	keybd_event('R', 0, 0, 0);
	keybd_event(0x5b, 0, KEYEVENTF_KEYUP, 0);
	keybd_event('R', 0, 2, 0);
	Sleep(200);
	keybd_event(VK_BACK, 0, 0, 0);
	keybd_event(VK_BACK, 0, 2, 0);
	Sleep(200);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	keybd_event('T', 0, 0, 0);
	keybd_event('T', 0, 2, 0);
	keybd_event('E', 0, 0, 0);
	keybd_event('E', 0, 2, 0);
	keybd_event('P', 0, 0, 0);
	keybd_event('P', 0, 2, 0);
	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	keybd_event('D', 0, 0, 0);
	keybd_event('D', 0, 2, 0);
	keybd_event(VK_RETURN, 0, 0, 0);//VK_RETURN 回车
	keybd_event(VK_RETURN, 0, 2, 0);
	Sleep(200);
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, 2, 0);
	Sleep(5000);//退出程序 
	go();
	exit(0);
}

//函数当中不允许在定义函数
void go()
{

	system("echo hello world!!!");
}