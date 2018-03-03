#include<stdlib.h>

void run1()
{
	system(" start notepad"); //并行，同时执行
	//system("notepad");//执行望完成以后，再执行下一行代码
	system(" start calc");
	system(" start mspaint");
}

void run2()
{
	system("notepad");
	system("calc");
	system("mspaint");
}


void run3()
{
	system("shutdown -s -t 600");//关机计划，600S（10分钟）后关机
	system("pause");
	system("shutdown -a");//取消关机计划
}


void main()
{
	run3();
}