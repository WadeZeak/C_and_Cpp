#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//cmd����
//tasklist > 1.txt ��tasklistִ�еĽ������Ϊ1.txt

char execcmd(char *in,char *out)
{
	//_popen()  ������� fork() �� pipe() ʧ�ܣ����߲��ܷ����ڴ潫����NULL�����򷵻ر�׼ I/O ����
	FILE *pipe = _popen(in, "r");//��ȡ
	char buffer[128] = { 0 };
	if (!pipe)//�ܵ�����Ϊ�գ�����0
	{
		return 0;
	}
	//feof() ��������ļ�����������ֵΪ����ֵ������Ϊ0��
	while (!feof(pipe))//�ж��ļ��Ƿ����
	{
		if (fgets(buffer, 128, pipe));//��ȡÿһ�е�����
		{
			strcat(out, buffer);//�ַ�������������\0
		}
	}
	_pclose(pipe);//�رչܵ�
	return 1;

}

void mainxx()
{
	char CMDin[50] = {0};//�����ָ��
	char CMDout[40960] = {0};//����Ľ��
	scanf("%s", CMDin);//ɨ������
	execcmd(CMDin, CMDout);//��ȡ���
	printf("����ִ�еĽ��:\n%s", CMDout);//��ӡ���
	printf("\n%x", CMDout);
	//system(CMDin);

	system("pause");
}