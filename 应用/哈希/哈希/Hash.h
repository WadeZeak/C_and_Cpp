#pragma once
#include"HashNode.h"

//���Դ洢

template <class T>
class Hash
{
public:

	HashNode<T> *p;//�洢��ϣ��
	int len;//����


public:
	Hash();
	~Hash();
	int myhash(int key);
	void init(T *pt, int nt);
	
	bool isin(int key, T t);
	HashNode<T> *find(int key);
};

