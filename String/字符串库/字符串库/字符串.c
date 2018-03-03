#define _CRT_SECURE_NO_WARNINGS
#include"字符串.h"


int MyStrLen(char *p)//求字符串长度
{
	if (p==NULL)
	{
		return -1;//计数失败
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



//实现字符串拷贝
char *MyStrCpy(char *dest, const char *source)//const char *限定不可修改
{
	if (dest == NULL || source == NULL)
		return NULL;

	char *destbak = dest;
	while (*source!='\0')
	{
		*dest = *source;//拷贝
		dest++;//指针向前移动
		source++;
	}
	*dest = '\0';//在末尾补上'\0'
	return destbak;


}




char *MyStrCat(char *dest, char const *source)//字符串拼接
{

	if (dest == NULL || source == NULL)//为空,拼接失败
		return NULL;

	char *destbak = dest;//构建地址副本
	while (*dest != '\0')//循环到末尾
	{
		dest++;
	}

	while (*source != '\0')//拼接
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';//末尾补上'\0'
	return destbak;
}



char *MyStrChr(char const *dest, char ch)//查找第一个匹配的字符并返回地址
{
	if (dest == NULL)
		return NULL;
	while (*dest != '\0')
	{
		if (*dest==ch)//找到返回地址
		{
			char *p= dest;
			return p;
		}
		dest++;

	}

	return NULL;//没有找到


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
	
		int flag = 1;//假定相等
		while (*sourcebak != '\0')
		{
			if (*nowdest != '\0')
			{
				if ((*sourcebak) != (*nowdest))//不等
				{
					flag = 0;//不相等标志为0
					break;
				}
				nowdest++;
				sourcebak++;
			}
			else
			{
				flag = 0;//设置标识
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
//	char *p = NULL;//保存找到的地址
//	while (*destbak != '\0')
//	{
//		int flag = 1;//假定是相等
//		char *findstrbak = findstr;
//		char *nowdestbak = destbak;
//		while (*findstrbak != '\0')
//		{
//			if (*nowdestbak != '\0')
//			{
//
//				if (*findstrbak != *nowdestbak)//有一个不等
//				{
//					flag = 0;//赋值为0代表不等
//				}
//				nowdestbak++;
//				findstrbak++;
//
//			}
//			else
//			{
//				flag = 0;//设置标识
//				break;
//			}
//
//
//
//		}
//
//		if (flag == 1)
//		{
//			p = destbak;//当前位置
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

void Init(MyString *str)//原封不动初始化
{
	str->p = NULL;
	str->reallength = 0;
}



void InitWithLength(MyString *str, int length)//开辟长度，内存清零
{
	str->p = (char *)calloc(length, sizeof(char));//分配内存并清零 malloc分配内存
	str->reallength = length;
}


void InitWithString(MyString *str, char *cpystr)//初始化并拷贝字符串
{


///	int len = strlen(cpystr);//获取字符串长度
	int len = MyStrLen(cpystr);//获取字符串长度
	str->p = (char *)calloc(len + 1, sizeof(char));//分配内存并清零
	//strcpy(str->p, cpystr);//拷贝字符串
	MyStrCpy(str->p, cpystr);
	str->reallength = len + 1;

}


void PrintString(MyString *str)//打印字符串
{

	printf("%s\n", str->p);


}
void BackAddChar(MyString *str, char ch)//尾部插入字符
{

	if (MyStrLen(str->p)+1==str->reallength)//缓冲区满了
	{
		str->p = (char *)realloc(str->p, str->reallength + 1);
		//str->reallength++;
		//str->p[str->reallength-2] = ch;//插入字符
		//str->p[str->reallength -1] = '\0';//补全'\0'
		
		str->p[str->reallength-1] = ch;//插入字符 
		//末尾是'\0'
		str->p[str->reallength ] = '\0';//补全'\0'
		str->reallength++;
	}
	else//缓冲区没有满
	{
		int nowlen = MyStrLen(str->p);//求出当前字符串长度
		str->p[nowlen] = ch;//插入字符
		str->p[nowlen+1] = '\0';//补全'\0'
	}


}


void BackAddStr(MyString *str, char *newstr)//尾部插入字符窜
{
	int len1 = MyStrLen(str->p);
	int len2 = MyStrLen(newstr);
	if (len1+len2+1>str->reallength)//越界
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

void RunStr(MyString *str)//执行字符串
{
	system(str->p);//执行指令
}

char *FindFirstChr(MyString *str, char ch)//查找第一个字符并返回地址
{

	//char *p = strchr(str->p, ch);//系统函数
	char *p = MyStrChr(str->p, ch);
	return p;

}



//
//char *FindFirstStr(MyString *str, char *Sstr)//查找第一个匹配的字符串的并返回首地址
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
	return pres;//返回地址

}


int DelFirstChr(MyString *str, char const ch)//删除字符
{
	char *p = MyStrChr(str->p, ch);

	if (p==NULL)
	{
		return 0;//查找失败
	}
	else
	{
		char *pnext = p + 1;
		while (*pnext != '\0')//所匹配的字符后面的字符向前移动
		{
			*p = *pnext;
			p++;
			pnext++;

		}

		*p = '\0';
		return 1;

	}
	

}



int DelFirstStr(MyString *str, char const * const Sstr)//删除字符串
{
	char *p = MyStrstr(str->p, Sstr);

	if (p == NULL)
	{
		return 0;//查找失败
	}
	else
	{
		char *pnext = p + MyStrLen(Sstr);
		while (*pnext != '\0')//所匹配的字符后面的字符向前移动
		{
			*p = *pnext;
			p++;
			pnext++;

		}

		*p = '\0';
		return 1;
	}

}


void AddChr(MyString *str, char const  ch,char *pos)//任意位置增加字符
{

	if (pos == NULL || str == NULL)
	{
		return;
	}


	if (MyStrLen(str->p) + 1 == str->reallength)//缓冲区满了 字符长度(不包含'\0')+1('\0')
	{
		str->p = (char *)realloc(str->p, str->reallength + 1);//重新开辟空间并存储原数据
		int nowlen = MyStrLen(str->p);//字符串长度
		int movlen = MyStrLen(pos);//插入位置距末尾的距离
		for (int i = nowlen; i > nowlen - movlen; i--)//插入位置后面的字符向后移动
		{
			str->p[i] = str->p[i - 1];//轮询
		}
		str->p[nowlen - movlen] = ch;//插入
		str->p[nowlen + 1] = '\0';

	}
	else
	{
		int nowlen = MyStrLen(str->p);//字符串长度
		int movlen = MyStrLen(pos);//插入位置距末尾的距离
		for (int i = nowlen; i > nowlen-movlen; i--)//插入位置后面的字符向后移动
		{
			str->p[i] = str->p[i - 1];//轮询
		}
		str->p[nowlen - movlen] = ch;//插入
		str->p[nowlen + 1] = '\0';
	}


}



void AddStr(MyString *str, char const * const Sstr,char *pos)//任意位置增加字符串
{
	if (pos == NULL || str == NULL)
	{
		return;
	}


	int len1 = MyStrLen(str->p);
	int len2 = MyStrLen(Sstr);

	if (len1+len2+1>=str->reallength)//判断是否溢出
	{
		str->p = (char *)realloc(str->p, len1 + len2 + 1);//增加长度
		str->reallength = len1 + len2 + 1;//实际长度
		//插入位置距末尾的距离
		int movlen = MyStrLen(pos);//插入位置距末尾的距离
		
		for (int i = len1; i >=len1-movlen ; i--)////插入位置后面的字符向后移动
		{
			str->p[i + len2] = str->p[i];
		}

		for (int j = 0; j < len2; j++)//插入
		{
			str->p[len1 - len2 - 1 + j] = Sstr[j];
		}

	}
	else
	{

		for (int i = len1 - 1; i >= len1 - len2 - 1; i--)////插入位置后面的字符向后移动
		{
			str->p[i + len2] = str->p[i];
		}

		for (int j = 0; j < len2; j++)//插入
		{
			str->p[len1 - len2 - 1 + j] = Sstr[j];
		}

	}


}



void ReplaceChr(MyString *str, char const oldchr, char const newchr)//替换字符
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





//void ReplaceStr(MyString *str, const char * const  oldstr, const char * const newstr)//替换第一个所匹配的字符串
//{
//	char *fstr = FindFirstStr(str->p, oldstr);
//	if (fstr!=NULL)//找到目标字符串
//	{
//		DelFirstStr(str->p, oldstr);
//		AddStr(str->p, newstr,fstr);
//
//	}
//
//}

void ReplaceStr(MyString *string, const char * const  oldstring, const char * const newstring)//替换第一个所匹配的字符串
{
	char *pfind = FindFirstStr(string, oldstring);//找到位置
	if (pfind != NULL)
	{
		DelFirstStr(string->p, oldstring);
		AddStr(string->p, newstring,pfind);
	}


}