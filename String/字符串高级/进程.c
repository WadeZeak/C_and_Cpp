#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//�ַ�������
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

	for (char *pall=allstr; *pall!=0; pall++)//ĸ�ַ����ı���
	{
		//printf("%c", *pall);
		char flag = 1;//��ʶ,�ٶ�str������allstr��
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
	FILE *pipe = _popen(in, "r");//��ȡ

	if (!pipe)	//�ܵ�����Ϊ�գ�����0
	{
		return 0;
	}

	while (!feof(pipe))	//�ж��ļ��Ƿ����
	{
		if (fgets(buffer, 128, pipe))	//��ȡÿһ�е�����
		{
			strcat(out, buffer);//�����ַ���
		}
	}

	_pclose(pipe);//�رչܵ�
	return 1;
}


void main()
{

	char CMDin[30] = "tasklist";//�鿴����
	 char CMDout[10240] = { 0 };	 //��������
	execmd(CMDin, CMDout);	//��ȡ���
	//char *p = strstr(CMDout,"QQ.exe");
	char *p = pstrstr(CMDout, "QQ.exe");

	if (p==NULL)
	{
		printf("QQ���̲�����!!\n");
	}
	else
	{
		printf("QQ���̴���!!\n");
	}
	system("pause");

}