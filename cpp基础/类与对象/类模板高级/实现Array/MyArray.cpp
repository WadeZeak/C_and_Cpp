#include "MyArray.h"
#include<iostream>

using namespace std;


//模板类的成员函数在类外部实现需要加上模板说明 同时还要加上类型
template<class T=int>//模板类的成员函数在类外部必须说明类型
MyArray< T>::MyArray()
{

	cout << "Creat MyArray Obj,typename=" << typeid(T).name() << endl;

}

template<class T=int>//带有默认类型的类模板在外部实现成员函数,每一个函数都要加上默认的类型
MyArray<T>::~MyArray()
{

	cout << "Delete MyArray Obj,typename=" << typeid(T).name() << endl;


}
