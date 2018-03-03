#include<stdlib.h>
#include<stdio.h>
//d9fd64

_declspec(dllexport) void go()
{

	void *p1 = (void *)0x006dfb00;
	void *p2 = (void *)0x006dfbce;//确定返回
	for (char *p = p1; p != p2; p++)//使用char类型 一个字节一个字节的搜索
	{
		int *px = (int *)p;//类型转换
		if (*px == 50)
		{
			*px = 100;
			break;
		}

	}

}