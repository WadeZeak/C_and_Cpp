#include<stdlib.h>
#include<stdio.h>


_declspec(dllexport) void go()
{
	//����ָ�����ͱ���һ�£������޷�����
	//int **p ȥ����������������
	void(*p)(int a) = (void(*)(int a))0x010810EB;
	void(*p1)() = (void(*)())0x0108111D;
	p(20);
	p1();
}