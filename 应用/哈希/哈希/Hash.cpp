#include "Hash.h"



template <class T>
Hash<T>::Hash()
{
	this->len = 10;
	this->p = new HashNode < T >[this->len] ;
}


template <class T>
Hash<T>::~Hash()
{
	delete[]p;
	p = nullptr;//可有可无
}


template <class T>
int Hash<T> :: myhash(int key)
{


	return key % this->len;

}


template <class T>
void Hash<T> ::init(T *pt,int nt)//初始化
{
	for (int i = 0; i < 10; i++)
	{
		p[i].key = i;
		p[i].t = pt[i];
		p[i].cn = 0;
	}

}

template <class T>
bool Hash<T> ::isin(int key,T t)
{

	int res = myhash(key);
	if ((*(p + res)).t == t)
		return true;
	else
		return false;

}



template <class T>
HashNode<T>* Hash<T> ::find(int key)
{
	int res = myhash(key); 
	return p + res;



}