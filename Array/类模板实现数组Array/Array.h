#pragma once


template<class T,int n>//��ģ�� <>�е����ݱ���ʵ����
class Array
{
public:
	T *pt;
	//int len;//����


public:
	Array();
	Array(int length);
	~Array();
	int size();
	T get(int num);//��ȡָ���±������
	void set(T data, int num);
	T &operator [](int num);

};

