#include <iostream>
#include <string>
#include <vector>
using namespace std;



//命令模式:命令模式把一个操作或者请求封装到一个对象中
//命令模式把放出命令的责任和执行命令的责任分隔开,委派给不同的对象
//命令模式允许将请求的一方与发送的一方独立开来,使得请求的一方不必知道接收请求一方
//的接口,更不必知道请求是怎么被接收的,以及操作是否被执行,何时被执行以及怎么被执行的
//系统支持命令的撤销







//烤肉师傅
class Barbucer
{
public:
	void MakeMutton()
	{
		cout << "烤羊肉" << endl;
	}
	void MakeChickenWing()
	{
		cout << "烤鸡翅膀" << endl;
	}
};

//抽象命令类
class Command//执行命令类
{
protected:
	Barbucer* receiver;//类的包含
public:
	Command(Barbucer* temp)//接收命令
	{
		receiver = temp;
	}
	virtual void ExecuteCmd() = 0;
};

//烤羊肉命令
class BakeMuttonCmd : public Command // 传送命令的类
{
public:
	BakeMuttonCmd(Barbucer* temp) : Command(temp){}
	virtual void ExecuteCmd()
	{
		receiver->MakeMutton();
	}
};

//烤鸡翅
class ChickenWingCmd : public Command
{
public:
	ChickenWingCmd(Barbucer* temp) : Command(temp){}

	virtual void ExecuteCmd()
	{
		receiver->MakeChickenWing();
	}
};

//服务员类
class Waiter
{
protected:
	vector<Command*> m_commandList;//给多个对象传递命令
public:
	void SetCmd(Command* temp)
	{
		m_commandList.push_back(temp);
		cout << "增加定单" << endl;
	}

	//通知执行
	void Notify()
	{
		vector<Command*>::iterator p = m_commandList.begin();
		while (p != m_commandList.end())
		{
			(*p)->ExecuteCmd();
			p++;
		}
	}
};



//客户端
int main466467()
{
	//店里添加烤肉师傅、菜单、服务员等顾客
	Barbucer* barbucer = new Barbucer();
	Command* cmd = new BakeMuttonCmd(barbucer);
	Command* cmd2 = new ChickenWingCmd(barbucer);



	Waiter* girl = new Waiter();
	//点菜
	girl->SetCmd(cmd);
	girl->SetCmd(cmd2);
	//服务员通知
	girl->Notify();
	return 0;
}

