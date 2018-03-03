#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//C语言结构体与C++的不同
//C语言结构体默认是完全公开
//C语言结构体声明变量必须加上关键字struct
//C语言结构体内部不能有函数
//C语言结构没有公有私有
//C语言结构没有继承

struct MyStruct
{	
	int num1;
	int num2;
};


struct MyStruct mystruct1;


//尝试  12345.789*123.1458  思路： 将小数化为整数，之后调用下列程序
//除法


//1234*19

//1   2   3     4       5 
//			    1        9
//     9     18    27   36  45 
// 1   2     3     4    5
// 1  11    21   31    41   45 
//向前进位后
// 2    3    4    5    5     5   



void GetBigData(char *data1,char *data2)
{

	int len1 = strlen(data1);
	int len2 = strlen(data2);

	int *pres = (int *)malloc(sizeof(int)*(len1 + len2));//用于保存结果
	memset(pres, 0, sizeof(int)*(len1 + len2));//初始化为0

	//累乘
	for (int i = 0; i < len1; i++)
	{

		for (int j = 0; j < len2; j++)
		{
			pres[i+j+1]+=(data1[i] - '0')*(data2[j] - '0');
		}
	}

	//进位
	for (int i = len1+len2-1; i >=0; i--)
	{
		if (pres[i] >= 10)
		{
			pres[i - 1] += pres[i] / 10;//向前进位
			pres[i] = pres[i] % 10;//取出个位数
		}		
	}
	int i = 0;

	//忽略前面的0
	while (pres[i] == 0)
	{
		i++;
	}
	char *last = malloc(sizeof(char)*(len1 + len2));



	//转换为字符串
	int j;
	for ( j = 0; (j < len1+len2)&&(i<len1+len2); j++,i++)
	{
		last[j] = pres[i] + '0';
	}

	last[j] = '\0';
	printf("result=%s\n", last);
	
}



void main()
{

	char str1[100] = { 0 };
	char str2[100] = { 0 };
	printf("请输入数据data1\n");
	scanf("%s", str1);

	printf("请输入数据data2\n");
	scanf("%s", str2);

	printf("%s*%s\n", str1, str2);
	GetBigData(str1, str2);


	system("pause");
}