#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<Windows.h>
#include<string>
#include<memory>
#include<stdio.h>

using namespace std;


//面向对象的模式
//C语言无法实现函数与数据有机的统一成一个整体
//C++可以实现函数与数据成为一个有机整体 


//C语言可以实现代码重用，花费的代价很大,通过该函数实现代码重用
//C语言实现封装的核心也是函数


//类的继承实现代码重用
//类的封装实现权限管理
//类实现代码与数据合为一体
//类的多态,一个接口根据实际需求完成很多不同的功能


//封装可以实现代码的权限，不能随意调用
//C语言可以实现函数跨文件使用,而C++不可以

//封装可以锁定数据的权限，避免数据被随意修改


//继承可以实现保持原有功能的同时,功能的扩展

//C++的核心是类
class CmdUser
{
private:
	char cmduser[100];//用户
	char cmd[100];//指令
public:
	void SetUser(const char *username)//用户接口
	{
		strcpy(this->cmduser, username);
	}

	char *GetUser()//返回用户名
	{
		return this->cmduser;
	}


	void OpenPro(const char *exe, int mode)//打开进程 mode 模式
	{
		ShellExecuteA(0, "open", exe, 0, 0, mode);
	}

	void AllProcess()
	{
		system("tasklist");
	}


	void CloseProcessbByName(const char *name)//通过名称关闭应用
	{
		memset(this->cmd, 0, 100);//0-->'\0'
		sprintf(this->cmd, "taskkill /f /im %s", name);//拼接成命令
		system(this->cmd);
	}

	void CloseProcessbByPID(const int pid)//通过进程号(PID)关闭应用
	{
		memset(this->cmd, 0, 100);//清空字符串
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



class //匿名的类
{
public:
	void seta(int a)//访问私有数据的接口 限定写的权限
	{
		this->a = a;
	}

	int geta()//限定读的权限
	{
		return this->a;
	}

	void setb(int b)//访问私有数据的接口
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
	char passwd[100];//密码
}Complex;


void main()
{

	Complex.seta(10);
	Complex.setb(20);
	cout <<"a=" <<Complex.geta() << endl;
	cout << "b=" << Complex.getb() << endl;

	cin.get();
}


//封装可以实现代码与数据的一体化
//代码的封装可以限定代码执行的权限
//数据的封装可以避免数据意外修改

