#include<stdlib.h>
#include<stdio.h>
//d9fd64

_declspec(dllexport) void go()
{

	void *p1 = (void *)0x006dfb00;
	void *p2 = (void *)0x006dfbce;//ȷ������
	for (char *p = p1; p != p2; p++)//ʹ��char���� һ���ֽ�һ���ֽڵ�����
	{
		int *px = (int *)p;//����ת��
		if (*px == 50)
		{
			*px = 100;
			break;
		}

	}

}