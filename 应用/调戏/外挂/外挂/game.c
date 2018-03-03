#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void msg()
{

	while (1)
	{
		MessageBoxA(0, "HelloWorld1000", "test", 0);
		Sleep(2000);
	}


}

void main()
{

	int num = 500;
	printf("%x,%x\n", &num, msg);

	while (1)
	{
		printf("num=%d\n", num);
		Sleep(2000);
	}
}