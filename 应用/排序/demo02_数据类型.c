
#include<stdlib.h>
#include<stdio.h>
#include<string.h>



typedef int u32;//typedef ȡ����

void main213()
{
	printf("%d", sizeof(u32));

	system("pause");
}

void main16(void)
{

	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("arr:%p,&arr:%p\n", arr, &arr);//������һ��
	printf("arr+1:%p,&arr+1:%p\n", arr+1, &arr+1);
	
	//a ��&a �������Ͳ�ͬ

	//��������������
	//��������������������������ָ��
	//��������������������������ָ��Ĺ�ϵ
	
	system("pause");
}
//�������͵ı��ʾ��ǹ̶��ڴ��С�ı���,�������Ǳ�����Ԥ��Ķ���Ĵ�С�ռ�



void main()
{

	int a = 10;
	int *p = &a;

	printf("%d\n", p);

	*((int *)p) = 20;
	printf("%d\n", a);


	system("pause");


}