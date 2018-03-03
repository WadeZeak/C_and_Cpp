#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main7()
{
	int num = 4;
	printf("%d",num--); 
	printf("\n",num);
	system("pause");
}



void main4()
{
	int i = 1;
	printf("%d", i++);//1
	printf("%d\n", i);//2

}


void main3()
{
	int i = 5;
	while (i--)//i先引用，在自减1
	{
		printf("%d\n", i);
		system("notepad");
	}
}

void main2()
{
	int i = 0;
	while (i++< 5)//i先引用，在自增1
	{
		system("notepad");
	}
}




void main1()
{
	int i = 1;
	while (i<5)
	{
		printf("%d\n", i);
		i++;//i=i+1
		Sleep(1000);
	}

}