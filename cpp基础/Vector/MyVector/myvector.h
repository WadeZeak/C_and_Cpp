#pragma once


template<class T>
class myvector
{
public:
	T *p;//�����ڴ�
	int n;//����ڴ泤��
	int realn;//ʵ�ʳ���


public:
	myvector();
	~myvector();
	void push_back(T t);
	void show();

	T * find(T t);//��
	void change(T *pos, T t);//��
	void del(T t);//ɾ��
	void  insert(T fint,T t);//����

	T operator [] (int t);

};

