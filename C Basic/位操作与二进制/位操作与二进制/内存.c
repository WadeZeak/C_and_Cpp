#include<stdlib.h>
#include<stdio.h>

void main1()
{
	int num = 1;
	printf("%d\n", num);
	//����
	//0000 0000 
	//0000 0000
	//0000 0000 
    //0000 0001

	//�ڴ��е���洢
	//1000 0000 
	//0000 0000 
	//0000 0000 
	//0000 0000 



	system("pause");
}



void main2()
{
//	int num = 010;//�˽���

	int num = 0x12345678;
	//��λ->���ֽ� ��λ->���ֽ�
	//78
	//56
	//43
	//21

	printf("%p\n", &num);
	printf("%x\n", num);
	system("pause");
}

