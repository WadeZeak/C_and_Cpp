#include<iostream>
#include<thread>
#include<Windows.h>


using namespace std;


//�����̲߳��з���һ������


int g_num=10;//�ҵ������Ҳ����ı�־



void GoA(int num)
{

	for (int i = 0; i < 15; i++)
	{
		Sleep(1000);
		

		if (i==6)
		{
			g_num = 5;
		}

		if (g_num == 5)
		{
			cout << "thread_" << num << "end" << endl;
			return;
		}
		cout << "thread_" << num<<"\t"<<g_num << endl;
	}

}




void GoB(int num)
{
	for (int i = 0; i < 150; i++)
	{
		Sleep(1000);
	
		if (g_num==5)
		{
			cout << "thread_" << num << "end" << endl;
			return;
		}

		cout << "thread_" << num << "\t" << g_num << endl;
	}
}


void main3()
{

	thread *pth1 = new thread(GoA, 1);
	thread *pth2 = new thread(GoB, 2);

	//˳��ִ��
	pth1->join();
	pth2->join();




	cin.get();

}