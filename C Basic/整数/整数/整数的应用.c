#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	//随机数发生器
	time_t time1;//定义时间类型的变量

	//srand()随机数发生器，此处根据时间生成
	//time 时间函数
	//(unsigned int) 类型转换
	srand((unsigned int)time(&time1));

	//计算机的判断中，0便是0，非0便是1
	//2 ? system("calc") : system("notepad");
	  int num = rand()%100;//随机数,1-100
	int num1 = rand() % 100 +100;//100-200
	printf("%d\n", num1);
	num > 80 ? printf("%d,You Win",num),system("calc") :( printf("%d,You Lose",num),system("notepad"));
	getchar();
}