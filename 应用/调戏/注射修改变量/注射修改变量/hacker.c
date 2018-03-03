#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{

	int x = 10;
	int y = 1000;
	printf("%x,%x", &x, &y);
	while (1)
	{
		printf("\n%d,%d", x, y);
		Sleep(2000);
	} 
	system("pause");


}