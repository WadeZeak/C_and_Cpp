#pragma once
#include"Node.h"
#include<iostream>
using namespace std;


template<class	T>
class List
{
public:
	Node<T> *pHead;

public:
	List();
	~List();
	void add(T t);//��
	void show();
	Node<T> * find(T t);//��
	void change(Node<T> *p, T t);//��
	void insert(T oldt, T newt);//����
	bool deleteone(T t);//ɾ 
	void deletesame();//ɾ����ͬ�Ľڵ�
	bool clear();//���
	void rov();//��ת
	void sort();//����
	int getnum();//�ڵ����
	void merge(List &list);//�鲢

};

