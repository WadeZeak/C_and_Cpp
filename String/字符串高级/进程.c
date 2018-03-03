#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//字符串长度
int getlengthA(char *p)
{
	int num = 0;
	while (*p != '\0')
	{
		num++;
		p++;
	}

	return num;
}




char *pstrstr(char *allstr, char *str)
{
	
	char *p=NULL;

	for (char *pall=allstr; *pall!=0; pall++)//母字符串的遍历
	{
		//printf("%c", *pall);
		char flag = 1;//标识,假定str存在于allstr中
		for (char *pstr = str; *pstr != 0; pstr++)
		{
			if (*(pall + (pstr - str)) == '\0')
			{
				flag = 0;
				break;
			}
			if (*(pall+(pstr-str))!=*pstr)
			{
				flag = 0;
				break;
			}		 
		}

		if (flag == 1)
		{
			p = allstr;
			break;
		}
	}

	return p;
}



int  execmd(char *in, char *out)
{
	char buffer[128] = { 0 };
	FILE *pipe = _popen(in, "r");//读取

	if (!pipe)	//管道创建为空，返回0
	{
		return 0;
	}

	while (!feof(pipe))	//判断文件是否结束
	{
		if (fgets(buffer, 128, pipe))	//获取每一行的数据
		{
			strcat(out, buffer);//连接字符串
		}
	}

	_pclose(pipe);//关闭管道
	return 1;
}


void main()
{

	char CMDin[30] = "tasklist";//查看进程
	 char CMDout[10240] = { 0 };	 //输出的语句
	execmd(CMDin, CMDout);	//获取结果
	//char *p = strstr(CMDout,"QQ.exe");
	char *p = pstrstr(CMDout, "QQ.exe");

	if (p==NULL)
	{
		printf("QQ进程不存在!!\n");
	}
	else
	{
		printf("QQ进程存在!!\n");
	}
	system("pause");

}