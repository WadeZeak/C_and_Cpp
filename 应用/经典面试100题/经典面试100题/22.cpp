#include<iostream>

using namespace std;

//������sizeof �жϲ���ϵͳ��16λ����32λ


void main3333()
{

	int a = ~0;//16λ int 2�ֽ�   32λ 4�ֽ�

	cout << a << endl;

	//cout << sizeof(int) << endl;;

	if (a>65536)
	{
		cout << "32λ" << endl;//2^16
	}
	else
	{
		cout << "16λ" << endl;
	}


	cin.get();
}