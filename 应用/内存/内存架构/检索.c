#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **pp;//�洢ָ������ĵ�ַ


//26669*4/1024=104KB �洢�ļ���ÿһ���ַ������׵�ַ
void intdatatomem(char *path,int num)
{
    pp = (char **)malloc(sizeof(char *)*num);//����ָ������
	FILE *pf;
	pf = fopen(path, "r");//����ȡ��ʽ�� fopen()��������ȫ
	if (pf == NULL)
	{
		printf("Fail");
		return -1;//�ļ���ȡʧ��
	}

	else
	{

		for (int i = 0; i < num; i++)
		{
			char str[200] = {0};//��ȡ�ַ����Ļ�����
			fgets(str, 200, pf);//���ļ������ж�ȡ�ַ���
			int strlength = strlen(str)+1;//��ȡ�ַ������ȣ�+1ԭ��洢'\0'
			char *px = (char *)malloc(sizeof(char)*strlength);//�����ڴ�洢�ַ���
			strcpy(px, str);//�����ַ���,����'\0'��ֹ
			px[strlength - 1] = '\0';//������ֹ����'\0'
			pp[i]=px;//�洢�ַ������׵�ַ
		}

		printf("�����ڴ�ɹ�\n");
		fclose(pf);
	}
	

}


int getfilesize(char *path)
{
	FILE *pf;
	pf = fopen(path,"r");//����ȡ��ʽ�� fopen()��������ȫ
	if (pf == NULL)
	{
		return -1;//�ļ���ȡʧ��
	}
	else
	{
		fseek(pf, 0, SEEK_END);//�ļ�ָ���ƶ����ļ�ĩβ
		int num = ftell(pf);//�ļ���ͷ���ļ�ָ�뵱ǰλ�õ��ֽ�
		fclose(pf);//�ر��ļ�
		return num;//429997
	}
}


int getn(char *path)
{

	FILE *pf;
	pf = fopen(path, "r");//����ȡ��ʽ�� fopen()��������ȫ
	if (pf == NULL)
	{
		return -1;//�ļ���ȡʧ��
	}
	else
	{
		int i = 0;
		while (!feof(pf))//�ж��ļ��Ƿ񵽴�ĩβ,û�е���ĩβ����0,���򷵻�1
		{
			char str[200];
			fgets(str, 200, pf);//��ȡ�ļ���һ��
			i++;//����,�ļ��ж�����
		}
		fclose(pf);
		return i;//26669
	}
}





char *findstr(char *searchstr,int rownum)
{

	for (int   i= 0; i < rownum; i++)//��������ָ���ַ�������ַ�������
	{
		char *ptemp = strstr(pp[i], searchstr);//û���ҵ�Ŀ���ַ���,����NULL
		if (ptemp != NULL)
		{
			printf("%p,%d,%s\n", pp[i], i,pp[i]);
			
			//return pp[i];
		}
	}
	/*printf("û���ҵ�!!!\n");
	return NULL;*/
}




void main()
{
	char *path = "C:\\Users\\Zeak_K\\Desktop\\key.txt"; 
	//int size = getfilesize(path);
	//printf("%dByte,%fKB,%fMB\n", size, size / 1024.0, size / (1024.0*1024.0));
	//printf("��%d��\n", getn(path));

	int rownum = getn(path);
	intdatatomem(path, rownum);

	char searchstr[100] = { 0 };//��Ҫ��ѯ���ַ���
	scanf("%s", searchstr);
	char *p = findstr(searchstr, rownum);
	system("pause");

}