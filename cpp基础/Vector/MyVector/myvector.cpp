#include "myvector.h"


template<class T>
myvector<T>::myvector()
{

	p = nullptr;//C++空指针
	n = 0;
	realn = 0;

}



template<class T>
myvector<T>::~myvector()
{

	if (p!=nullptr)
	{
		delete[]p;//清空
		p = nullptr;
	}
}


template<class T>
void myvector<T>:: push_back(T t)
{

	if (p==nullptr)
	{
		p = new T;
		*p = t;//赋值
		n=realn = 1;
	}
	else
	{
		
		if (n==realn)
		{
			T *ptemp = new T[n + 1];
			for (int i = 0; i < realn; i++)
			{
				*(ptemp + i) = *(p + i);
			}

			*(ptemp + realn) = t;
				delete[]p;//释放
			p = ptemp;//重新赋值
			realn += 1;
			n += 1;
		}
		else//n<realn
		{
			
			*(p + realn) = t;
			realn += 1;
		}
	
	}

}



template<class T>
void myvector<T>::show()
{
	if (p==nullptr)
	{
		return;
	}
	else
	{

		for (int i = 0; i < realn; i++)
		{

			cout << *(p + i) << "\t";

		//	cout << p[i] << "\t";

		}
		cout << endl;
	}
	
}




template<class T>
T *myvector<T>::find(T t)//查
{
	if (p!=nullptr)
	{
		for (int i = 0; i < realn; i++)
		{
			if (t==*(p+i))
			{
				return (p + i);
			}
		}
	}
	return nullptr;
}




template<class T>
void myvector<T>::change(T *pos, T t)//改
{

	if (p==nullptr)
	{
		return;
	}
	else
	{	
		*pos = t;
	}


 }




template<class T>
void myvector<T>::del(T t)//删除
{
	if (nullptr==p)
	{
		return;
	}
	else
	{


		int pos = -1;
		for (int i = 0; i < realn; i++)
		{
			if (t==*(p+i))
			{
				pos = i;
				break;
			}
		}

		if (-1==pos)
		{
			return;
		}
		else
		{
			if (realn==pos)
			{
				realn -= 1;
			}
			else
			{
				
				for (int i = pos; i < realn-1; i++)
				{
					*(p + i) = *(p + i + 1);
				}

				realn -= 1;
			}

		}
	}

}




template<class T>
void myvector<T>::insert(T findt,T t)//插入
{

	if (p == nullptr)
	{
		p = new T;
		*p = t;//赋值
		n = realn = 1;
	}
	else
	{

		int pos = -1;
		for (int i = 0; i < realn; i++)//实现查找
		{
			if (findt == *(p + i))
			{
				pos = i;
				break;
			}
		}
		//重新分配内存并拷贝
		if (n == realn)
		{
			if (pos != -1)//找到
			{
				{
					//增加内存长度		
					T *ptemp = new T[n + 1];//重新分配内存
					for (int i = 0; i < realn; i++)
					{
						*(ptemp + i) = *(p + i);//拷贝
					}
					delete[]p;//释放
					p = ptemp;//重新赋值
					realn += 1;
					n += 1;
				}
				

				//实现前插
				{
					for (int i = realn-1; i >pos; i--)
					{
						*(p + i) = *(p + i - 1);
					}					
					*(p + pos) = t;

				}

			}

		}
		else//realn<n
		{	
			if (pos!=-1)
			{
				for (int i = realn - 1; i >pos; i--)
				{
					*(p + i) = *(p + i - 1);
				}
				*(p + pos) = t;

				realn += 1;
			}

		}
	}


}



template<class T>
T myvector<T>:: operator [](int x)//重载[]
{
	if (x<=-1||x>realn)
	{
		return NULL;
	}
	else
	{

		return p[x];
	}



}