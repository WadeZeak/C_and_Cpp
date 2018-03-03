#include <iostream>
#include <string>
#include <vector>
using namespace std;



//桥接模式:将实现化与抽象化脱藕,使得二者可以独立的变化
//也就是说将它们之间的强联系变为弱联系
//也即是说在一个软件系统的抽象化和实现化之间实现组合
//聚合关系而不是继承关系,使得两者可以独立的变化

//聚集表示类与类之间的关系是整体与部分的关系

//组合


//将所有的接口组合起来,定制一个系统


//手机软件
class HandsetSoft
{
public:
	virtual void Run() = 0;
};



//游戏软件
class HandsetGame : public HandsetSoft
{
public:
	virtual void Run()
	{
		cout << "运行手机游戏" << endl;
	}
};



//通讯录软件
class HandSetAddressList : public HandsetSoft
{
public:
	virtual void Run()
	{
		cout << "手机通讯录" << endl;
	}
};



//手机品牌
class HandsetBrand
{
protected:
	HandsetSoft* m_soft;
public:
	void SetHandsetSoft(HandsetSoft* temp)
	{
		m_soft = temp;
	}
	virtual void Run() = 0;
};



//M品牌
class HandsetBrandM : public HandsetBrand
{
public:
	virtual void Run()
	{
		m_soft->Run();
	}
};



//N品牌
class HandsetBrandN : public HandsetBrand
{
public:
	virtual void Run()
	{
		m_soft->Run();
	}
};



//品牌+软件=手机

//客户端
int main1111111111111111()
{
	HandsetBrand *brand;//手机品牌
	brand = new HandsetBrandM();//M品牌

	brand->SetHandsetSoft(new HandsetGame());//游戏软件
	brand->Run();

	brand->SetHandsetSoft(new HandSetAddressList());//通信录软件
	brand->Run();
	cin.get();
	return 0;
}
