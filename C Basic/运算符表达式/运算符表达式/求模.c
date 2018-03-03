#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//4位数颠倒
void main()
{
	int num;
	scanf("%d", &num);
	int qian = num / 1000;
	//printf("\n%d", qian);
	int bai = num / 100 - qian *10 ;
	//printf("\n%d", bai);
	int shi = num / 10 - qian * 100 - bai * 10;
	int ge = num - qian * 1000 - bai * 100 - shi * 10;
	printf("\n%d", ge * 1000 + shi * 100 + bai * 10 + qian);
	system("pause");
}



//三位数颠倒

void main8()
{
	int num;
	scanf("%d", &num);
	int ge = num % 10;
	int shi = num / 10%10;
	int bai = num / 100;
	printf("\n%d", ge * 100 + shi * 10 + bai);
	system("pause");

}



void main7()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("\nx=%d,y=%d", x,y);
	printf("\n%d", x%y);
	//不用%，求模
	//x%y=x-(int)(x/y)*y
	printf("\n%d", x - x / y*y);

	system("pause");
}



void main6()
{

	int num = 5 % 9;//求模运算只限于整数,如果出现字符，则转换为ASCII码
	int num2 = 'A'%9;//65%9
	printf("%d", num2);
	getchar();
}




void main5()
{

	printf("%d", 3 % 5);//3
	printf("\n%d", 5 % 3);//2
	printf("\n%d", 3 % -5);//0*(-5)+3=3
	printf("\n%d", -3 % -5);//0*-5+(-3)=-3
	printf("\n%d",-3 % 5);//0*5+(-3)=-3
	printf("\n%d", 5 % -3);//-1*(-3)+2=5
	getchar();
}