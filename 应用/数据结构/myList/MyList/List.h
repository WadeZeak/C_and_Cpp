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
	void add(T t);//增
	void show();
	Node<T> * find(T t);//查
	void change(Node<T> *p, T t);//改
	void insert(T oldt, T newt);//插入
	bool deleteone(T t);//删 
	void deletesame();//删除相同的节点
	bool clear();//清空
	void rov();//逆转
	void sort();//排序
	int getnum();//节点个数
	void merge(List &list);//归并

};

