

//#defile public private //ȥ������ģʽ

#include <iostream>
#include <string>
#include <vector>
using namespace std;



//��֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ�
//��������ʵ������������ϵͳ�ṩ���ʵ������ģʽ
//����ģʽֻ����������"��һʵ��"�������ǲ���ʹ��


class Singelton
{
private:

	int i;
	static Singelton* instance;
	Singelton(int m)
	{
		this->i = m;
	}

public:
	

	static Singelton* GetInstance()//ʵ�ֵ���ģʽ�Ĺؼ�
	{
		if (instance == NULL)
		{
			instance = new Singelton(0);
		}
		return instance;
	}

	void show()
	{
		cout << i << endl;

	}

};



//Singelton* Singelton::instance = NULL;//ע�⾲̬���������ʼ��
Singelton* Singelton::instance=new Singelton(9988);




//�ͻ��ˣ�

int mainsss()
{
	Singelton* s1 = Singelton::GetInstance();
	Singelton* s2 = Singelton::GetInstance();
	if (s1 == s2)
		cout << "ok" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}