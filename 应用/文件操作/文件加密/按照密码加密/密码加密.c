#include"�������.h"



int GetFileSize(char *path)//��ȡ�ļ���С
{
	FILE *pf;
	pf = fopen(path, "r");
	if (pf==NULL)
	{
		return -1;
	}
	else
	{
		fseek(pf, 0, SEEK_END);//�ļ�ָ���ƶ���ĩβ
		int len = ftell(pf);
		return len;
	}

}




//������
char * EncryptStr(char *key, char *str)//�ַ�������
{
	int keylen = strlen(key);//��ȡ��Կ����
	int strlength = strlen(str);//��ȡ�ַ�������
	if (strlength%keylen==0)
	{
		int num =  strlength/keylen;//ѭ������
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//���ַ��������
			{
				str[keylen*i + j] ^= key[j];
			}
		}
	}
	else
	{
		int num = strlength / keylen;//ѭ������
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//���ַ��������
			{
				str[keylen*i + j] ^= key[j];
			}
		}

		int lastlen = strlength%keylen;//ʣ�µĳ���


		for (int i = 0; i <lastlen; i++)
		{
			str[keylen*num  + i] ^= key[i];
		}
	}
	
	return str;

}




//������
char * DecryptStr(char *key, char * str)//�ַ�������
{

	int keylen = strlen(key);//��ȡ��Կ����
	int strlength = strlen(str);//��ȡ�ַ�������
	if (strlength%keylen == 0)
	{
		int num = strlength / keylen;//ѭ������
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//���ַ��������
			{
				str[keylen*i + j] ^= key[j];
			}
		}
	}
	else
	{
		int num = strlength / keylen;//ѭ������
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < keylen; j++)//���ַ��������
			{
				str[keylen*i + j] ^= key[j];
			}
		}

		int lastlen = strlength%keylen;//ʣ�µĳ���


		for (int i = 0; i <lastlen; i++)
		{
			str[keylen*num + i] ^= key[i];
		}
	}

	return str;

}


void EncryptFile(char *path, char *enpath, char *key)//�ļ�����
{

	FILE *pfr, *pfw;
	pfr = fopen(path, "r");
	pfw = fopen(enpath, "w");
	if (pfr==NULL||pfw==NULL)
	{
		printf("�ļ���ʧ��!!!");
		fclose(pfr);
		fclose(pfw);
		return;
	}
	else
	{
		//while (!feof(pfr))
		//{
		//char str[256] = { 0 };//��ʼ��
		////Խ������С�뻺����������ִ���,���׵ķ����ǰ����ַ�����
		//fgets(str, 256, pfr);//��ȡ�ļ���һ��
		////��'\n'Ҳ���м��ܡ��������ļ����ܳ���
		//EncryptStr(key, str);//����
		//fputs(str, pfw);//д����ܺ���ļ�
//}
		int filesize = GetFileSize(path);
		//int keylen = strlen(key);
		char *str = (char *)malloc(sizeof(char)*(filesize+1));
		for (int i = 0; i < filesize; i++)
		{
			char chr = fgetc(pfr);
			//putchar(chr);
			str[i] = chr;//���ϴ����ַ�
		}

		str[filesize] = '\0';//�ַ���ĩβ����'\0'
		EncryptStr(key, str);


		for (int  i = 0; i < filesize+1; i++)//��ӡ���ļ���
		{
			fputc(str[i],pfw);
		}

		fclose(pfr);
		fclose(pfw);
	}

}



void  DecryptFile(char *enpath, char *depath, char * key)//�ļ�����
{


	FILE *pfr, *pfw;
	pfr = fopen(enpath, "r");
	pfw = fopen(depath, "w");
	if (pfr == NULL || pfw == NULL)
	{
		printf("�ļ���ʧ��!!!");
		fclose(pfr);
		fclose(pfw);
		return;
	}
	else
	{
		int filesize = GetFileSize(enpath);
		//int keylen = strlen(key);
		char *str = (char *)malloc(sizeof(char)*(filesize + 1));
		for (int i = 0; i < filesize; i++)
		{
			char chr = fgetc(pfr);
			//putchar(chr);
			str[i] = chr;//���ϴ����ַ�
		}

		str[filesize] = '\0';//�ַ���ĩβ����'\0'
		EncryptStr(key, str);


		for (int i = 0; i < filesize + 1; i++)//��ӡ���ļ���
		{
			fputc(str[i], pfw);
		}

		fclose(pfr);
		fclose(pfw);
	}

}