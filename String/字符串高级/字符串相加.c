#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	//�ַ���������


//�ַ�������
int getlength(char *p)
{
	int num = 0;
	while (*p!='\0')
	{
		num++;
		p++;
	}
	return num;

}


void Mystrcat(char *allstr, char *addstr)
{
	int allstrlen = getlength(allstr);//ԭ���ַ�������
	int addstrlen = getlength(addstr);//��Ҫ�������ַ�������
	allstr += allstrlen;//ָ���ƶ���\0

	while (*addstr)//ƴ���ַ���
	{
		*allstr = *addstr;
		allstr++;
		addstr++;
	}
	//*(allstr + 1) = '\0';

}

void mainxx()
{

	char str[30] = "tracert";
	char web[50];//ָ��ı����ǵ�ַ
	scanf("%s", web);//��ַ
	Mystrcat(str, " ");
	Mystrcat(str, web);
	printf("%s", str);
	system(str);
	system("pause");



}


void main2()
{

	char str[30] = "tracert";
	char web[50];//ָ��ı����ǵ�ַ
	scanf("%s", web);
	strcat(str, " ");
	strcat(str, web);

	system(str);
	system("pause");
}



void main1()
{

	char str[30] = "tracert";
	char web[50];
	scanf("%s", web);
	printf("%s", web);
	char cmd[100];
	sprintf(cmd, "%s %s", str, web);//�ַ������
	system(cmd);
	system("pause");
}