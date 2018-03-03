#include<iostream>

using namespace std;

//策略模式:策略模式针对于一组算法,将每一个算法封装到具有共同接口的独立的类中,从而使他们可以相互替换
//策略可以使得算法在不影响客户端的情况下发生变化
//策略模式把环境与行为分开,环境负责维持和查询行为类,各种算法在具体的策略类中的体现
//由于算法与环境分开,所以算法的增减,都不会影响到环境与客户端




class COperation
{
public:
	int m_nFirst;
	int m_nSecond;
	virtual double GetResult()
	{
		double dResult = 0;
		return dResult;
	}
};

//策略具体类—加法类
class AddOperation : public COperation
{
public:
	AddOperation(int a, int b)
	{
		m_nFirst = a;
		m_nSecond = b;
	}
	virtual double GetResult()
	{
		return m_nFirst + m_nSecond;
	}
};

class Context
{
private:
	COperation* op;
public:
	Context(COperation* temp)
	{
		op = temp;
	}
	double GetResult()
	{
		return op->GetResult();
	}
};

//客户端
int main3333()
{
	int a, b;
	char c;
	cin >> a >> b;
	cout << "请输入运算符：";
	cin >> c;
	switch (c)
	{
	case '+ ':
	{
	Context *context = new Context(new AddOperation(a, b));
	cout << context->GetResult() << endl;
	break;
	}
	default:		
		break;
	}
	return 0;
}




/*--------------------------------------------------------------------------------------------------------*/



//策略的抽象类,接口,抽象类的指针可以访问所有的子类对象.(纯虚函数)
//实现各种策略,各种策略的实现都必须继承抽象类
//策略的设置接口,设置不同的策略

class CashSuper
{

public:

	virtual double acceptMoney(double money) = 0;//抽象类,收钱的接口

};


class CashNormal :public CashSuper//正常收钱
{

public:

	double acceptMoney(double money)
	{
		return money;
	}


};



class CashRebate :public CashSuper//打折
{

private:
	double discount;

public:
	CashRebate(double dis)//折扣
	{

		discount = dis;
	}

	double acceptMoney(double money)//收钱
	{
		return money*discount;
	}


};

class CashReturn:public CashSuper//返款模式
{
private:
	double moneyCondition;//需要满足的花销
	double moneyReturn;//返回的RMB

public:

	CashReturn(double cm, double cr)//花费多少,返还多少
	{
		 moneyCondition=cm;
		 moneyReturn=cr;
	}


	double acceptMoney(double money)
	{

		double result = money;

		if (money >= moneyCondition)//花销满足条件
		{
			result = money - floor(money / moneyCondition)*moneyReturn;
		}
		return result;

	}


};



class CashContext
{

private:
	CashSuper *cs;

public:
	CashContext(string str)//设置策略
	{

		if (str=="正常收费")
		{
			cs = new CashNormal();
		}
		else if (str=="打9折")
		{
			cs = new CashRebate(0.9);
		}
		else if (str == "满1000送200")
		{
			cs = new CashReturn(1000,200);
		}
	}


	double getResult(double money)
	{
		return cs->acceptMoney(money);
	}

};




int main3()
{

	double money = 1000;
	CashContext *cc = new CashContext("打9折");
	cout<<	cc->getResult(money);
	cin.get();
	return 0;


}