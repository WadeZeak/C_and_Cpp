#include <iostream>
#include <string>
#include <vector>
using namespace std;





//通常当一个语言需要解释执行，并且你可以将该语言中的句子表示成为一个抽象的语法树时，可以使用解释器模式。

//解释器模式:给定一种语言后,解释器会给出它的一种表示,并同时提供一种解释器.客户端可以使用这个解释器来解释这个语音中的句子
//解释器模式描述怎样在有了一个简单的文法之后,使用模式设计解释之这些语句
//解释器模式中提到的语句是指任何解释器都能够解释的任意组合
//在解释器模式下需要定义一个带有文法的命令类的等级结构,也就是一系列的组合规则
//每一个命令对象都有一种解释方法,代表队命令对象的解释
//命令对象的等级结构中的对象的任何排列组合都是一个语言

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
		cout << "终端解释器" << endl;
	};
};



class NonterminalExpression : public AbstractExpression
{
public:
	virtual void Interpret(Context* context)
	{
		cout << "非终端解释器" << endl;
	}
};

class Context
{
public:
	string input;
	string output;
};

//客户端
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
