

//96f7f4,96f7e8
_declspec(dllexport)void go()
{
	int *p = (int *)0x96f7f4;//p��һ������������һ����ַ
	*p = 50;
	int *k = (int *)0x96f7e8;
	*k= 200;
}