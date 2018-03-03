#include<iostream>
#include<stdlib.h>

using namespace std;


void main1()
{

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int(&ra)[10](a);//给原来的变量一个别名，地址是相同的

	int i=0;


	for (auto data : ra)//C++11 的循环
	{
		data = i + 5;
		cout << data << endl;
		i++;
	}

	cout <<"a= " << a << endl;
	cout << "ra= " << ra << endl;



	cout << "&a= " << &a << endl;
	cout << "&ra= " << &ra << endl;

	system("pause");
}



void main2()
{

	int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int(&ra)[2][5](a);//给原来的变量一个别名，地址是相同的

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << ra[i][j] << "\t";
		}

		cout << endl;
	}

	system("pause");

}



int add(int a, int b)
{

	return a+b;
}


int Sub(int a, int b)
{

	return a - b;
}



void change( int (*&rp)(int a, int b) )
{
	rp = Sub;

}





int(*&changep(int(*&rp)(int, int)))(int, int)//函数指针引用
{
	rp = Sub;
	return rp;//返回引用
}


void main4()
{

	int(*p)(int a, int b) = add;//函数指针初始化
	cout << p(5, 10)<<endl;

//	int (*&rp)(int a, int b) (p);//引用函数指针
	// ( )只适用于初始化
	//rp = Sub;//此时不能使用 ( )


	//change(p);

	p = changep(p);

	cout << p(5, 10) << endl;

	system("pause");
}




void main5()
{
//	int *p[4];//指针数组
	int a = 1, b = 2, c = 3;

	int * px[3] = { &a, &b, &c };

	//int && p [4] = {a,b,c };
	//引用数组是非法的



}




struct MyStruct1
{
	int a;//4
	char chr;//4
	double db;//8

	
	void go()
	{
		cout << "Hello World!!!" << endl;

	}

};


struct MyStruct2
{
	int a;//8
	double db;//8
	char chr;//8
	
};


struct MyStruct3
{
	int &a;
	double &db;
	char &chr;//引用的本质是指针
	//引用变量占4字节
};



void main6()
{

	//cout << sizeof(MyStruct1) << endl;//16
	//cout << sizeof(MyStruct2) << endl;//24


	int num = 10;
	int &rnum = num;
	double db = 14.4;
	double &rdb = db;//直接引用

	//直接引用sizeof,就是求引用的数据的所占空间大小
	cout << sizeof(rnum) << endl;//4
	cout << sizeof(rdb) << endl;//8
	cout << sizeof(MyStruct3) << endl;//12

	system("pause");
}


int getdata(int &&num)//右值引用，节约内存拷贝，内存优化所必须
{
	cout << num << endl;
	num += 10;
	return num;
}




void main7()
{

	int a = 4;
	int b = 5;

	cout << getdata(a + b) << endl;


	system("pause");
}


//左值 ，一般可以取地址值的是左值
//右值有些情况下可以，有些情况下不可以

void main8()
{
	int a = 1;
	int b = a + 1;//右值->左值

	cout << getdata(move(a)) << endl;
	//std::move  将左值转换为右值，C++11中规定
	system("pause");
}




void main9()
{

	const int num(6);
	char str[10]("Hello");
	const char *pc(str);//指向常量的指针限定了指向的数据无法修改,+1，+2，+3
	str[3] = 'a';//可以
	//pc[3] = 'a';//语句错误
	pc = "World";//可以,指向另一个常量字符串的首地址

	system("pause");
}



void main10()
{


	const int num(6);
	char str[10]("Hello");
	const char(&rstr)[10](str);//常量引用
	const char(&rrstr)[10](rstr);//引用可以给另一个引用初始化

	str[4] = 's';
	//rstr[4] = 'a';//语法错误
	
	system("pause");
}




void main()
{
	int(*p)(int, int) = Sub;
	cout << p(10, 20) << endl;

	int(* const &px)(int ,int) (p);//指针函数引用

///	px = add; //不允许修改


}

