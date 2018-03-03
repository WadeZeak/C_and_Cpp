#include<stdlib.h>
#include<stdio.h>

void go(int i)
{
	if (i == 0)
		return ;
	else
	{
		system("notepad");
		printf("%d\n", i - 1);
		go(i-1);	
		
	}

}



void mainuu()
{

	int n = 5;
	go(n);
	system("pause");
}