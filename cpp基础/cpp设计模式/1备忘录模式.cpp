#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Memo;

//备忘录模式:备忘录对象是一个用来存储另一个对象内部状态的快找对象
//在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态，这样就可以将以后的对象状态恢复到先前保存的状态。


//设计需要回放的软件,记录事物的状态

//设计备忘录模式三大步骤
//1、设计记录的节点,用于记录		//记录鼠标、键盘的状态
//2、用于记录的存储,vector,list,map,set,数，图，链表,数组。。。。
//3、操作记录的类


//备忘录类
class Memo
{
public:
	string state;

	Memo(string strState)//记录当前状态
	{
		state = strState;
	}
};



//发起人的类
class Originator
{
public:
	string state;

public:

	void SetMemo(Memo* memo)//设置备忘录
	{
		state = memo->state;
	}

	Memo* CreateMemo()//创建备忘录
	{
		return new Memo(state);
	}



	void Show()
	{
		cout << "状态：" << state << endl;
	}



};





//管理者类
class Caretaker
{
public:
	vector<	Memo* >memo;

public:

	void save(Memo * memo)
	{
		(this->memo).push_back(memo);
	}

	Memo * getState(int i)
	{
		return this->memo[i];
	}


};





//客户端：
int main1()
{
	Originator* on = new Originator();
	on->state = "on";
	on->Show();

	Caretaker* c = new Caretaker();
	c->memo.push_back(on->CreateMemo());

	on->state = "off";//改变状态
	on->Show();


	on->SetMemo(c->memo[0]);//还原
	on->Show();



	cin.get();
	return 0;
}
