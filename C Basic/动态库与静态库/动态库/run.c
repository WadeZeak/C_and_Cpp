
#include<stdlib.h>
#include<Windows.h>


//��������������ʱ���Ե���
_declspec(dllexport) void msg()
{

	MessageBoxA(0, "2123", "516", 0);
}


//��������������ʱ���Ե���
_declspec(dllexport) int add(int a, int b)
{

	return a + b;

}










