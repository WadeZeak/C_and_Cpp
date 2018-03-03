#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


void openbaidu()
{

	ShellExecuteA(0,"open","https://www.baidu.com/s?ie=utf-8&f=3&rsv_bp=0&rsv_idx=1&tn=97867419_hao_pg&wd=HelloWorld&rsv_pq=b9f137430004832c&rsv_t=ed29GyS4UkndChfQJvNItTeeFALFFgz4iGL7eCFp4luexoo%2BHuL0oceA6sxenm%2Bw3Cp%2B8YXj&rqlang=cn&rsv_enter=1&rsv_sug3=4&rsv_sug1=4&rsv_sug7=100&rsv_sug2=0&prefixsug=HelloWorld&rsp=0&inputT=7248&rsv_sug4=7248",0,0,0);


}

void closebaidu()
{


	system("taskkill /f /im MicrosoftEdge.exe");
}


void clickbaidu()
{
	SetCursorPos(300,400);//设置鼠标位置
	Sleep(500);
	//鼠标事件函数
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//鼠标左键按下
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);// 鼠标左键弹起
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
}

void main1()
{

	while (1)
	{
		openbaidu();
		Sleep(5000);
		clickbaidu();
		Sleep(10000);
		closebaidu();
		Sleep(2000);
	}
	
	
}