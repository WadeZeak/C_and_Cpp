#define _CRT_SECURE_NO_WARNINGS
#include"�ַ���.h"


int MyStrLen(char *p)//���ַ�������
{
	if (p==NULL)
	{
		return -1;//����ʧ��
	}
	else
	{
		int len = 0;
		while ((*p)!='\0')
		{
			len++;
			p++;
		}
		return len;

	}

}



//ʵ���ַ�������
char *MyStrCpy(char *dest, const char *source)//const char *�޶������޸�
{
	if (dest == NULL || source == NULL)
		return NULL;

	char *destbak = dest;
	while (*source!='\0')
	{
		*dest = *source;//����
		dest++;//ָ����ǰ�ƶ�
		source++;
	}
	*dest = '\0';//��ĩβ����'\0'
	return destbak;


}




char *MyStrCat(char *dest, char const *source)//�ַ���ƴ��
{

	if (dest == NULL || source == NULL)//Ϊ��,ƴ��ʧ��
		return NULL;

	char *destbak = dest;//������ַ����
	while (*dest != '\0')//ѭ����ĩβ
	{
		dest++;
	}

	while (*source != '\0')//ƴ��
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';//ĩβ����'\0'
	return destbak;
}



char *MyStrChr(char const *dest, char ch)//���ҵ�һ��ƥ����ַ������ص�ַ
{
	if (dest == NULL)
		return NULL;
	while (*dest != '\0')
	{
		if (*dest==ch)//�ҵ����ص�ַ
		{
			char *p= dest;
			return p;
		}
		dest++;

	}

	return NULL;//û���ҵ�


}




char *MyStrstr(char const * const dest,char const * const source)
{

	if (dest == NULL || source == NULL)
	{
		return NULL;
	}


	char *destbak = dest;


	while ((*destbak) != '\0')
	{
		printf("%p\n", destbak);
		char *sourcebak = source;
		char *nowdest = destbak;
	
		int flag = 1;//�ٶ����
		while (*sourcebak != '\0')
		{
			if (*nowdest != '\0')
			{
				if ((*sourcebak) != (*nowdest))//����
				{
					flag = 0;//����ȱ�־Ϊ0
					break;
				}
				nowdest++;
				sourcebak++;
			}
			else
			{
				flag = 0;//���ñ�ʶ
				break;
			}
		printf("%p\n", destbak);
		}

		//if (flag == 1)
		//	return destbak;
		destbak++;
		printf("%p\n", destbak);
	
	}
	return NULL;

}



//char *MyStrstr(const char * const  dest, const char * const findstr)
//{
//	if (dest == NULL || findstr == NULL)
//	{
//		return NULL;
//	}
//	char *destbak = dest;
//	char *p = NULL;//�����ҵ��ĵ�ַ
//	while (*destbak != '\0')
//	{
//		int flag = 1;//�ٶ������
//		char *findstrbak = findstr;
//		char *nowdestbak = destbak;
//		while (*findstrbak != '\0')
//		{
//			if (*nowdestbak != '\0')
//			{
//
//				if (*findstrbak != *nowdestbak)//��һ������
//				{
//					flag = 0;//��ֵΪ0������
//				}
//				nowdestbak++;
//				findstrbak++;
//
//			}
//			else
//			{
//				flag = 0;//���ñ�ʶ
//				break;
//			}
//
//
//
//		}
//
//		if (flag == 1)
//		{
//			p = destbak;//��ǰλ��
//			return p;
//		}
//
//		destbak++;
//	}
//
//
//	return NULL;
//
//}

void Init(MyString *str)//ԭ�ⲻ����ʼ��
{
	str->p = NULL;
	str->reallength = 0;
}



void InitWithLength(MyString *str, int length)//���ٳ��ȣ��ڴ�����
{
	str->p = (char *)calloc(length, sizeof(char));//�����ڴ沢���� malloc�����ڴ�
	str->reallength = length;
}


void InitWithString(MyString *str, char *cpystr)//��ʼ���������ַ���
{


///	int len = strlen(cpystr);//��ȡ�ַ�������
	int len = MyStrLen(cpystr);//��ȡ�ַ�������
	str->p = (char *)calloc(len + 1, sizeof(char));//�����ڴ沢����
	//strcpy(str->p, cpystr);//�����ַ���
	MyStrCpy(str->p, cpystr);
	str->reallength = len + 1;

}


void PrintString(MyString *str)//��ӡ�ַ���
{

	printf("%s\n", str->p);


}
void BackAddChar(MyString *str, char ch)//β�������ַ�
{

	if (MyStrLen(str->p)+1==str->reallength)//����������
	{
		str->p = (char *)realloc(str->p, str->reallength + 1);
		//str->reallength++;
		//str->p[str->reallength-2] = ch;//�����ַ�
		//str->p[str->reallength -1] = '\0';//��ȫ'\0'
		
		str->p[str->reallength-1] = ch;//�����ַ� 
		//ĩβ��'\0'
		str->p[str->reallength ] = '\0';//��ȫ'\0'
		str->reallength++;
	}
	else//������û����
	{
		int nowlen = MyStrLen(str->p);//�����ǰ�ַ�������
		str->p[nowlen] = ch;//�����ַ�
		str->p[nowlen+1] = '\0';//��ȫ'\0'
	}


}


void BackAddStr(MyString *str, char *newstr)//β�������ַ���
{
	int len1 = MyStrLen(str->p);
	int len2 = MyStrLen(newstr);
	if (len1+len2+1>str->reallength)//Խ��
	{
		str->p = (char *)realloc(str->p, len1+len2+1);
		//strcat(str->p, newstr);
		MyStrCat(str->p, newstr);
		str->reallength=len1+len2+1;
		/*int addlen = len1 + len2 + 1 - str->reallength;		
		str->p = (char *)realloc(str->p, str->reallength + addlen);
		strcat(str->p, newstr);
		str->reallength += addlen;*/
	}
	else
	{
		//strcat(str->p, newstr);
		MyStrCat(str->p, newstr);

	}


}

