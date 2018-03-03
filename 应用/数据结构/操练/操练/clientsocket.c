#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cltsocket.h"
/*

1、客户端初始化
2、客户端发送报文
3、客户端接收报文
4、客户端销毁环境


*/

//打桩,空的函数体


//1、客户端初始化
int cltSocket_Init(void **handle)
{

	return 0;


}

//2、客户端发送报文
int cltSocket_sndata(void *handle, unsigned char *buf, int buflen)
{

	return 0;

}

//3、客户端接收报文
int cltSocket_rcvdata(void *handle, unsigned char *buf, int *buflen)
{

	return 0;

}

//4、客户端销毁环境

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