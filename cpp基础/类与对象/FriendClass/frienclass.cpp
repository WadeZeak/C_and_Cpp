#include<iostream>

using namespace std;


//����Ԫ
class AAA
{
	friend  class BBB;//��Ԫ��BBB
private:
	int num;
	void Display()
	{
		cout << num << endl;
	}
};





class BBB
{

private:
	AAA *Aobj;//������AAA�Ķ���ָ�룬���Է�����AAA������˽�г�Ա���ߺ���,������Ԫ�����ܷ���

public:
	void Init()
	{
		Aobj = new AAA;	//ָ������ʼ������������ڴ棬�������Ұָ�룬����ɻ�ҵ�

	}

	void Set(int i)
	{
		Aobj->num = i;
	}

	void Display()
	{

		Aobj->Display();
	}


};



void main()
{

	BBB Bobj;
	Bobj.Init();
	Bobj.Set(10);
	Bobj.Display();
	cin.get();





}