#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//cpp�Ľṹ���п��Զ��庯��,��C�����԰���������ֻ�ܰ�������ָ��
struct Cmd
{
	char *p;

	/*void run()
	{
		system(p);
	}

	void print()
	{
		printf("%s\n",p);
	}*/
	void(*prun)(char *);
	void(*pprint)(char *);
};


void run(char *p)
{
	system(p);
}


void print(char *p)
{
	printf("%s\n", p);
}
 
struct NewCmd
{
	struct Cmd cmd;
	int(*pGetLen)(char *);
};

int Getlen(char *p)
{
	return  strlen(p);
}

void main()
{
	
	struct 	NewCmd newcmd = {"calc",run,print,Getlen};
		newcmd.cmd.prun(newcmd.cmd.p);
		newcmd.cmd.pprint(newcmd.cmd.p);
		printf("%d\n", newcmd.pGetLen(newcmd.cmd.p));
		system("pause");
	
}