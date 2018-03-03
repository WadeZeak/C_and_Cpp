#include<iostream>
#include<cstdlib>//C++封装的stdlid
#include<cctype>//字符的判定
#include<string>

using namespace std;

double Analysis(char *str);


const int Max = 1024;


void TRIM(char *str)//去掉空格
{
	int i(0);
	int j(0);

	while ((*(str+i)=*(str+j++))!='\0')
	{
		if (*(str + i) != ' ')
			i++;
	}
	//两个下表轮替,往前移动,链表的算法一样,循环往前挖
}




char *extract(char *str, int &index)//处理括号
{
	char *pstr(nullptr);
	int count(0);//记录有多少对括号
	int indexbak(index);//备份index

	do
	{
		switch (*(str+index))
		{
		case  ')':
			if (0==count)
			{			
				++index;
				pstr = new char[index - indexbak];
				if (!pstr)//分配失败
				{
					throw "malloc failed";
				}

				//拷贝字符串
				strncpy_s(pstr, index - indexbak, str + indexbak, index - indexbak-1);
				return pstr;
			}
			else
			{
				count--;
			}
			break;
		case '(': 
			count++;
			break;

		}
	} while (*(str+index++)!='\0');

	throw "error failed";
}






double getData(char *str,int& index)
{ 
	double value(0.0);
	if (*(str + index)=='(')
	{
		char *substr(nullptr);
		substr = extract( str, ++index);
		value = Analysis(substr);
		delete[]substr;
		return value;
	}

	//第一个不是数字

	if (!isdigit(*(str + index)))//isdigit() 判断是否为数字
	{
		char error[30] = "get error";
		throw error;//抛出异常
	}

	while (isdigit(*(str+index)))
	{
		value = 10 * value + (*(str + index++) - '0');	
	}

	if (*(str+index)=='.')
	{
		double  decimal(1.0);
		
		while(isdigit(*(str+(++index))))
		{
			decimal /= 10.0;
			value += decimal*(*(str + index) - '0');
		}

	}
	return value;
}



double term(char *str, int &index)
{
	double value(0.0);
	value= getData(str, index);

	while (1)
	{
		if (*(str+index)=='*')
		{
			value *= getData(str, ++index);
		}
		else if (*(str + index)== '/')
		{
			value /= getData(str, ++index);
		}
		else		
			break;
		
	}
	return value;

}


double Analysis(char *str)
{
	double result(0.0);
	int index(0);
	result += term(str, index);

	while (1)
	{
		switch (*(str+index++))
		{
		case '\0':
			return result;//返回结果
		case '+':
			result += term(str, index);
			break;
		case '-':
			result -= term(str, index);
			break;
		default:
			break;
		}
	}
}



void main()
{

	char str[Max] = { 0 };
	cout << "请输入表达式:" ;
	cin.getline(str, Max);//cin会忽略空格
	TRIM(str);
	cout << endl;

	//int i = 0;
	//cout << getData(str, i) << endl;
	
	cout << Analysis(str) << endl;
	system("pause");
}