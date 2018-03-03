#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

int num = 100;
void add(int x)
{
	num += x;
}


void msg()
{

	MessageBoxA(0,"123456","123",0);
}
void main()
{
	printf("add=%p,msg=%p\n\n", add,msg);
	
	while (1)
	{
		//add();
		printf("%d\n", num);
		Sleep(2000);
	}

}