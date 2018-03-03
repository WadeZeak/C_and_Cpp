
#include<iostream>
#include"Parent.h"
#include"Son.h"

using namespace std;

//对于类而言 代码是共享的 数据是私有的
//指针为空,指向一个类,可以调用方法.而涉及到内部成员变量,则调用失败



//dynamic 适用于虚函数

//父类指针引用父类对象 完全正常引用
//子类指针引用子类对象 覆盖父类中的同名函数
//父类指针引用父类对象, 只能访问父类中的函数
//子类指针引用父类对象 子类中不涉及到访问内部变量的函数可以调用成功
//而涉及到成员变量访问的函数,可以调用，但是会失败
//子类指针可以访问父类中的不重名函数(不使用 s->Parent::Show()方法)




void main()
{

	Parent *pp = new Parent;
	//delete pp;

	//Son *ps = new Son;
	//delete ps;

	//Parent *pa = new Son;
	//delete pa;//没有释放默认生成的基类对象,造成了内存泄漏


	Son *ps = static_cast<Son *> (pp);//派生类对象引用基类对象,需要强转
	delete ps;//开辟的内存比所用的大小大,释放时造成越界
	//是否出错看脸,占用的内存越大,越容易出错


	system("pause");
}

void main4()
{

	Son *p(nullptr);
	p->IsSon();//正常执行

//	cout << p->pson << endl; //变量不存在,不能正常访问
	 
	system("pause");


}




void main3()
{
	//子类的指针对象访问父类的内存
	Parent *p = new Parent;//子类指针不能使用初始化
	Son *s = static_cast<Son *>(p);//实现指针转换

//函数是共享的,所以可以正常访问
	s->IsParent();
	s->IsSon();//不会发生冲突

	cout << s->strpar << endl;

	//子类对象中 成员变量pson 不存在 所以发生冲突

	//cout << s->pson << endl;
//	s->Show();//内存访问出现冲突 s->Show()引用了子类内部变量 无法执行
	system("pause");





}






void main2()
{
	Parent *p = new Son;
	p->IsParent();//不存在覆盖

	system("pause");



}





void main1()
{


	//对象形式
	//Parent parent;
	//parent.Show();
	//parent.IsParent();

	Parent *par=new Parent;
	par->Show();
	par->IsParent();

	Son *pson = new Son;

	pson->Show();
	pson->IsSon();
	pson->IsParent();



	system("pause");




}