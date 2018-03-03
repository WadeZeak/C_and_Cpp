#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num = 10;
	printf("%d", 10 * num++);

	getchar();

}






//编译器扫描字符时，从上向下，从左向右

void main18()
{
	int a = 3, b = 4;
	printf("%d", a+++b);//7

	getchar();
}



void main17()
{
	int num = 5;
	printf("%d", -num++);
	printf("\n%d", -++num );
	getchar();
}


void main16()
{
	//自增自减运算符不能用于常量
	//表达式不能自增
	//字符可以自增
	char ch = 'A';
	printf("%c", ++ch);

	//实数也可以自增自减
	float m = 2.0;
	printf("\n%f", ++m);
	getchar();

	//自增自减的优先级大于加减乘除
}





void main15()
{
	int num = 0;
	while (num++ < 5)
	{
		system("echo notepad");
	//	num++;
	//++num也行，没有调用
	}
	system("pause");
}






void main14()
{

	int num = 100;

	printf("%x", &num);

	printf("\n%d", --num);

	printf("\n%d", num);

	getchar();


}





void main13()
{

	int num = 100;

	printf("%x", &num);

	printf("\n%d",++num);

	printf("\n%d", num);

	getchar();


}




void main12()
{

	int num = 100;

	printf("%x", &num);

	printf("\n%d", num--);

	printf("\n%d", num);

	getchar();
}




void main11()
{
	int num = 10;

	printf("%x", &num);

	printf("\n%d",num++);

	printf("\n%d",num);

	getchar();
}