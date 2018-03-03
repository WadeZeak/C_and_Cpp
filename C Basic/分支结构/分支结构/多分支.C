#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>



void run(int n)
{
	
		if (n == 1)
		{
			system("mspaint");
		}
		else if (n == 2)
		{
			system("notepad"); 

		}
		else if (n == 3)
		{
			system("calc");
		}

		else if (n == 4)
		{
			system("shutdown -s -t 1000");
		}

		else if (n == 5)
		{

			system("shutdown -a");
		}


		else if (n == 6)
		{

			ShellExecuteA(0, "open", "http://www.baidu.com", 0, 0, 0);
		}

		else
		{
			system("ipconfig");
		}
	
}


void mainxx()
{
	while (1)
	{
		int num;
		scanf("%d", &num);
		run(num);
	}

}