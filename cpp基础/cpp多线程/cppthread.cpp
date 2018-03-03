#include<stdlib.h>
#include<iostream>
#include<thread>
#include<Windows.h>
#include<vector>

using namespace std;
using namespace this_thread;


//命名空间内部可能还包含命名空间


void msgA()
{
	MessageBoxA(0, "123456", "123", 0);
}


void msgB(int num)
{
	cout << "num=" << num << endl;
	cout <<"thread_ID="<< get_id() << endl;
}




void main1()
{

	auto n = thread::hardware_concurrency();//查看处理器的数量
	cout << n << endl;
	cout << "thread_ID=" << get_id() << endl;//get_id() 获取当前的线程ID

	//Cpp 多线程
		thread threadA(msgA);//创建线程
		thread threadB(msgA);

		threadA.join();//调用，开始执行
		threadB.join();//调用

	system("pause");
}



void main2()
{

	vector<thread *>threads;//数组threads 内部存储着类指针

	for (int i = 0; i < 10; i++)//创建

	{
		threads.push_back(new thread(msgA));//创建线程  
	}


	
	for ( auto th:threads)//执行
	{
		th->join();//th是类指针
	}

	system("pause");


}


void main()
{

	vector<thread *>threads;//数组threads 内部存储着类指针


	//线程的执行会出现错乱的状况

	for (int i = 0; i < 10; i++)//创建
	{
		threads.push_back(new thread(msgB,i));//创建线程
		Sleep(100);
		cout << endl;
	}



	for (auto th : threads)//执行
	{

		th->join();//th是类指针
	//	Sleep(100);

	}

	system("pause");




}