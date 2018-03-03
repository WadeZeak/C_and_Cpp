#include<functional>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void main1()
{


	auto funA = [](){cout << "Hello World" << endl; };
	funA();



	auto funB = [](int a, int b){return a + b; };

	cout << funB(10, 20) << endl;

	cin.get();


}




void main2()
{
	vector<int>myv;

	myv.push_back(10);
	myv.push_back(9);
	myv.push_back(27);

	auto fun = [](int a){cout << a << endl; };

	for_each(myv.begin(), myv.end(), fun);


	/*for_each(myv.begin(), myv.end(), [](int a)
	{
		cout << a << endl;
	});*/


	cin.get();

}

void main444()
{

	vector<int>myv;

	myv.push_back(10);
	myv.push_back(9);
	myv.push_back(27);


	int b = 2;

//	auto fun = [=](int a){cout << a + b << endl;  };//= 捕获列表 知道封闭函数内变量的存在,可以引用,只能读,不能写
	
	auto fun = [&b](int a){b=10; cout << a + b << endl; };//引用变量b 不影响函数内变量原有的值



	for_each(myv.begin(), myv.end(), fun);





	cin.get();

}


void main555()
{

	[](){cout << "Hello World" << endl; };//函数指针
	[](){cout << "Hello World" << endl; }();//调用函数

	cin.get();

}


class Test
{

public:
	vector<int>myv;
	int num;
public:
	Test()
	{
		num = 12;
		myv.push_back(10);
		myv.push_back(20);

	}
	
	void add()
	{
		//引用this,只能引用当前了块语句中的局部变量

		int x = 3;
	//	auto fun = [this,x](int v){cout << this->num+x+v<<endl; };

		//& 引用所有的局部变量外加this
		auto fun = [&](int v){cout << this->num + x + v << endl; };

		//=引用当前块语句中的局部变量或者this 不可以赋值,但是可以读取 
		//& 按照引用方式操作this与局部变量
		//副本引用a   [a] 或者[=]
		//引用 a [&a]


		for_each(this->myv.begin(), this->myv.end(), fun);
	}


};


void main()
{
	//()-> 取反返回值类型
	auto fun1 = []()->double{cout << "Hello World!!" << endl; return 1; };
	fun1();

	auto fun2 = [](int a,double b)->decltype(a/b){cout << "Hello World!!" << endl; return a/b; };
	fun2(10,20.0);


	cin.get();

}