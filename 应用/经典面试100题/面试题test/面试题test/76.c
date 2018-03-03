#include<stdio.h>
#include<stdlib.h>
#include"assert.h"


char *strcpy(char * strDest, const char *strSrc)
{
	assert((strDest != NULL) && (strSrc != NULL));
	char *address = strDest;
	while ((*strDest++ = *strSrc++) != '\0')
		NULL;
	return address;



}


void main76()
{

	char str1[] = "Hello";
	char str2[] = "OK";
	strcpy(str1, str2);
	printf("%s\n", str1);
	system("pause");
}