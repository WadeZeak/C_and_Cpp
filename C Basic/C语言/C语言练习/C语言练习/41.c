/*
���ܣ���һ�������������10λ�����ӵ�λ����λ��ӡ������
�������12345ʱ�����Ӧ��54321��ֻռһ�У�

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int  figures(int num)
{
	int i;
	i = num % 10;
	if (num)
	{		
		num /= 10;			
		printf("%d", i);
		figures(num); 
	}
	else	
		return i;
	

	
}
void  main41()
{

	int num = 0;
	printf("������һ������:");
	scanf("%d", &num);
	printf("\n");


	figures(num);


	system("pause");
}