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
	//���������߳�
	//thread th[10];
	thread *p[10];//ָ������
	for (int i = 0; i < 10; i++)
	{
		p[i] = new thread(run, i);
		//p[i]->join();//�ȴ�ģʽ  ˳��ִ��
		//p[i]->detach();//���뵱ǰ���߳�,����ִ��  ����ִ��,����
		//Sleep(100);
	}

	cin.get();

}



