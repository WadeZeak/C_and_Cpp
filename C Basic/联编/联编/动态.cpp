#include<iostream>

using namespace std;


//��̬����,����ƥ���������ڱ���ʱ,�����غ���
//��̬���� �����ڳ�������ʱ ��if ��switch


void Go(int num)
{





}


void Go(char *str)
{




}



//:: �����е�����
class AAA
{

public:
	void Go(int num)
	{





	}


	void Go(char *str)
	{




	}



};





void main()
{

	//auto  *pstr;����׶�

	void(*p1)(char *str) = Go;

	void(*p2)(int num) = Go;

	Go(NULL);//����Go(int num)

	//����������ʱ������ ��̬����
	Go(nullptr);//����Go(char *str) �ؼ��� 

}

void main1()
{

	int num = 110;
	cout << num << endl;//ִ�н׶�

	if (num>10)
	{

		system("calc");

	}
	else
	{

		system("mspaint");

	}

	system("pause");
}

