#pragma once
#include<iostream>
using namespace std;

class Complex
{
private:
	int x;
	int y;
	mutable int z;//mutable����const���Եĺ�����Լ��

public:
	Complex();
	~Complex();
	void Show();
	inline void  ShowAll(int x, int y);//��ʽ����
	//��������
	/*inline void  ShowAll(int x, int y)
	{
		cout << (this->x = x) << endl;
		cout << (this->y = y) << endl;
	}*/
	void Setxy(int x, int y);//�������Ż���Ĭ��Ϊ����,��ʽ
	void Show(int x, int y) ;

	void Change(int x) const;//����const �޶��������ܶ�һ��ĳ�Ա���������޸ģ���û��mutable���Եĳ�Ա����
};


//��������ԭ���Ϸ���ͷ�ļ�
//VS2013Ϊ������������չ��,��������ֻ�ܷ���ͷ�ļ�



void  Complex::ShowAll(int x, int y)
{
	cout << (this->x = x) << endl;
	cout << (this->y = y) << endl;
}