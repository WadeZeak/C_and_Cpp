#include<windows.h>
#include<stdlib.h>

void main()
{ 
	while (1)
	{
		malloc(1000000);//malloc �����ڴ�,1000000�ֽ�
		sleep(10000);//�ȴ�1s��1000ms
	}
	}