#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
void mainvvvv()
{

	//����һƬ�ڴ棬�ڴ��׵�ַ���ݸ�һ��ָ��
	while (1)
	{
		int *p = (int *)malloc(1024 * 1024 *10);//10MB
	//	p = (int *)malloc(0xfffffffff);//�ڴ����ʧ��ʱ����
		//�ڴ����ɹ������ص�ַ�����򷵻�NULL
		printf("%x\n", p);
		if (p == NULL)
		{

			printf("�����ڴ�ʧ��\n");
		}
		else
		{
			printf("����ɹ�\n");
		}
		Sleep(10000);
		Sleep(1000);
		free(p);//�ͷ��ڴ�ռ�
	}



	system("pause");
}