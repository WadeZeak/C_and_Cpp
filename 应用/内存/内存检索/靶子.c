#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
void main()
{


	int num = 50;
	printf("%x\n", &num);
	while (1)
	{
		printf("%d\n", num);
		Sleep(2000);

	}
	system("pause");
}