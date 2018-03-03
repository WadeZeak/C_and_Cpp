#include<stdlib.h>

//并行
void run1()
{
	system(" start notepad"); //并行，同时执行
	//system("notepad");//执行望完成以后，再执行下一行代码
	system(" start calc");
	system(" start mspaint");
}

//单行
void run2()
{
	system("notepad");
	system("calc");
	system("mspaint");
}

//关机计划
void run3()
{
	system("shutdown -s -t 600");//关机计划，600S（10分钟）后关机
	system("pause");
	system("shutdown -a");//取消关机计划
}

//打开C盘
void run4()
{
	//system("explorer.exe");//打开文件资源管理器
	system("explorer.exe  C:\\Program Files\\Baidu");//打开文件目录，需要调用文件资源管理器程序
	// \\ 相当于\
	system("pause");
}

//由于字符的转译，在打开复杂文件路径时，需要加\（单斜杠）
void run5()
{

	system("\"E:\\Program Files\\网易云音乐PC版\\cloudmusic.exe\""); // \" 相当于" 
	system("pause");

}

//打开文件
void run6()
{

    system("C:\\Users\\77386\Desktop\\Fck.html"); 
	//system("\"F:\\Program Files\\1.docx\"");
	system("pause");

}


void run7()
{

	//system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\"");//打开IE
	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" www.qq.com");//打开指定网页
	system("pause");

}


void run8()
{

	
	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" www.qq.com");//打开指定网页
	system("pause");
	system("taskkill /f /lm iexplorer.exe");
}

void main()
{
	run8();
}