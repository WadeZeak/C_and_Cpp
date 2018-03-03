#include<stdio.h>

void main()
{
	printf("Content-type:text/html\n\n");//标记为html
	for (int i = 0; i < 10; i++)
	{
		printf("我来自CGI,HelloWorld");
		printf("<br><br>");//html换行   \n不能换换行

	}


}