#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<Windows.h>

void gogo(void *p)
{
	int *px = (int *)p;

	Sleep(2000);
	printf("A\n");
	//return;//�߳�ִ����󷵻�
	
	int i = 0;
	while (1)
	{

		if (i>10)
		{
			printf("%d,%d\n", i,*px);
			_endthread();//������ǰ�߳�
		}
		i++;
		Sleep(1000);
	}
}

//��ָ����Խ����κ����͵�ָ��

//�̶߳�ʱ��
void time(void *p)
{
	int i = 0;
	while (1)
	{
		char str[100] = { 0 };
		sprintf(str, "title ��ǰʱ���%d��", i);
		system(str);
	///	printf(str);
		i++;
		Sleep(1000);

	}


}

void main()
{

	_beginthread(time, 0, NULL);
	//���߳�
	//���̹߳���֮���������̶߳�������
	for (int i = 0; i < 5; i++)
	{

		HANDLE hd = _beginthread(gogo, 0, &i);//hd��һ���̱߳��
		WaitForSingleObject(hd, INFINITE);//�ȴ�������ģʽ,û��wait,����ģʽ
		Sleep(1000);
	}



	system("pause");
}