#include<iostream>
#include<array>

using namespace std;



class classobj
{
public:
	int num;
public:
	//构造函数带参数 不能被对象数组调用
	explicit  classobj(int data)//explicit 限定对象实体不能使用=进行初始化,避免歧义
	{
		this->num = data;
		cout << "被构造"<<endl;

	}


	//无参构造函数可以被对象数组调用
	classobj()//构造函数中重载
	{

		cout << "被构造原生" << endl;

	}

	~classobj()
	{
		cout << "销毁原生" << endl;

	}


};


void main()
{

	//classobj obj[10];


	classobj *obj = new classobj[10];
	delete[]obj;
	cin.get();

}



void main123()
{
	//classobj obj1 = 10;//赋值号  强制转换  产生歧义
	classobj obj2(20);

	//创建对象必须有合适的构造函数
	//classobj obj(0);

	//classobj obj[10];// “classobj”: 没有合适的默认构造函数可用	
	//classobj obj;// “classobj”: 没有合适的默认构造函数可用	
//	classobj *obj = new (classobj(5))[6];//语句错误
	classobj *obj = new classobj(5);


	//C++风格数组的作用

	array<classobj, 2>myarray = {obj2,*obj };




	cin.get();
}




