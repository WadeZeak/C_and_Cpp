
#include"List.h"


template<class T>
List<T>::List()
{

	this->pHead = nullptr;//�����յ�ͷ���
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
	Node<T>*p = new Node<T>;//����ڵ�
	p->t = t;
	p->pNext = nullptr;
	
	if (this->pHead == nullptr)//NULL int���� nulllptrָ������
	{

		this->pHead = p;
		
	}
	else//β������
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
Node<T> * List<T>::find(T t)//����
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



	return nullptr;//û���ҵ�
}



template<class T>
void List<T>::change(Node<T> *p, T newt)//��
{
	if (this->pHead==nullptr)
	{
		return;
	}
	p->t = newt;


}

template<class T>
int List<T>::getnum()//�ڵ����
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
bool List<T>::deleteone(T t)//ɾ 
{

	Node<T> *pfind = this->find(t);
	if (pfind==nullptr)//û�ҵ�
	{
		return false;
	}
	else
	{

		if (pfind==this->pHead)//ɾ��ͷ���
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
void List<T>::sort()//����
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
void List<T>::deletesame()//ɾ����ͬ�Ľڵ�
{
		Node<T> *p1,*p2;
		p1 = pHead;
		p2 = pHead->pNext;
	

		while (p2)
		{
			if (p2->t==p1->t)
			{
				p1->pNext = p2->pNext;
				delete p2;//ɾ���ڵ�
				p2 = p1->pNext;//����ָ��p1����һ���ڵ�
			}
			else//��ǰ�ƶ�
			{
				p1 = p2;
				p2 = p2->pNext;
			}

		}

}




template<class T>
bool List<T>::clear()//���
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
void List<T>::rov()//��ת
{

	if (pHead == nullptr || pHead->pNext == nullptr)//�ڵ�Ϊ�ջ���ֻ��һ��,�޷���ת
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
void List<T>::insert(T oldt, T newt)	//����
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
		Node<T> *pnew = new Node < T > ;//����ڵ�
		pnew->t = newt;
		p1->pNext = pnew;
		pnew->pNext = p2;


	}

}
	
	
	


template<class T>
void List<T>::merge(List &list)//�鲢
{


	Node<T> *p = this->pHead;

	while (p->pNext!=nullptr)
	{
		p = p->pNext;
	}

	p->pNext = list.pHead;




}

