#include<stdlib.h>
#include<stdio.h>


void main644()
{
	unsigned char ch = 1; //0000 00001
	//ȡ��
	unsigned char ch1 = ~ch;//1111 1110



	system("pause");
}


void mainddd()
{
	unsigned int num = 101;

	for (int i = 0; i < 32; i++)
	{
		printf("%u\n", num);
		num <<= 1;//num=num<<1   ����һλ
	}
	//0000 0000 0000 0000 0000 0000 0000 0001
	//0000 0000 0000 0000 0000 0000 0000 0010


	system("pause");
}


void main()
{
	unsigned int num = UINT_MAX;//4294967295

	for (int i = 0; i < 32; i++)
	{
		printf("%u\n", num);
		num >>= 1;//num=num>>1   ����һλ  �ȼ���ÿ�γ���2
	}
	//1111 1111 1111 1111 1111 1111 1111 1111
	//0111 1111 1111 1111 1111 1111 1111 1111 

	system("pause");
}



