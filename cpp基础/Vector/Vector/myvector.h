#pragma once


template<class T>
class myvector
{
public:
	T *p;//管理内存
	int n;//标记内存长度
	int realn;//实际长度


public:
	myvector();
	~myvector();
	void push_back(T t);
	void show();

	T * find(T t);//查
	void change(T *pos, T t);//改
	void del(T t);//删除
	void  insert(T fint,T t);//插入

	T operator [] (int t);

};

