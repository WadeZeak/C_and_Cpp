#include<iostream>

using namespace std;


//rtti 实时类型检测
// 依赖于typeid dynamic_cast
//dynamic_cast 类型不匹配转换失败，返回为空,保证类型安全

//有虚函数  通过虚函数表 定位到了类型
class AAA
{
public:
	int num=1;
	static int data;

	virtual void Run()
	{

		cout << "AAA_Run" << endl;

	}

};


int AAA::data = 1;


class BBB:public AAA
{
public:
	int num=2;
	static int data;


	 void Run()
	{

		cout << "BBB_Run" << endl;

	}

	 void test()
	 {
		 cout << num << endl;
		 cout << "BBB_test" << endl;
	 }
};


int BBB::data = 2;


void main()
{

	AAA aaa;
	BBB bbb;
	AAA *pa1 = &aaa;
	AAA *pa2 = &bbb;
	BBB *pb(nullptr);

	//static_cast 直接赋地址 不安全 与虚函数无关
	//pb = static_cast<BBB *>(pa1);//赋值成功
	//pb = static_cast<BBB *>(pa2);

	pb = reinterpret_cast<BBB *>(pa1);//指针止之间的转换
	//在内存没有对象,出现乱码


	cout << pb << endl;
	pb->test();

	cin.get();
}



void main3()
{
	AAA aaa;
	BBB bbb;
	AAA *pa1 = &aaa;
	AAA *pa2 = &bbb;
	BBB *pb(nullptr);
	//pb->test();//类的空指针可以正常调用没有访问成员变量的函数
	pb = dynamic_cast<BBB *>(pa2);
	//pb = dynamic_cast<BBB *>(pa1);//dynamic_cast转换失败,为空 00000000 ;转换成功,获取地址
	//dynamic_cast 实现转换时,类中必须有虚函数,根据虚函数表转换,否则不能转换

	cout << pb << endl;
	pb->test();




	cin.get();

}




void main2()
{

	//AAA *pa2 = new AAA;
	//AAA *pa1 = new BBB;

	AAA aaa;
	BBB bbb;
	AAA *pa1 = &aaa;
	AAA *pa2 = &bbb;


	cout << typeid(pa1).name() <<"\t"<<typeid(pa2).name()<< endl;
	cout << (typeid(pa1).name()== typeid(pa2).name()) << endl;

	cout << typeid(*pa1).name() << "\t" << typeid(*pa2).name() << endl;
	cout << (typeid(*pa1).name() == typeid(*pa2).name()) << endl;


	//显示结果 
	//没有虚函数
	//class AAA *     class AAA *
	//class AAA       class AAA

	//有虚函数  通过虚函数表 定位到了类型
	//class AAA *     class AAA *
	//class AAA       class BBB


	cin.get();

}



void main1()
{



	BBB bbb;
	bbb.num = 10;//覆盖现象
	bbb.AAA::num = 20;
	cout << bbb.num << "\t" << bbb.AAA::num << endl;

	cout << bbb.data << "\t" << bbb.AAA::data << endl;
	cout << &bbb.data << "\t" << &bbb.AAA::data << endl;



	cin.get();


}