void RunStr(MyString *str)//ִ���ַ���
{
	system(str->p);//ִ��ָ��
}

char *FindFirstChr(MyString *str, char ch)//���ҵ�һ���ַ������ص�ַ
{

	//char *p = strchr(str->p, ch);//ϵͳ����
	char *p = MyStrChr(str->p, ch);
	return p;

}



//
//char *FindFirstStr(MyString *str, char *Sstr)//���ҵ�һ��ƥ����ַ����Ĳ������׵�ַ
//{
//	//char *p = strstr(str->p, Sstr);
//
//	char *p = MyStrstr(str->p, Sstr);
//	
//	return p;
//}

char * FindFirstStr(MyString *string, char *str)
{

	char *pres = MyStrstr(string->p, str);
	return pres;//���ص�ַ

}


int DelFirstChr(MyString *str, char const ch)//ɾ���ַ�
{
	char *p = MyStrChr(str->p, ch);

	if (p==NULL)
	{
		return 0;//����ʧ��
	}
	else
	{
		char *pnext = p + 1;
		while (*pnext != '\0')//��ƥ����ַ�������ַ���ǰ�ƶ�
		{
			*p = *pnext;
			p++;
			pnext++;

		}

		*p = '\0';
		return 1;

	}
	

}



int DelFirstStr(MyString *str, char const * const Sstr)//ɾ���ַ���
{
	char *p = MyStrstr(str->p, Sstr);

	if (p == NULL)
	{
		return 0;//����ʧ��
	}
	else
	{
		char *pnext = p + MyStrLen(Sstr);
		while (*pnext != '\0')//��ƥ����ַ�������ַ���ǰ�ƶ�
		{
			*p = *pnext;
			p++;
			pnext++;

		}

		*p = '\0';
		return 1;
	}

}


void AddChr(MyString *str, char const  ch,char *pos)//����λ�������ַ�
{

	if (pos == NULL || str == NULL)
	{
		return;
	}


	if (MyStrLen(str->p) + 1 == str->reallength)//���������� �ַ�����(������'\0')+1('\0')
	{
		str->p = (char *)realloc(str->p, str->reallength + 1);//���¿��ٿռ䲢�洢ԭ����
		int nowlen = MyStrLen(str->p);//�ַ�������
		int movlen = MyStrLen(pos);//����λ�þ�ĩβ�ľ���
		for (int i = nowlen; i > nowlen - movlen; i--)//����λ�ú�����ַ�����ƶ�
		{
			str->p[i] = str->p[i - 1];//��ѯ
		}
		str->p[nowlen - movlen] = ch;//����
		str->p[nowlen + 1] = '\0';

	}
	else
	{
		int nowlen = MyStrLen(str->p);//�ַ�������
		int movlen = MyStrLen(pos);//����λ�þ�ĩβ�ľ���
		for (int i = nowlen; i > nowlen-movlen; i--)//����λ�ú�����ַ�����ƶ�
		{
			str->p[i] = str->p[i - 1];//��ѯ
		}
		str->p[nowlen - movlen] = ch;//����
		str->p[nowlen + 1] = '\0';
	}


}



void AddStr(MyString *str, char const * const Sstr,char *pos)//����λ�������ַ���
{
	if (pos == NULL || str == NULL)
	{
		return;
	}


	int len1 = MyStrLen(str->p);
	int len2 = MyStrLen(Sstr);

	if (len1+len2+1>=str->reallength)//�ж��Ƿ����
	{
		str->p = (char *)realloc(str->p, len1 + len2 + 1);//���ӳ���
		str->reallength = len1 + len2 + 1;//ʵ�ʳ���
		//����λ�þ�ĩβ�ľ���
		int movlen = MyStrLen(pos);//����λ�þ�ĩβ�ľ���
		
		for (int i = len1; i >=len1-movlen ; i--)////����λ�ú�����ַ�����ƶ�
		{
			str->p[i + len2] = str->p[i];
		}

		for (int j = 0; j < len2; j++)//����
		{
			str->p[len1 - len2 - 1 + j] = Sstr[j];
		}

	}
	else
	{

		for (int i = len1 - 1; i >= len1 - len2 - 1; i--)////����λ�ú�����ַ�����ƶ�
		{
			str->p[i + len2] = str->p[i];
		}

		for (int j = 0; j < len2; j++)//����
		{
			str->p[len1 - len2 - 1 + j] = Sstr[j];
		}

	}


}



void ReplaceChr(MyString *str, char const oldchr, char const newchr)//�滻�ַ�
{
	char *pstr = str->p;
	while (*pstr!='\0')
	{
		if (*pstr==oldchr)
		{
			*pstr = newchr;
		}

	}

}





//void ReplaceStr(MyString *str, const char * const  oldstr, const char * const newstr)//�滻��һ����ƥ����ַ���
//{
//	char *fstr = FindFirstStr(str->p, oldstr);
//	if (fstr!=NULL)//�ҵ�Ŀ���ַ���
//	{
//		DelFirstStr(str->p, oldstr);
//		AddStr(str->p, newstr,fstr);
//
//	}
//
//}

void ReplaceStr(MyString *string, const char * const  oldstring, const char * const newstring)//�滻��һ����ƥ����ַ���
{
	char *pfind = FindFirstStr(string, oldstring);//�ҵ�λ��
	if (pfind != NULL)
	{
		DelFirstStr(string->p, oldstring);
		AddStr(string->p, newstring,pfind);
	}


}