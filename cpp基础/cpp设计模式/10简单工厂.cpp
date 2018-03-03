#include <string>
#include <iostream>



using namespace std;



//����ģʽ �ͻ���͹�����ֿ�
//�������κ�ʱ����Ҫĳ�ֲ�Ʒ,�򹤳����󼴿�
//�����������޸ľͿ��Խ����²�Ʒ
//ȱ����ǵ���Ʒ�޸�ʱ,��������Ҫ������Ӧ���޸�,�� ��δ����Լ���ͻ��ṩ


//����������
//�������ж���,��Ŷ����ݵĲ���
//ʵ�ֽӿ���,ʹ�þ�̬�������ø���������

//�򵥹���ģʽ,һ��������Ӧһ����,����û�г������,��ͬ��������ʵ�ֲ�ͬ�Ĳ��� ������һ��
//������������ͬ��������ʵ�ֲ�ͬ�Ĳ���,��������ͬ
//���󹤳���,�Բ�ͬ������ʵ�ֲ�ͬ�Ĳ��� ����ĳ���Ҳ��ͬ




class COperation
{
public:
	//��������
	int m_nFirst;
	int m_nSecond;



	virtual double GetResult()//��ȡ���
	{
		double dResult = 0;
		return dResult;
	}
};





//�ӷ�
class AddOperation : public COperation
{
public:
	virtual double GetResult()
	{
		return m_nFirst + m_nSecond;
	}
};



//����
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

//������
class CCalculatorFactory
{
public:
	static COperation* Create(char cOperator);
};




COperation* CCalculatorFactory::Create(char cOperator)
{
	COperation *oper;
	//��C#�п����÷�����ȡ���ж�ʱ�õ�switch����C++����ʲô�أ�RTTI����
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




//�ͻ���
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
