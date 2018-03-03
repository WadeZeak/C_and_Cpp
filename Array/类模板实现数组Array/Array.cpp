#include "Array.h"

template<class T,int n>
Array<T,n>::Array()
{

	this->pt = new T[n] ;//空指针
	//this->len = 0;

}


template<class T,int n>
Array<T,n>::Array( int length)
{

	this->pt = new T[length];
	//this->len = length;
}



template<class T,int n>
Array<T,n>::~Array()
{

	//this->len = 0;
	delete[]pt;


}

template<class T,int n>
int  Array<T,n>::size()
{
//	return this->len;
	return n;

}


template<class T,int n>
T Array<T,n>::get(int num)//num 数组下标
{

	if (num<0||num>n)//异常
	{
		//忽略或者报错
	/*	T *p(nullptr);
		return *p;*/
	}
	else
	{
		return *(this->pt+num);
	}

}

template<class T,int n>
void Array<T,n>::set(T data, int num)
{

	if (num<0 || num>n)//出错
	{

		//忽略错误
	}
	else
	{
		*(this->pt + num) = data;
	}

}




template<class T, int n>
T & Array<T, n>::operator[](int num)//重载[]
{
	if (num<0||num>=n)
	{

	}
	else
	{
		//return pt[num];
		return *(pt + num);
	}


}