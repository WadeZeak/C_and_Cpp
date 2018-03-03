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
	//指针函数数组的名称表示函数指针数组的地址
	void(** pp)() = 0x0080FD04;//二级函数指针

	for (int i = 0; i < 3; i++)
	{
		*(pp+i) = p[i];	
	}



}















