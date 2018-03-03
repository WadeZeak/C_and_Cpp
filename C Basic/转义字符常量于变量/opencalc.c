#define _CRT_SECURE_NO_WARNINGS//关闭安全检查

#include<stdio.h>
#include<stdlib.h>
//#include<windows.h>
void main()
{
	//char str[50]="calc";
	char str[50] ;//作为缓冲区，字符串长度为50 字节
	//sprintf(str, "%s", "calc");//将字符串映射到变量，进行初始化
	
	//截取
	//sprintf(str,"%s%s","ca","lc");
	
	//字符
	//sprintf(str, "%c%c%c%c", 'c', 'a','l','c');
	
	//ASCII
	//sprintf(str, "%c%c%c%c", 99, 97, 108, 99);

	//OTC
	//sprintf(str, "%c%c%c%c", 0143, 0141, 0154, 0143);
	
	//HEX
	sprintf(str, "%c%c%c%c", 0x63, 0x61,0x6C, 0x63);
    printf(str);
	system(str);
	system("pause");
}