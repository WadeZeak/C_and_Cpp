#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

//���ܷ�ʽ
//���չ̶�ģʽ����
//�����������



//�����ֽڵķ�ʽ����
char EncryAlgo(char chr)
{

	//return chr + 1;
	return chr ^123;
}


char DecryAlgo(char chr)
{

	//return chr -1;
	
	return chr ^ 123;
}



//�ļ�ĩβ��'?' ��'\0'����ʧ��


void Decrypt(char *enpath, char *depath)//����
{
	

	FILE *pfr, *pfw;
	pfr = fopen(enpath, "r");//��ȡ�����ļ�
	pfw = fopen(depath, "w");
	if (pfr == NULL || pfw == NULL)//�ļ���ʧ��
	{

		printf("�ļ���ʧ��!!");
		return;
	}
	else
	{

		while (!feof(pfr))
		{
			char chr = fgetc(pfr);
			putchar(chr);
			fputc(DecryAlgo(chr), pfw);//����ܵ��ļ���д����ܺ���ַ�

		}
	}
	fclose(pfr);
	fclose(pfw);


}


void Encrypt(char *path,char *enpath)//����
{

	FILE *pfr, *pfw;
	pfr = fopen(path, "r");//��ȡԭ�ļ�
	pfw = fopen(enpath, "w");//д����ܺ������
	if (pfr == NULL||pfw==NULL)//�ļ���ʧ��
	{

		printf("�ļ���ʧ��!!");
		return;
	}
	else
	{

		while (!feof(pfr))
		{
		char chr=fgetc(pfr);
		putchar(chr);
		fputc(EncryAlgo(chr), pfw);//������ļ���д����ܺ���ַ�

		}
	}
	fclose(pfr);
	fclose(pfw);

}



void main()
{

	char *path = "C:\\Users\\Zeak_K\\Desktop\\text.txt";
	char *enpath = "C:\\Users\\Zeak_K\\Desktop\\entext.txt";
	char *depath = "C:\\Users\\Zeak_K\\Desktop\\detext.txt";

	Encrypt(path, enpath);
	printf("\n\n\n--------------------------------------------------------------------------\n\n\n");
	Decrypt(enpath,depath); 

	system("pause");
}


void main1()
{
	FILE *pfr;//�ļ��ṹ��ָ��
	char *path = "C:\\Users\\Zeak_K\\Desktop\\text.txt";
	pfr = fopen(path, "r");
	if (pfr == NULL)
	{
		printf("�ļ���ʧ��!!");
	}
	else
	{
		while (!feof(pfr))//�����ļ�ĩβ���ط�0
		{
			char chr=fgetc(pfr);//���ļ��ж�ȡһ���ַ�
			putchar(chr);//����ַ�
		}	
	}

	rewind(pfr);//�ļ�ָ��ص��ļ���ͷ

	printf("\n\n\n--------------------------------------------------------------------------\n\n\n");
	while (!feof(pfr))//�����ļ�ĩβ���ط�0
	{
		char chr = fgetc(pfr);//���ļ��ж�ȡһ���ַ�
		putchar(chr+1);//��λ���ܺ����
	}


	fclose(pfr);//�ر��ļ�

	system("pause");
}