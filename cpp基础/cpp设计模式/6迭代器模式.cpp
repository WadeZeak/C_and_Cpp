#include<iostream>
#include<string>

using namespace std;


//�ṩһ�ַ���˳�����һ����������ĸ���Ԫ�أ����ֲ���¶�ö�����ڲ���ʾ��
//�������һ���γɵ������Ϊ����,�ۼ�������һ���ܹ�����һ��������������

//������ģʽ�������߼���װ��һ�������Ķ����У��Ӷ���ۼ�����ֿ�
//������ģʽ���˾ۼ��Ľ���
//ÿһ���ۼ����󶼿�����һ�����߶�������Ӷ���
//ÿһ�������ӵĵ���״̬���Ƕ�����
//�����㷨���Զ����ھۼ���ɫ�仯





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