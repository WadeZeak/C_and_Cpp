#include"coder.h"
#include<iostream>
#include"cppcoder.h"
#include"javacoder.h"
#include"ccoder.h"

using namespace std;

//无论何种继承，在子类的内部可以随意访问父类的成员

void main4()
{

	javacoder *pjava = new javacoder;
//	pjava->num = 20;
	

	system("pause");

}






void main()
{
	cppcoder *pcppcode = new cppcoder;

	//pcppcode->num = 10;//公有继承,子类在外部无法访问父类的公有成员

	

	system("pause");
}



void main2()
{

	//父类与子类同一个地址，父类会屏蔽子类
	coder *pcode = new cppcoder;//可以使用父类的指针创建子类的对象	父类指针接收子类指针的地址



	pcode->Coding();//调用coder中的Coding()函数


	//未调用构造
	cppcoder  *pcppcode = reinterpret_cast<cppcoder *>(pcode);//reinterpret_cast 指针转换
	pcppcode->Coding();

	cout << typeid(pcode).name() << endl;
	cout << typeid(pcppcode).name() << endl;

	system("pause");
}


void main1()
{
	//子类需要依赖父类,所以后创建先删除
	cppcoder *pcppcode = new cppcoder;//构造函数调用顺序 基类-->子类

	pcppcode->GirFriend();
	pcppcode->UI();

	
	pcppcode->Coding();//子类中的函数覆盖了父类中的Coding 函数
	
	//每一个子类都会默认生成一个父类的对象
	//调用父类同名函数的方法
	pcppcode->coder::Coding();



	//子类禁止调用父类的私有成员

//	pcppcode->CodePrivate();
	delete pcppcode;//析构顺序    子类-->基类


	system("pause");
}