#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<Windows.h>


int flag = 0;//�������û���ҵ������Ϊ0
int *addfind = NULL;//ָ�����ݵĵ�ַ
struct MyStruct
{
	int *pfindstart;//Ҫ���ҵ��׵�ַ
	int length;//�޶����ȣ�����ʼ��ַ��ʼ
	int bh;//�̵߳ı��
	int num;//Ҫ���ҵ�����
	int *pflag;//����flag��ַ,�޸�flag,����
	int **add;//����һ��ָ��ĵ�ַ,�ҵ���ָ�����ݵĵ�ַ
};

void find(void *p)
{

	struct MyStruct *pstruct = (struct MyStruct *)p;//ָ�����͵�ת��
	//�ڴ����������ʼ��ַ��ʼ100��Ԫ��
	for (int *px = pstruct->pfindstart; px < pstruct->pfindstart+pstruct->length; px++)
	{
		Sleep(100);
		if (*(pstruct->pflag) != 0)//�����߳��Ѿ��ҵ�ָ������
		{
			printf("�߳�%d����,û���ҵ�ָ������,�������߳��ҵ�\n", pstruct->bh);
			return;//�߳̽���

		}
		if (*px == pstruct->num)
		{
			printf("��%d���ҵ�,%p,%d\n",pstruct->bh, px,*px);
			*(pstruct->add) = px;
			*(pstruct->pflag) = 1;
			return;
		}

	}

	//printf("��%d���߳�û���ҵ�!!\n",pstruct->bh);
	return;

}


void main()
{

	int a[1000];
	for (int i = 0; i < 1000; i++)
	{
		a[i] = i;
	}
	struct 	MyStruct  threaddata[10];//ʹ�ýṹ��������ⲻͬ���̷߳���ͬһ���ṹ��

	for (int i = 0; i <10; i++)//����10���̣߳�����
	{
		int *p = a + i * 100;
		
		//�ṹ���ʼ��
		threaddata[i].pfindstart = p;
		threaddata[i].length = 100;
		threaddata[i].bh = i;
		threaddata[i].num = 785;	
		threaddata[i].pflag = &flag;
		threaddata[i].add = &addfind;
		printf("%d\n", threaddata[i].bh);
		_beginthread(find,0,&threaddata[i]);

		//Sleep(30);//�����̻߳���ʱ�䣬ѭ����ִ�е��൱��
	}

	Sleep(30000);
	system("pause");
	printf("\n%d,%p\n", *addfind, addfind);//��ӡָ�����ݵĵ�ַ�Լ�ָ������
	system("pause");
}