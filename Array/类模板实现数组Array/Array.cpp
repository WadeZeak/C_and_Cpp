#include "Array.h"

template<class T,int n>
Array<T,n>::Array()
{

	this->pt = new T[n] ;//��ָ��
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
T Array<T,n>::get(int num)//num �����±�
{

	if (num<0||num>n)//�쳣
	{
		//���Ի��߱���
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

	if (num<0 || num>n)//����
	{

		//���Դ���
	}
	else
	{
		*(this->pt + num) = data;
	}

}




template<class T, int n>
T & Array<T, n>::operator[](int num)//����[]
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