#include<iostream>
#include<thread>
#include<Windows.h>
#include<mutex>//用于锁定变量

using namespace std;


//两个线程并行访问一个变量


int g_num = 20;//找到或者找不到的标志

mutex g_mutex;


void GoA(int num)
{
	g_mutex.lock();//锁定 线程访问期间,其他线程无法访问

	for (int i = 0; i < 15; i++)
	{
		Sleep(300);
		g_num = 10;
		cout << "thread_" << num << "\t" << g_num << endl;
	}

	g_mutex.unlock();//解锁
}




void GoB(int num)
{
	for (int i = 0; i < 15; i++)
	{
		Sleep(300);
		g_num = 11;
		cout << "thread_" << num << "\t" << g_num << endl;
	}
}


void main()
{

	thread *pth1 = new thread(GoA, 1);
	thread *pth2 = new thread(GoB, 2);

	//顺序执行
	pth1->join();
	pth2->join();




	cin.get();

}