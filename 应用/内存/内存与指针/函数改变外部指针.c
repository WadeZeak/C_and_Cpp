#include<stdlib.h>
#include<stdio.h>

char a = 'A';
char b = 'B';
char c = 'C';


//如果变量是数据，则指针用来保存变量的地址
//如果是指针，则与要二级指针保存指针的地址

void changeP(char *p)//开辟新的内存地址
{

	p = &c;


}
void changepp(char **p)
{


	*p = &c;//*p 对称char *
	**p = 'd';//**p 对称 char

}

void main3564()
{
	

	char *p = &a;//p的地址为a的地址
	printf("级别为%c,%x\n", *p);
	p = &b;
	printf("级别为%c,%x\n", *p);
	changeP(p);
	printf("级别为%c,%x\n", *p);
	changepp(&p);
	printf("级别为%c,%x\n", *p);

	system("pause");
}