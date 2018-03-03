#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//cmd命令
//tasklist > 1.txt 将tasklist执行的结果保存为1.txt

char execcmd(char *in,char *out)
{
	//_popen()  如果调用 fork() 或 pipe() 失败，或者不能分配内存将返回NULL，否则返回标准 I/O 流。
	FILE *pipe = _popen(in, "r");//读取
	char buffer[128] = { 0 };
	if (!pipe)//管道创建为空，返回0
	{
		return 0;
	}
	//feof() 如果遇到文件结束，返回值为非零值，否则为0。
	while (!feof(pipe))//判断文件是否结束
	{
		if (fgets(buffer, 128, pipe));//读取每一行的数据
		{
			strcat(out, buffer);//字符串结束必须有\0
		}
	}
	_pclose(pipe);//关闭管道
	return 1;

}

void mainxx()
{
	char CMDin[50] = {0};//输入的指令
	char CMDout[40960] = {0};//输出的结果
	scanf("%s", CMDin);//扫面输入
	execcmd(CMDin, CMDout);//获取结果
	printf("命令执行的结果:\n%s", CMDout);//打印结果
	printf("\n%x", CMDout);
	//system(CMDin);

	system("pause");
}