

#ifndef _CLT_SOCKET_H_//避免在.c文件里重复引用

/*

1、客户端初始化
2、客户端发送报文
3、客户端接收报文
4、客户端销毁环境


*/

#define _CLT_SOCKET_H_

//1、客户端初始化
int cltSocket_Init(void **handle);

//2、客户端发送报文
int cltSocket_sndata(void *handle ,unsigned char *buf,int buflen);

//3、客户端接收报文
//int cltSocket_rcvdata(void *handle,unsigned char *buf,int *buflen);

int cltSocket_rcvdata(void *handle, unsigned char **buf, int *buflen);
int cltSocket_rcvdata_Free(unsigned char *buf);

//4、客户端销毁环境

int cltSocket_destroy(void *handle);

#endif






