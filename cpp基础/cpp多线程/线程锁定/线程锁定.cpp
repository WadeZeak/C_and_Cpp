#include<iostream>
#include<thread>
#include<Windows.h>
#include<mutex>//������������

using namespace std;


//�����̲߳��з���һ������


int g_num = 20;//�ҵ������Ҳ����ı�־

mutex g_mutex;


void GoA(int num)
{
	g_mutex.lock();//���� �̷߳����ڼ�,�����߳��޷�����

	for (int i = 0; i < 15; i++)
	{
		Sleep(300);
		g_num = 10;
		cout << "thread_" << num << "\t" << g_num << endl;
	}

	g_mutex.unlock();//����
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

	//˳��ִ��
	pth1->join();
	pth2->join();




	cin.get();

}