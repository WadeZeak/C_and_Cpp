#include<iostream>
#include<string>

using namespace std;


//提供一种方法顺序访问一个聚敛对象的各个元素，而又不暴露该对象的内部表示。
//多个对象一起形成的总体称为聚类,聚集对象是一个能够包含一组对象的容器对象

//迭代子模式将迭代逻辑封装在一个独立的对象中，从而与聚集本身分开
//迭代子模式简化了聚集的界面
//每一个聚集对象都可以有一个或者多个迭代子对象
//每一个迭代子的迭代状态都是独立的
//迭代算法可以独立于聚集角色变化





class Iterator;




class Aggregate
{

public:

	virtual Iterator *creatIterator() = 0;

};




class Iterator
{

public:
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool isDone() = 0;


};




class ConcreteIterator :public Iterator
{

public:
	void First()
	{



	}
		 
		
	void Next()
	{


	}

	bool isDone()
	{


	}


};

void mainxcv()
{
	return;


}