#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main()
{

	printf("Content-type:text/html\n\n");//标记为html
	printf("%s<br><br>", getenv("QUERY_STRING"));//打印环境变量
	char Sstr[256] = { 0 };//初始化
	gets(Sstr);//获取输入
	//printf("%s\<br><br>", Sstr);//打印输入的字符串a
	//BBB=shtdpown&AAA=OK
	char *p = Sstr + 4;
	char *ps = strchr(Sstr,'&');
	*ps = '\0'; 

	char cmd[256] = { 0 };
	sprintf(cmd,"%s >1.txt",p);

	/*char *str = "ipconfig >1.txt";
	system(str);*/

	system(cmd);//只能执行不带空格的命令行，否则需要字符的转义
	FILE *fp = fopen("1.txt", "r");
		while (!feof(fp))//指针没有指向文件的末尾返回0，否则返回1
		{
			char chr = fgetc(fp);

	
			if (chr=='\n')
			{
				printf("<br><br>");
			}
			else
			{

				putchar(chr);
			}
		}
		fclose(fp);
		remove(fp);
}