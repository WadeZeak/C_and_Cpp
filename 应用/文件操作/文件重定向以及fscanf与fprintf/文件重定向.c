#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



void main1()
{

	char str[100] = { 0 };
	scanf("%s", str);
	printf("str=%s\n", str);
	system(str);

}


void main2()
{


	char str[100] = { 0 };
	fscanf(stdin,"%s", str);
	fprintf(stdout,"str=%s\n", str);
	system(str);

}



void main3()
{
	char *path = "C:\\Users\\Zeak_K\\Desktop\\1.txt ";
	char cmd[100] = { 0 };
	printf("input cmd:\n");
	scanf("%s", cmd);
	int num=0;
	printf("input num:\n");
	scanf("%d", &num);
	FILE *pf;
	pf = fopen(path, "w");
		if (pf==NULL)
		{
			printf("文件打开失败!!!");

		}
		else
		{

			fprintf(pf, "for /l %%i in  (1,1,%d) do %s",num,cmd );
			fclose(pf);

		}

}


void main()
{
	char *path = "C:\\Users\\Zeak_K\\Desktop\\1.txt ";
	char cmd[100] = { 0 };
	int num = 0;
	FILE *pf;
	pf = fopen(path, "r");

	if (pf == NULL)
	{
		printf("文件打开失败!!!");
	}
	else
	{
		fscanf(pf, "for /l %%i in  (1,1,%d) do %s", &num, cmd);//精确提取数据
		printf("num=%d\ncmd=%s\n", num, cmd);
	}

	system("pause");
}






