
#include"List.h"


template<class T>
List<T>::List()
{

	this->pHead = nullptr;//创建空的头结点
	cout << "Creat Link List" << endl;
}

template<class T>
List<T>::~List()
{

	cout << "Delete Link List" << endl;
}


template<class T>
void List<T>::add(T t)
{
	Node<T>*p = new Node<T>;//分配节点
	p->t = t;
	p->pNext = nullptr;
	
	if (this->pHead == nullptr)//NULL int类型 nulllptr指针类型
	{

		this->pHead = p;
		
	}
	else//尾部插入
	{

		Node<T> *ptemp = this->pHead;
	
		while (ptemp->pNext != nullptr)
		{
			ptemp=ptemp->pNext;
		}

		ptemp->pNext = p;
	}


}


template<class T>
void List<T>::show()
{
	Node<T> *p = this->pHead;
	while (p != nullptr)
	{
		cout << p->t << endl;
		p=p->pNext;
	}

}

template<class T>
Node<T> * List<T>::find(T t)//查找
{
	Node<T> *p = this->pHead;

	while (p!=nullptr)
	{
		if (p->t==t)
		{
			return p;
		}
		p = p->pNext;

	}



	return nullptr;//没有找到
}



template<class T>
void List<T>::change(Node<T> *p, T newt)//改
{
	if (this->pHead==nullptr)
	{
		return;
	}
	p->t = newt;


}

template<class T>
int List<T>::getnum()//节点个数
{
	int i = 0;
	Node<T> *p = this->pHead;
	while (p!=nullptr)
	{
		i++;
		p = p->pNext;
	}
	return i;


}


template<class T>
bool List<T>::deleteone(T t)//删 
{

	Node<T> *pfind = this->find(t);
	if (pfind==nullptr)//没找到
	{
		return false;
	}
	else
	{

		if (pfind==this->pHead)//删除头结点
		{
			pHead = pHead->pNext;
			delete pfind;
		}
		else
		{

			Node<T>*p1 = this->pHead;
			Node<T>*p2 = this->pHead->pNext;
			while (p2!=pfind)
			{
				p1 = p2;
				p2 = p2->pNext;
			}

			p1->pNext = p2->pNext;
			delete p2;


		}  
		return true;


	}



}



template<class T>
void List<T>::sort()//排序
{

	for (Node<T> *p1 = this->pHead; p1 != nullptr; p1= p1->pNext)
	{

		for (Node<T> *p2 = this->pHead; p2 != nullptr; p2=p2->pNext)
		{
			if (p1->t<p2->t)
			{
				T temp = p1->t;
				p1->t = p2->t;
				p2->t = temp;
			}

		}
	}



}

template<class T>
void List<T>::deletesame()//删除相同的节点
{
		Node<T> *p1,*p2;
		p1 = pHead;
		p2 = pHead->pNext;
	

		while (p2)
		{
			if (p2->t==p1->t)
			{
				p1->pNext = p2->pNext;
				delete p2;//删除节点
				p2 = p1->pNext;//重新指向p1的下一个节点
			}
			else//向前移动
			{
				p1 = p2;
				p2 = p2->pNext;
			}

		}

}




template<class T>
bool List<T>::clear()//清空
{
	if (pHead==nullptr)
	{
		return false;
	}
	Node<T> *p1, *p2;
	p1 = pHead;
	p2 = nullptr;
	while (p1)
	{
		p2 = p1->pNext;
		delete p1;
		p1 = p2;
	}
	pHead = nullptr;
	return true;
}



template<class T>
void List<T>::rov()//逆转
{

	if (pHead == nullptr || pHead->pNext == nullptr)//节点为空或者只有一个,无法逆转
	{
		return;
	}
	else
	{
		Node<T> *p1,  *p2, *p3;

		p1 = pHead;
		p2 = p1->pNext;

		while (p2)
		{

			p3 = p2->pNext;
			p2->pNext = p1;

			p1 = p2;
			p2 = p3;

		}

		pHead->pNext = nullptr;
		pHead = p1;
	}




}







template<class T>
void List<T>::insert(T oldt, T newt)	//插入
{
	Node<T> *pfind = this->find(oldt);

	if (pfind != nullptr)
	{
		Node<T> *p1, *p2;
		p1 = pHead;
		p2 = p1->pNext;
		while (p2 != pfind)
		{
			p1 = p2;
			p2 = p2->pNext;

		}
		Node<T> *pnew = new Node < T > ;//构造节点
		pnew->t = newt;
		p1->pNext = pnew;
		pnew->pNext = p2;


	}

}
	
	
	


template<class T>
void List<T>::merge(List &list)//归并
{


	Node<T> *p = this->pHead;

	while (p->pNext!=nullptr)
	{
		p = p->pNext;
	}

	p->pNext = list.pHead;




}

