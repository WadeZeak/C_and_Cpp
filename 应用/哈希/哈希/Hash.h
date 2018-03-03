#pragma once
#include"HashNode.h"

//线性存储

template <class T>
class Hash
{
public:

	HashNode<T> *p;//存储哈希表
	int len;//长度


public:
	Hash();
	~Hash();
	int myhash(int key);
	void init(T *pt, int nt);
	
	bool isin(int key, T t);
	HashNode<T> *find(int key);
};

