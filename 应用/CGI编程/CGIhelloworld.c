#include<stdio.h>

void main()
{
	printf("Content-type:text/html\n\n");//���Ϊhtml
	for (int i = 0; i < 10; i++)
	{
		printf("������CGI,HelloWorld");
		printf("<br><br>");//html����   \n���ܻ�����

	}


}