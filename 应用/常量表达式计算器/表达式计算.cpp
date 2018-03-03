#include<iostream>
#include<cstdlib>//C++��װ��stdlid
#include<cctype>//�ַ����ж�
#include<string>

using namespace std;

double Analysis(char *str);


const int Max = 1024;


void TRIM(char *str)//ȥ���ո�
{
	int i(0);
	int j(0);

	while ((*(str+i)=*(str+j++))!='\0')
	{
		if (*(str + i) != ' ')
			i++;
	}
	//�����±�����,��ǰ�ƶ�,������㷨һ��,ѭ����ǰ��
}




char *extract(char *str, int &index)//��������
{
	char *pstr(nullptr);
	int count(0);//��¼�ж��ٶ�����
	int indexbak(index);//����index

	do
	{
		switch (*(str+index))
		{
		case  ')':
			if (0==count)
			{			
				++index;
				pstr = new char[index - indexbak];
				if (!pstr)//����ʧ��
				{
					throw "malloc failed";
				}

				//�����ַ���
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

	//��һ����������

	if (!isdigit(*(str + index)))//isdigit() �ж��Ƿ�Ϊ����
	{
		char error[30] = "get error";
		throw error;//�׳��쳣
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
			return result;//���ؽ��
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
	cout << "��������ʽ:" ;
	cin.getline(str, Max);//cin����Կո�
	TRIM(str);
	cout << endl;

	//int i = 0;
	//cout << getData(str, i) << endl;
	
	cout << Analysis(str) << endl;
	system("pause");
}