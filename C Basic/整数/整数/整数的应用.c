#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	//�����������
	time_t time1;//����ʱ�����͵ı���

	//srand()��������������˴�����ʱ������
	//time ʱ�亯��
	//(unsigned int) ����ת��
	srand((unsigned int)time(&time1));

	//��������ж��У�0����0����0����1
	//2 ? system("calc") : system("notepad");
	  int num = rand()%100;//�����,1-100
	int num1 = rand() % 100 +100;//100-200
	printf("%d\n", num1);
	num > 80 ? printf("%d,You Win",num),system("calc") :( printf("%d,You Lose",num),system("notepad"));
	getchar();
}