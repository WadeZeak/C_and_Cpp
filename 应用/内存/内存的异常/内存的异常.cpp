#include<iostream>
#include<string>

using namespace std;


class Student
{

public:
	Student()
	{
		cout << "����" << endl;
	}

	~Student()
	{
		cout << "����" << endl;
	}


};

class EH//�쳣����
{
public:
	void *p;
	char str[30];

public:
	EH(void *pt) :p(static_cast<void *>(pt))
	{


	}

};

bool quit = false;

void out()
{


}



void run()
{

	Student *p = new Student;

	delete p;

//	p = nullptr;

	if (p != nullptr)//����ڴ�û���ͷ�,�����쳣
	{
		quit = true;

		if (quit == true)
		{
			throw EH(p);//�׳��쳣
		}
	}


}



void main()
{

	try
	{
		run();
	}
	catch (EH &e)
	{

		cout << e.p << '\t';
		cout << "�ڴ��쳣,�ڴ�й©" << endl;

	}

	cin.get();


}