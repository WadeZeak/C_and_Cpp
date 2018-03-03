#include <iostream>
#include <string>
#include <vector>
using namespace std;





//ͨ����һ��������Ҫ����ִ�У���������Խ��������еľ��ӱ�ʾ��Ϊһ��������﷨��ʱ������ʹ�ý�����ģʽ��

//������ģʽ:����һ�����Ժ�,���������������һ�ֱ�ʾ,��ͬʱ�ṩһ�ֽ�����.�ͻ��˿���ʹ�������������������������еľ���
//������ģʽ��������������һ���򵥵��ķ�֮��,ʹ��ģʽ��ƽ���֮��Щ���
//������ģʽ���ᵽ�������ָ�κν��������ܹ����͵��������
//�ڽ�����ģʽ����Ҫ����һ�������ķ���������ĵȼ��ṹ,Ҳ����һϵ�е���Ϲ���
//ÿһ�����������һ�ֽ��ͷ���,������������Ľ���
//�������ĵȼ��ṹ�еĶ�����κ�������϶���һ������

class Context;
class AbstractExpression
{
public:
	virtual void Interpret(Context* context) = 0;
};



class Expression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "�ն˽�����" << endl;
	};
};



class NonterminalExpression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "���ն˽�����" << endl;
	}
};

class Context
{
public:
	string input;
	string output;
};

//�ͻ���
int main758697025()
{
	Context* context = new Context();
	vector<AbstractExpression*> express;
	express.push_back(new Expression());
	express.push_back(new NonterminalExpression());
	express.push_back(new NonterminalExpression());

	vector<AbstractExpression*>::iterator p = express.begin();
	while (p != express.end())
	{
		(*p)->Interpret(context);
		p++;
	}
	cin.get();
	return 0;
}
