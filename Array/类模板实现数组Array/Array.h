#pragma once


template<class T,int n>//类模板 <>中的内容必须实例化
class Array
{
public:
	T *pt;
	//int len;//长度


public:
	Array();
	Array(int length);
	~Array();
	int size();
	T get(int num);//获取指定下标的数据
	void set(T data, int num);
	T &operator [](int num);

};

