

#ifndef _CLT_SOCKET_H_//������.c�ļ����ظ�����

/*

1���ͻ��˳�ʼ��
2���ͻ��˷��ͱ���
3���ͻ��˽��ձ���
4���ͻ������ٻ���


*/

#define _CLT_SOCKET_H_

//1���ͻ��˳�ʼ��
int cltSocket_Init(void **handle);

//2���ͻ��˷��ͱ���
int cltSocket_sndata(void *handle ,unsigned char *buf,int buflen);

//3���ͻ��˽��ձ���
//int cltSocket_rcvdata(void *handle,unsigned char *buf,int *buflen);

int cltSocket_rcvdata(void *handle, unsigned char **buf, int *buflen);
int cltSocket_rcvdata_Free(unsigned char *buf);

//4���ͻ������ٻ���

int cltSocket_destroy(void *handle);

#endif






