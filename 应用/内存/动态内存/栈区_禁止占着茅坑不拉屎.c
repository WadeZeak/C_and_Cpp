#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void data()
{
	int a[10];

	printf("%x\n", a);

	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}



}

void mainkuhi()
{
	while (1)
	{
		data();
		Sleep(5000);
	}


}
