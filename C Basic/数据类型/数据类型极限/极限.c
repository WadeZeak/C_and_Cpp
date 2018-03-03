#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void main()
{
	unsigned short num = 65535+1+3;//溢出
	printf("%d",num);
	getchar();
}



void main2()
{

	short num=100;//短整型，正号可省略
	printf("%x\n",num);//十进制->十六进制
	printf("short 的最大值%d，short的最小值%d\n",SHRT_MAX,SHRT_MIN);
	printf("unsinged short 的最大值%d，unsined short的最小值%d",USHRT_MAX , 0);//无符号short
	printf("\nshort zize=%d,unsigned short =%d", sizeof(short), sizeof(unsigned short));//short,unsigned short 大小
	system("pause");

}
