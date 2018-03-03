#include<iostream>
#include<thread>
#include<string>


using namespace std;


void HelloWorldA()
{

	cout << "HelloWorldA" << endl;
}

void HelloWorldB()
{

	cout << "HelloWorldB" << endl;
}


void HelloWorldC()
{

	cout << "HelloWorldC" << endl;
}

void main1()
{
	//线程顺序执行
	std::thread *th1 = new thread(HelloWorldA);//线程初始化
	
	std::thread *th2 = new thread(HelloWorldB);
	
	std::thread *th3 = new thread(HelloWorldC);


	cin.get();

}