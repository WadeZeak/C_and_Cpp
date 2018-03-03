#include<stdlib.h>
#include<windows.h>
//_declspec 外部接口，有了才可以调用
_declspec(dllexport) void popups()
{

	MessageBoxA(0,"HelloWorld!!!","Test",0);

}

_declspec(dllexport) void eatmem()
{
	while (1)
	{
		int *p=(int *)malloc(100000);//100MB
		Sleep(1000);//1S
	}
	

}