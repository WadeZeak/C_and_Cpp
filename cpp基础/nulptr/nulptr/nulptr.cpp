#include<iostream>

using namespace std;

void Go(char *p)
{

	cout << "Gop" <<endl;

}





void Go(int num)
{

	cout << "Gonum" << endl;
}


void Go(void *p)
{

	cout << "Govoidp" << endl;

}
void Go(nullptr_t p)
{

	cout << "Gonullptr_t" << endl;

}


void main()
{
	//p ���������͵��޶�
	//void *p = NULL;//C+=ǿ����,�ϸ������ͣ�
	//void *p = nullptr;
	//Go(p);�������ʹ���


//	Go(NULL);//������Go(int num)  ���������,C++ʹ��nullptr

Go(nullptr);//C++��ָ��,����nullptr_t
	cin.get();





}