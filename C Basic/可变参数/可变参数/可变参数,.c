
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include<memory.h>

#define X(n) n*n*n





int add(int a, ...)//...������ٸ�����������
{
	va_list  v;//����ɱ䳤�Ĳ����б�
	va_start(v, a);//�Ӳ���a֮�����еĲ���������������

	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		sum += va_arg(v, int);//����int�������ν�������
		
	}
	va_end(a);//�ͷ��б�
	return sum;
}




void run(int n, ...)//����ȷ����Ҫ�Ĳ����ĸ���
{
	va_list  v;//����ɱ䳤�Ĳ����б�
	va_start(v, n);//�Ӳ���n֮�����еĲ���������������

	for (int i = 0; i < n; i++)
	{
		char *str= va_arg(v, char *);//�����������ν�������
		system(str);
	}
}






void main1()
{
printf("%d\n", add( 1, 1));
printf("%d\n",add(2 ,1, 2));
printf("%d\n",add(3 , 1, 2, 3));
printf("%d\n",add(4 , 1, 2, 3, 4));
printf("%d\n", add(5 , 1, 2, 3, 4,5));

system("pause");
}


void main2()
{

	run(5, "calc", "notepad", "mspaint", "ipconfig", "tasklist & pause");

}


void main3()
{

	printf("%d\n", X(3));//3*3*3=27
	printf("%d\n", X(1+2));//1+2*1+2*1+2==7
	system("pause");

}



void main()
{

	char str[100] = "123456789";//"123456789 \0 \0 ......
	strcpy(str, "123");//123 \0 56789 \0\0...
	memset(str, '\0', 100);//�����ַ���Ϊ��  �����ڴ�
	//memcpy �ڴ濽��
	printf("%s\n", str);
	system("pause");


}