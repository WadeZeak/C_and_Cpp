#include<stdlib.h>
#include<stdio.h>



_declspec(dllexport) void go1()
{

	void(** pp)() = (void (**)())0x005BF954;
	*pp = (void(*)())0x00191010;

}




_declspec(dllexport) void go()
{
	void (*p[3])();
	p[0] = 0x00941030;
	p[1] = 0x00941050;
	p[2] = 0x00941070;
	//ָ�뺯����������Ʊ�ʾ����ָ������ĵ�ַ
	void(** pp)() = 0x0080FD04;//��������ָ��

	for (int i = 0; i < 3; i++)
	{
		*(pp+i) = p[i];	
	}



}















