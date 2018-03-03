#include <iostream>
#include <string>
#include <vector>
using namespace std;

//责任链模式:在责任链模式中，很多对象由每一个对象对其下家的引用而接起来形成一条链
//请求在这条链上传递，知道链上某一个对象处理该请求
//客户不需要知道链上的拿了一个对象处理的这个请求，系统可以在不影响客户端的情况
//下重新组织链和分配任务。处理者有两个选择，承担责任或者将它推给下家。
//一个请求可以最终不被任何接收端对象接收



//请求
class Request
{
public:
	string RequestType;
	string RequestContent;
	int m_nNumber;
};


//管理者
class Manager
{
protected:
	Manager* superior;//上一级的对象指针
	string name;
public:
	Manager(string temp)
	{
		name = temp;
	}
	void SetSuperior(Manager* temp)
	{
		superior= temp;
	}
	virtual void requestApplication(Request* request) = 0;
};



//经理
class CommonManager : public Manager
{
public:
	CommonManager(string strTemp) : Manager(strTemp){}
	virtual void requestApplication(Request* request)
	{
		if (request->RequestType == "请假" && request->m_nNumber<2)
		{
			cout << name << " " << request->RequestContent<<" "<<"数量" << request->m_nNumber << endl;
		}
		else
		{
			if (superior!=NULL)
			{
				superior->requestApplication(request);//向上级传递

			}
		}
	}
};




//总监
class MajorDomo : public Manager
{
public:
	MajorDomo(string name) : Manager(name){}

	virtual void requestApplication(Request* request)
	{
		if (request->RequestType == "请假" && request->m_nNumber<5)
		{
			cout << name << " " << request->RequestContent << " " << "数量" << request->m_nNumber << endl;
		}
		else
		{
			if (superior != NULL)
			{
				superior->requestApplication(request);

			}
		}
	}

};

class GeneraManager:public Manager//总经理
{

public:

	GeneraManager(string sname) :Manager(sname){}

	virtual void requestApplication(Request* request)
	{
	
			cout << name << " " << request->RequestContent << " " << "数量" << request->m_nNumber << endl;

	}


};



//客户端
int main88888888888888888()
{
	
	CommonManager *jingli = new CommonManager("经理");
	MajorDomo *zongjian = new  MajorDomo("总监");
	GeneraManager *zongjingli = new GeneraManager("总经理");

	jingli->SetSuperior(zongjian);
	zongjian->SetSuperior(zongjingli);


	//请求
	Request *request = new	Request();
	request->RequestType = "请假";
	request->m_nNumber = 1;
	request->RequestContent = "xxx请假";

	jingli->requestApplication(request);//经理处理请求

	request->m_nNumber = 4;
	jingli->requestApplication(request);


	request->m_nNumber = 10;
	jingli->requestApplication(request);


	cin.get();
	return 0;
}

