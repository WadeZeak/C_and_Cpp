#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cltsocket.h"
/*

1���ͻ��˳�ʼ��
2���ͻ��˷��ͱ���
3���ͻ��˽��ձ���
4���ͻ������ٻ���


*/

//��׮,�յĺ�����


//1���ͻ��˳�ʼ��
int cltSocket_Init(void **handle)
{

	return 0;


}

//2���ͻ��˷��ͱ���
int cltSocket_sndata(void *handle, unsigned char *buf, int buflen)
{

	return 0;

}

//3���ͻ��˽��ձ���
int cltSocket_rcvdata(void *handle, unsigned char *buf, int *buflen)
{

	return 0;

}

//4���ͻ������ٻ���

int cltSocket_destroy(void *handle)
{

	return 0;


}



void main()
{
	FILE *fp = NULL;
	printf("Hello World!!\n");

	system("pause");
}