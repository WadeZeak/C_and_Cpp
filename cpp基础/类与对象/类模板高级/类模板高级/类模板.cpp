#include<iostream>
#include<string>


using namespace std;



//STL  数据结构 算法 适合任何类型





//类模板定义两种数据类型
template<class T1,class T2>
class MyClass
{

public:
	T1 t1;
	T2 t2;

	MyClass(T1 t11, T2 t22):t1(t11), t2(t22)
	{


	}

	void show()
	{

		cout <<"t1="<< t1 <<'\t'<<"t2=" << t2 << endl;
	}



};



void main()
{

	MyClass<int,double> myclass1(10 , 20.5);
	myclass1.show();

	MyClass<double, string> myclass2(20.8, "helloworld");
	myclass2.show();


	system("pause");

}


