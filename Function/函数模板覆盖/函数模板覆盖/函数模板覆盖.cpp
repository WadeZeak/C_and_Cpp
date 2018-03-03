#include<stdlib.h>
#include<iostream>


using namespace std;

//结构体可以直接赋值
struct Info
{
	char name[10];
	double db;
	int data;
};

//所有的成员都是公有的类可以直接赋值(开始初始化时)，而私有成员变量需要接口
class MyClass
{
public:
	char name[10];
	double db;
	int data;


};



//函数模板可以实现通用，可以根据自有数据类型进行优化

template < typename T >
void Swap(T &a,T &b)//异或 ^ 只适用于int类型
{
	cout << "通用函数模板" << endl;
	T temp=a;
	a = b;
	b = temp;

}

//特有的函数模板   模板为空，明确返回值类型
template<>
void Swap(Info &info1,Info &info2)//实现函数模板覆盖 覆盖通用类型
{

	cout << "特有函数模板" << endl;
	//特有函数模板可以针对自己的数据类型做出优化
	Info temp = info1;
	info1 = info2;
	info2 = temp;

}





void main1()
{
	int num1 = 10;
	int num2 = 20;

	cout << "num1=" << num1 <<"\t"<<"num2="<<num2<<endl;

	Swap(num1, num2);//实现数据交换

	cout << "num1=" << num1 << "\t" << "num2=" << num2 << endl;

	char chr1 = 'x';
	char chr2 = 'z';

	cout << "chr1=" << chr1 << "\t" << "chr2=" << chr2 << endl;

	Swap(chr1, chr2);//实现数据交换

	cout << "chr1=" << chr1 << "\t" << "chr2=" << chr2 << endl;
	cin.get();//getchar()
}




void main()
{
	Info info1 = { { "abcd" }, 12.3, 10 };
	Info info2 = { { "hijk" }, 45.6, 20 };

	Swap(info1, info2);//置换

	cout << "info1" << endl;
	cout << info1.name << endl;
	cout << info1.data << endl;
	cout << info1.db << endl;
	cout << endl;
	cout << "info2" << endl;
	cout << info2.name << endl;
	cout << info2.data << endl;
	cout << info2.db << endl;

	cin.get();//getchar()

}

void main2()
{
	MyClass info1 = { { "abcd" }, 12.3, 10 };
	MyClass info2 = { { "hijk" }, 45.6, 20 };

	Swap(info1, info2);//置换

	cout << "info1" << endl;
	cout << info1.name << endl;
	cout << info1.data << endl;
	cout << info1.db << endl;
	cout << endl;
	cout << "info2" << endl;
	cout << info2.name << endl;
	cout << info2.data << endl;
	cout << info2.db << endl;

	cin.get();//getchar()

}
