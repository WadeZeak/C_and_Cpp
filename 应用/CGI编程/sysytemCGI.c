#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main()
{

	printf("Content-type:text/html\n\n");//���Ϊhtml
	printf("%s<br><br>", getenv("QUERY_STRING"));//��ӡ��������
	char Sstr[256] = { 0 };//��ʼ��
	gets(Sstr);//��ȡ����
	//printf("%s\<br><br>", Sstr);//��ӡ������ַ���a
	//BBB=shtdpown&AAA=OK
	char *p = Sstr + 4;
	char *ps = strchr(Sstr,'&');
	*ps = '\0'; 

	char cmd[256] = { 0 };
	sprintf(cmd,"%s >1.txt",p);

	/*char *str = "ipconfig >1.txt";
	system(str);*/

	system(cmd);//ֻ��ִ�в����ո�������У�������Ҫ�ַ���ת��
	FILE *fp = fopen("1.txt", "r");
		while (!feof(fp))//ָ��û��ָ���ļ���ĩβ����0�����򷵻�1
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