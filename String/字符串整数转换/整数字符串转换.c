#include<stdlib.h>
#include<stdio.h>


int test(char *str)
{
	int shu=0;

	while (*str)
	{
		if (*str > '9' || *str < '0')
			return -1;
			shu = shu * 10 + (*str - '0');
		str++;

	}
	return shu;

}

int tonum(char *str)
{
	int num = 0;//计数
	char *istr = str;//创建副本
	while (*istr != '\0')
	{
		//printf("%c,%d\n",*str, *str);打印每一个字符
		if (*istr > '9' || *istr < '0')
			return -1;//代表失败
		num++;
		istr++;
	}
	int wei = 0;
	int lastnum = 0;
	for (int i = 0; i < num; i++)
	{

		wei = str[i] - 48;
		lastnum = lastnum * 10 + wei;
		//printf("wei=%d\n", wei);
	}
	
	return lastnum;
}
//字符转整数
void main2()
{
	char str[10] = "123a45";	
	if (tonum(str)!=-1)
//	printf("%d\n",tonum(str));
printf("%d\n", test(str));
	else
	{
		printf("数据不符合规范\n");
	}
	system("pause");

}



void main1()
{

	//printf("%d,%c\n", 1, 1);//1,ASCII中编码为1的字符
	//printf("%d,%c\n", '1', '1');//49（1的ASCII的编码）,1
	printf("%d", '1' - 1);//48
	system("pause");
}


void tostr(int num, char *str)
{
	int wei = 0;
	int inum = num;
	while (inum)
	{
		wei++;
		inum /= 10;
	}

	while (num)
	{
		str[wei - 1] = num % 10 + '0';
		num /= 10;
		wei--;
	}

}



//整数转字符



void main()
{

	int num = 1234567;
	char str[10] = { 0 };
	tostr(num, str);
	printf("%s\n",str );
	system("pause");

}