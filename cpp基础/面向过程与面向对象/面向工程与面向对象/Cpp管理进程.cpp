#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<Windows.h>
#include<string>
#include<memory>
#include<stdio.h>

using namespace std;


//��������ģʽ
//C�����޷�ʵ�ֺ����������л���ͳһ��һ������
//C++����ʵ�ֺ��������ݳ�Ϊһ���л����� 


//C���Կ���ʵ�ִ������ã����ѵĴ��ۺܴ�,ͨ���ú���ʵ�ִ�������
//C����ʵ�ַ�װ�ĺ���Ҳ�Ǻ���


//��ļ̳�ʵ�ִ�������
//��ķ�װʵ��Ȩ�޹���
//��ʵ�ִ��������ݺ�Ϊһ��
//��Ķ�̬,һ���ӿڸ���ʵ��������ɺܶ಻ͬ�Ĺ���


//��װ����ʵ�ִ����Ȩ�ޣ������������
//C���Կ���ʵ�ֺ������ļ�ʹ��,��C++������

//��װ�����������ݵ�Ȩ�ޣ��������ݱ������޸�


//�̳п���ʵ�ֱ���ԭ�й��ܵ�ͬʱ,���ܵ���չ

//C++�ĺ�������
class CmdUser
{
private:
	char cmduser[100];//�û�
	char cmd[100];//ָ��
public:
	void SetUser(const char *username)//�û��ӿ�
	{
		strcpy(this->cmduser, username);
	}

	char *GetUser()//�����û���
	{
		return this->cmduser;
	}


	void OpenPro(const char *exe, int mode)//�򿪽��� mode ģʽ
	{
		ShellExecuteA(0, "open", exe, 0, 0, mode);
	}

	void AllProcess()
	{
		system("tasklist");
	}


	void CloseProcessbByName(const char *name)//ͨ�����ƹر�Ӧ��
	{
		memset(this->cmd, 0, 100);//0-->'\0'
		sprintf(this->cmd, "taskkill /f /im %s", name);//ƴ�ӳ�����
		system(this->cmd);
	}

	void CloseProcessbByPID(const int pid)//ͨ�����̺�(PID)�ر�Ӧ��
	{
		memset(this->cmd, 0, 100);//����ַ���
		sprintf(this->cmd, "taskkill /pid  %d ", pid);
		system(this->cmd);
	}

};


void main1()
{
	CmdUser user;
	user.SetUser("Tom");
	char *name = user.GetUser();
	cout << "username="<<name << endl;
	user.OpenPro("calc",1);
	Sleep(2000);
	user.AllProcess();
	user.CloseProcessbByName("Calculator.exe");

	user.OpenPro("notepad", 1);
	int pid;
	cin >> pid;

	user.CloseProcessbByPID(pid);
	system("pause");

	/*cin.get();
	cin.get();*/
}



class //��������
{
public:
	void seta(int a)//����˽�����ݵĽӿ� �޶�д��Ȩ��
	{
		this->a = a;
	}

	int geta()//�޶�����Ȩ��
	{
		return this->a;
	}

	void setb(int b)//����˽�����ݵĽӿ�
	{
		this->b = b;
	}

	int getb()
	{
		return this->b;
	}

private:
	int a;
	int b;
	char passwd[100];//����
}Complex;


void main()
{

	Complex.seta(10);
	Complex.setb(20);
	cout <<"a=" <<Complex.geta() << endl;
	cout << "b=" << Complex.getb() << endl;

	cin.get();
}


//��װ����ʵ�ִ��������ݵ�һ�廯
//����ķ�װ�����޶�����ִ�е�Ȩ��
//���ݵķ�װ���Ա������������޸�

