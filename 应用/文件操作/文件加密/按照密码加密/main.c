#include"�������.h"



//�ı���ʽ �����ַ��洢
//������ ֱ�Ӱ��ն����ƴ��


void main()
{
	
	//char str[] = "abcdefgh \n ijk";
	//char *key = "123";
	//printf("%s\n",EncryptStr(key, str));
	//printf("%s\n", EncryptStr(key, str));
	
	

	char *path = "C:\\Users\\Zeak_K\\Desktop\\�ʼ�3.txt";
	char *enpath = "C:\\Users\\Zeak_K\\Desktop\\entext.txt";
	char *depath = "C:\\Users\\Zeak_K\\Desktop\\detext.txt";
	EncryptFile(path, enpath, "ABCD");
	DecryptFile(enpath, depath, "ABCD");

	//int filesize=GetFileSize(path);
	//printf("%d\n", filesize);
	system("pause");
}