/*
编写一个函数JOIN，让它实现字符串连接运算功能。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

char *Join(char *str1, char *str2)
{
	if (str1==NULL||str2==NULL)
	{
		if (str1)
		{
			return str1;
		}
		else if (str2)
		{
			return str2;
		}
		else
		{
			return NULL;
		}
	}
	else
	{
		int count1 = 0, count2 = 0;
		while (str1[count1])
		{
			count1++;
		}

		while (str2[count2])
		{
			count2++;
		}
		char *str = (char *)malloc(count1 + count2 + 1);
		
		int i = 0;
		int j = 0;
		while (str1[i])
		{
			str[i] = str1[i];
			i++;
		}
		while (str2[j])
		{
			str[i+j] = str2[j];
			j++;
		}
		str[i + j] = '\0';
		return str;
	}



}

void main12()
{
	char str1[50] = {0};
	char str2[50] = {0};
	scanf("%s", str1);
	scanf("%s", str2);
	char *joinstr = NULL;
	joinstr=Join(str1, str2);
	printf("Join_Str=%s", joinstr);

	system("pause");

}