#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	//�ַ���������


//�ַ�������
int getlength1(char *p)
{
	int num = 0;
	while (*p != '\0')
	{
		num++;
		p++;
	}
	return num;
}

char *findstr(char *substr, char *str)
{
	char *pl = NULL;
	int substrlen = getlength1(substr);//��ȡĸ�ַ�������
	int strlen = getlength1(str);//��ȡ���ַ�������

	for (int i = 0; i < substrlen-strlen; i++)
	{
		int flag = 1;//��ʶ,�ٶ��ַ������
		for (int j = 0; j < strlen; j++)
		{	
			if (substr[i+j]!=str[j])//�ж��ַ��Ƿ����
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			pl = &substr[i];
			break;
		}
	}
	return pl;
}



void maindh()
{
	char allstr[300] = "I love China I love cpp";
	char str[30] = "love";
	//char *p = strstr(allstr, str);//strstr() û��ƥ����,����NULL (0)����ʱ*p=NULL ��*p=0x0000000
	char *p = findstr(allstr, str);
	if (p != NULL)
	{
		printf("Find\n");
		printf("*p=%c", *p);
	}
	else
	{
		printf("Can't Find\n");
		
	}
	system("pause");
}