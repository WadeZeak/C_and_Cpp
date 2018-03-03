#include<iostream>

using namespace std;

//����ģʽ:����ģʽ�����һ���㷨,��ÿһ���㷨��װ�����й�ͬ�ӿڵĶ���������,�Ӷ�ʹ���ǿ����໥�滻
//���Կ���ʹ���㷨�ڲ�Ӱ��ͻ��˵�����·����仯
//����ģʽ�ѻ�������Ϊ�ֿ�,��������ά�ֺͲ�ѯ��Ϊ��,�����㷨�ھ���Ĳ������е�����
//�����㷨�뻷���ֿ�,�����㷨������,������Ӱ�쵽������ͻ���




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

//���Ծ����ࡪ�ӷ���
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

//�ͻ���
int main3333()
{
	int a, b;
	char c;
	cin >> a >> b;
	cout << "�������������";
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



//���Եĳ�����,�ӿ�,�������ָ����Է������е��������.(���麯��)
//ʵ�ָ��ֲ���,���ֲ��Ե�ʵ�ֶ�����̳г�����
//���Ե����ýӿ�,���ò�ͬ�Ĳ���

class CashSuper
{

public:

	virtual double acceptMoney(double money) = 0;//������,��Ǯ�Ľӿ�

};


class CashNormal :public CashSuper//������Ǯ
{

public:

	double acceptMoney(double money)
	{
		return money;
	}


};



class CashRebate :public CashSuper//����
{

private:
	double discount;

public:
	CashRebate(double dis)//�ۿ�
	{

		discount = dis;
	}

	double acceptMoney(double money)//��Ǯ
	{
		return money*discount;
	}


};

class CashReturn:public CashSuper//����ģʽ
{
private:
	double moneyCondition;//��Ҫ����Ļ���
	double moneyReturn;//���ص�RMB

public:

	CashReturn(double cm, double cr)//���Ѷ���,��������
	{
		 moneyCondition=cm;
		 moneyReturn=cr;
	}


	double acceptMoney(double money)
	{

		double result = money;

		if (money >= moneyCondition)//������������
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
	CashContext(string str)//���ò���
	{

		if (str=="�����շ�")
		{
			cs = new CashNormal();
		}
		else if (str=="��9��")
		{
			cs = new CashRebate(0.9);
		}
		else if (str == "��1000��200")
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
	CashContext *cc = new CashContext("��9��");
	cout<<	cc->getResult(money);
	cin.get();
	return 0;


}