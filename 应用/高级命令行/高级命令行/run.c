#include<stdlib.h>

//����
void run1()
{
	system(" start notepad"); //���У�ͬʱִ��
	//system("notepad");//ִ��������Ժ���ִ����һ�д���
	system(" start calc");
	system(" start mspaint");
}

//����
void run2()
{
	system("notepad");
	system("calc");
	system("mspaint");
}

//�ػ��ƻ�
void run3()
{
	system("shutdown -s -t 600");//�ػ��ƻ���600S��10���ӣ���ػ�
	system("pause");
	system("shutdown -a");//ȡ���ػ��ƻ�
}

//��C��
void run4()
{
	//system("explorer.exe");//���ļ���Դ������
	system("explorer.exe  C:\\Program Files\\Baidu");//���ļ�Ŀ¼����Ҫ�����ļ���Դ����������
	// \\ �൱��\
	system("pause");
}

//�����ַ���ת�룬�ڴ򿪸����ļ�·��ʱ����Ҫ��\����б�ܣ�
void run5()
{

	system("\"E:\\Program Files\\����������PC��\\cloudmusic.exe\""); // \" �൱��" 
	system("pause");

}

//���ļ�
void run6()
{

    system("C:\\Users\\77386\Desktop\\Fck.html"); 
	//system("\"F:\\Program Files\\1.docx\"");
	system("pause");

}


void run7()
{

	//system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\"");//��IE
	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" www.qq.com");//��ָ����ҳ
	system("pause");

}


void run8()
{

	
	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" www.qq.com");//��ָ����ҳ
	system("pause");
	system("taskkill /f /lm iexplorer.exe");
}

void main()
{
	run8();
}