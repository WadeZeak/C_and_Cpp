#include <string>
#include <iostream>



using namespace std;



//工厂模式 客户类和工厂类分开
//消费者任何时候需要某种产品,向工厂请求即可
//消费者无需修改就可以接纳新产品
//缺点就是当产品修改时,工厂类需要进行相应的修改,如 如何创建以及向客户提供


//基类存放数据
//派生类有多种,存放对数据的操作
//实现接口类,使用静态函数调用各种派生类

//简单工厂模式,一个操作对应一个类,数据没有抽离出来,对同样的数据实现不同的操作 处理场所一样
//工厂方法，对同样的数据实现不同的操作,处理场所不同
//抽象工厂类,对不同的数据实现不同的操作 处理的场所也不同




class COperation
{
public:
	//两个数据
	int m_nFirst;
	int m_nSecond;



	virtual double GetResult()//获取结果
	{
		double dResult = 0;
		return dResult;
	}
};





//加法
class AddOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst + m_nSecond;
	}
};



//减法
class SubOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst - m_nSecond;
	}
};


class mulOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst *m_nSecond;
	}
};

class divOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst / m_nSecond;
	}

};

//工厂类
class CCalculatorFactory
{
public:
	static COperation* Create(char cOperator);
};




COperation* CCalculatorFactory::Create(char cOperator)
{
	COperation *oper;
	//在C#中可以用反射来取消判断时用的switch，在C++中用什么呢？RTTI？？
	switch (cOperator)
	{
	case '+':
		oper = new AddOperation();
		break;
	case '-':
		oper = new SubOperation();
		break;

	case '*':
		oper = new mulOperation();
		break;
	case '/':
		oper = new divOperation();
		break;
	default:
	oper = new AddOperation();
		break;
	}
	return oper;
}




//客户端
int mainkkkk()
{
	double a, b;
	cin >> a >> b;
	COperation * op = CCalculatorFactory::Create('-');
	op->m_nFirst = a;
	op->m_nSecond = b;
	cout << op->GetResult() << endl;

	cin.get();

	cin.get();
	return 0;
}
