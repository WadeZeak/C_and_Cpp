#include<stdlib.h>
#include<stdio.h>

void change(int a)
//�βο��Ե�������һС���ڴ�
{
	a = 100;
	printf("chang a=%x\n", &a);
}
//�β���ʵ�ε�ַ��ͬ
void maindffdh()
{
	int a=10;
	change(a);
	printf("main x=%x\n", &a);
	printf("%d\n", a);
	getchar();


}