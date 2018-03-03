#include"密码加密.h"



//文本方式 按照字符存储
//二进制 直接按照二进制存放


void main()
{
	
	//char str[] = "abcdefgh \n ijk";
	//char *key = "123";
	//printf("%s\n",EncryptStr(key, str));
	//printf("%s\n", EncryptStr(key, str));
	
	

	char *path = "C:\\Users\\Zeak_K\\Desktop\\笔记3.txt";
	char *enpath = "C:\\Users\\Zeak_K\\Desktop\\entext.txt";
	char *depath = "C:\\Users\\Zeak_K\\Desktop\\detext.txt";
	EncryptFile(path, enpath, "ABCD");
	DecryptFile(enpath, depath, "ABCD");

	//int filesize=GetFileSize(path);
	//printf("%d\n", filesize);
	system("pause");
}