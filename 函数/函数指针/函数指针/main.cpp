#include<iostream>



using namespace std;


void add(int a,int b)
{
	cout << a + b << endl;

}


void main1()
{

	void(*p)(int ,int ) = add;
	p(10, 20);
	(*p)(10, 20);//����ָ��,�ᵱ��ָ����������,*p �� p��Ч��һ��
	(*&p)(10, 20);//* �� & ����
	(********************p)(10, 20);
	(******&p)(10, 20);

	cout << "p=" << (void *)p << endl;
	cout << "*p=" <<(void *) *p << endl;
	//C++���������Զ���*p����Ϊp


	//��ȡ����
	cout << typeid(p).name() << endl;//void (__cdecl*)(int,int)
	cout << typeid(*p).name() << endl;//void __cdecl(int,int)
	cout << typeid(&p).name() << endl;// void(__cdecl**)(int, int)
	cout << typeid(*&p).name() << endl;
	cout << typeid(*********************p).name() << endl;
	cin.get();



}