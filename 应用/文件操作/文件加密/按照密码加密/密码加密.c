#include"密码加密.h"



int GetFileSize(char *path)//获取文件大小
{
	FILE *pf;
	pf = fopen(path, "r");
	if (pf==NULL)
	{
		return -1;
	}
	else
	{
		fseek(pf, 0, SEEK_END);//文件指针移动到末尾
		int len = ftell(pf);
		return len;
	}

}




//异或加密
char * EncryptStr(char *key, char *str)//字符串加密
{
	int keylen = strlen(key);//获取秘钥长度
	int strlength = strlen(str);//获取字符串长度
	if (strlength%keylen==0)
	{
		int num =  strlength/keylen;//循环次数
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//对字符逐个加密
			{
				str[keylen*i + j] ^= key[j];
			}
		}
	}
	else
	{
		int num = strlength / keylen;//循环次数
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//对字符逐个加密
			{
				str[keylen*i + j] ^= key[j];
			}
		}

		int lastlen = strlength%keylen;//剩下的长度


		for (int i = 0; i <lastlen; i++)
		{
			str[keylen*num  + i] ^= key[i];
		}
	}
	
	return str;

}




//异或解密
char * DecryptStr(char *key, char * str)//字符串解密
{

	int keylen = strlen(key);//获取秘钥长度
	int strlength = strlen(str);//获取字符串长度
	if (strlength%keylen == 0)
	{
		int num = strlength / keylen;//循环次数
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//对字符逐个加密
			{
				str[keylen*i + j] ^= key[j];
			}
		}
	}
	else
	{
		int num = strlength / keylen;//循环次数
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//对字符逐个加密
			{
				str[keylen*i + j] ^= key[j];
			}
		}

		int lastlen = strlength%keylen;//剩下的长度


		for (int i = 0; i <lastlen; i++)
		{
			str[keylen*num + i] ^= key[i];
		}
	}

	return str;

}


void EncryptFile(char *path, char *enpath, char *key)//文件加密
{

	FILE *pfr, *pfw;
	pfr = fopen(path, "r");
	pfw = fopen(enpath, "w");
	if (pfr==NULL||pfw==NULL)
	{
		printf("文件打开失败!!!");
		fclose(pfr);
		fclose(pfw);
		return;
	}
	else
	{
		//while (!feof(pfr))
		//{
		//char str[256] = { 0 };//初始化
		////越过或者小与缓冲区，会出现错误,稳妥的方法是按照字符解析
		//fgets(str, 256, pfr);//读取文件的一行
		////将'\n'也进行加密。。导致文件解密出错
		//EncryptStr(key, str);//加密
		//fputs(str, pfw);//写入加密后的文件
//}
		int filesize = GetFileSize(path);
		//int keylen = strlen(key);
		char *str = (char *)malloc(sizeof(char)*(filesize+1));
		for (int i = 0; i < filesize; i++)
		{
			char chr = fgetc(pfr);
			//putchar(chr);
			str[i] = chr;//不断存入字符
		}

		str[filesize] = '\0';//字符串末尾补上'\0'
		EncryptStr(key, str);


		for (int  i = 0; i < filesize+1; i++)//打印到文件中
		{
			fputc(str[i],pfw);
		}

		fclose(pfr);
		fclose(pfw);
	}

}



void  DecryptFile(char *enpath, char *depath, char * key)//文件解密
{


	FILE *pfr, *pfw;
	pfr = fopen(enpath, "r");
	pfw = fopen(depath, "w");
	if (pfr == NULL || pfw == NULL)
	{
		printf("文件打开失败!!!");
		fclose(pfr);
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(enpath);
		//int keylen = strlen(key);
		char *str = (char *)malloc(sizeof(char)*(filesize + 1));
		for (int i = 0; i < filesize; i++)
		{
			char chr = fgetc(pfr);
			//putchar(chr);
			str[i] = chr;//不断存入字符
		}

		str[filesize] = '\0';//字符串末尾补上'\0'
		EncryptStr(key, str);


		for (int i = 0; i < filesize + 1; i++)//打印到文件中
		{
			fputc(str[i], pfw);
		}

		fclose(pfr);
		fclose(pfw);
	}

}