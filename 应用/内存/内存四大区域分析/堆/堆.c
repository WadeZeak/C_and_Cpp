#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


//�ڴ���亯�� malloc calloc realloc
//�Զ������ڴ�,ʹ�ö�
//��������Ƭ�����ڴ�
void test()
{
	int *p = (int *)malloc(sizeof(int) * 10);

	int num = 0;
	for (int *px= p; px < p+10; px++)
	{
		*px = num;
		printf("%x,%d\n", px, *px);
		num++;
	}


}



void main2()
{
	test();

	printf("\n\n");
	test();//���¿���һ���ڴ�

	system("pause");

}





void mainA()
{

	//�����ڴ�
	unsigned  long long num = 1024 * 1024 * 1024;//��Χ0 -- 2^64 -1
	num *= 1;
	void *p = (void *)malloc(num);
	if (p == NULL)
	{

		printf("�ڴ����ʧ��\n");
	}
	else
	{
		printf("�ڴ����ɹ�");
	}


	system("pause");
}


//��ʳ
void main()
{

	while (1)
	{
		//�ڴ�һ��Ҫ��ʱ�ͷ�
		void *p = malloc(1024 * 1024 * 100);//100M
		Sleep(2000);
		free(p);//�ͷ��ڴ�
		Sleep(2000);
	}


}