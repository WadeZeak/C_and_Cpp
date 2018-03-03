#include<iostream>
#include<stdio.h>

using namespace std;


//类成员函数指针,类成员函数指针数组,类成员二级函数指针


class Com
{

public:
	int a;
	int b;
public:
	Com(int x, int y) :a(x), b(y)
	{



	}

	int add(int a, int b)
	{

		return a + b;
	}

	int  subtra(int a, int b)
	{

		return a - b;
	}


	int  multi(int a, int b)
	{

		return a * b;
	}

	int divis(int a, int b)
	{
		return a /b;

	}

};


void main101()
{

	Com com(12,6);

	auto func1 = &Com::add;

	cout << typeid(func1).name() << endl;//int (__thiscall Com::*)(int,int)

	int(Com::*p)(int, int) = &Com::add;//类成员函数指针 函数的类型需要加上类说明

	cout << (com.*p)(10, 2)<< endl;//调用类成员函数指针,必须引用类对象
	cin.get(); 

}


typedef int (Com::*Com_Fun_Int_Int)(int, int);//简写

void main()
{
	Com com(12, 6);

//	Com_Fun_Int_Int func[4] = { &Com::add, &Com::divis, &Com::multi, &Com::subtra };
	int(Com::*func[4])(int, int) = { &Com::add, &Com::divis, &Com::multi, &Com::subtra };//指针数组

	for (int i = 0; i < 4; i++)
	{

		cout << (com.*func[i])(10, 20) << endl;
		printf("%p\n", func[i]);
	}
	cout << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << endl;


	int(Com::**pfunc)(int, int) = func;//二级指针 指向类成员函数指针的指针


	while (pfunc<(func+4))
	{
		cout << (com.**pfunc)(10, 20) << endl;
		printf("%p\n", *pfunc);
		pfunc++;
		
	}


	cout << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << endl;


	for (int i = 0; i < 4; i++)
	{

		auto function = func[i];
		cout << typeid(function).name() << endl;
		printf("%p\n", function);
	}



	cin.get();


}