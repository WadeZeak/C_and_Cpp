#include "Complex.h"


Complex::Complex()
{
	cout << "���󱻴���" << endl;

}


Complex::~Complex()
{
	cout << "��������" << endl;


}


//����ó�Ա����,��Ҫָ�����ĸ���Ķ���
//::��˵����
void  Complex:: Show()
{
	cout << "HelloWorld" << endl;
}





void Complex::Setxy(int x, int y)
{

	cout << (this->x = x) << endl;
	cout << (this->y = y) << endl;


}


void  Complex::Show(int x,int y)
{
	cout << (this->x = x) << endl;
	cout << (this->y = y) << endl;

}


void Complex::Change(int x) const//����const �޶��������ܶԳ�Ա���������޸�
{

	//���ھ���mutable���Եı�����Ч
	this->z=1000 ;

}