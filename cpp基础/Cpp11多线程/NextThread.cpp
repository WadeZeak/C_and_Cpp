#include<iostream>
#include<thread>
#include<string>

#include<Windows.h>
using namespace std;


void run(int num)
{

	cout << "HelloWorld" << num << endl;
}

void main2()
{
	//批量创建线程
	//thread th[10];
	thread *p[10];//指针数组
	for (int i = 0; i < 10; i++)
	{
		p[i] = new thread(run, i);
		//p[i]->join();//等待模式  顺序执行
		//p[i]->detach();//脱离当前主线程,自由执行  并发执行,乱序
		//Sleep(100);
	}

	cin.get();

}



