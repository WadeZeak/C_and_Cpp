#include "MyArray.h"
#include<iostream>

using namespace std;


//ģ����ĳ�Ա���������ⲿʵ����Ҫ����ģ��˵�� ͬʱ��Ҫ��������
template<class T=int>//ģ����ĳ�Ա���������ⲿ����˵������
MyArray< T>::MyArray()
{

	cout << "Creat MyArray Obj,typename=" << typeid(T).name() << endl;

}

template<class T=int>//����Ĭ�����͵���ģ�����ⲿʵ�ֳ�Ա����,ÿһ��������Ҫ����Ĭ�ϵ�����
MyArray<T>::~MyArray()
{

	cout << "Delete MyArray Obj,typename=" << typeid(T).name() << endl;


}
