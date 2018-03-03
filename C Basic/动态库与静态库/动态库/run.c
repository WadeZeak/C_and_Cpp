
#include<stdlib.h>
#include<Windows.h>


//导出函数，加载时可以调用
_declspec(dllexport) void msg()
{

	MessageBoxA(0, "2123", "516", 0);
}


//导出函数，加载时可以调用
_declspec(dllexport) int add(int a, int b)
{

	return a + b;

}










