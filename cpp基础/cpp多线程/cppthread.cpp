#include<stdlib.h>
#include<iostream>
#include<thread>
#include<Windows.h>
#include<vector>

using namespace std;
using namespace this_thread;


//�����ռ��ڲ����ܻ����������ռ�


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

	auto n = thread::hardware_concurrency();//�鿴������������
	cout << n << endl;
	cout << "thread_ID=" << get_id() << endl;//get_id() ��ȡ��ǰ���߳�ID

	//Cpp ���߳�
		thread threadA(msgA);//�����߳�
		thread threadB(msgA);

		threadA.join();//���ã���ʼִ��
		threadB.join();//����

	system("pause");
}



void main2()
{

	vector<thread *>threads;//����threads �ڲ��洢����ָ��

	for (int i = 0; i < 10; i++)//����

	{
		threads.push_back(new thread(msgA));//�����߳�  
	}


	
	for ( auto th:threads)//ִ��
	{
		th->join();//th����ָ��
	}

	system("pause");


}


void main()
{

	vector<thread *>threads;//����threads �ڲ��洢����ָ��


	//�̵߳�ִ�л���ִ��ҵ�״��

	for (int i = 0; i < 10; i++)//����
	{
		threads.push_back(new thread(msgB,i));//�����߳�
		Sleep(100);
		cout << endl;
	}



	for (auto th : threads)//ִ��
	{

		th->join();//th����ָ��
	//	Sleep(100);

	}

	system("pause");




}