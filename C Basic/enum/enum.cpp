#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

enum season
{
	spring=1,
	//֮���������ֵ����+1
	summer,
	autum,
	winter
}s1;
//����ö�����ͱ���
enum season s2;

void main()
{
	//s1 = 1; 	���ܽ� "int" ���͵�ֵ���䵽 "season" ���͵�ʵ��
	s1 = (season)1;
	//s1 = autum;
	printf("%d,%d,%d,%d\n", spring, summer, autum, winter); 
	//1, 2, 3, 0
	printf("%d\n", s1);


	for (int i = spring; i <= winter; i++)
	{
		switch (i)
		{
		case spring:
			printf("spring\n");
			break;
		case summer:
			printf("summer\n");
			break;
		case autum:
			printf("autum\n");
			break;
		case winter:
			printf("winter\n");
			break;
		default:
			break;
		}
	}


	system("pause");

}
