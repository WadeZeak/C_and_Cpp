#include<iostream>

using namespace std;

class Parent
{
public:
	int num;

	void Show()
	{
		cout <<" Parent_num=" << num << endl;
	}

	Parent()
	{
		num = 10;
	}

};


class Son :public Parent
{
public:
	int num;
	Son()
	{
		num = 20;
	}

	void Show()
	{
		cout << "Son_num= "<<num << endl;
	}


};


void main()
{
	Son *pson = new Son;
	pson->Show();//子类覆盖父类的重名成员


	//子类访问父类的重名成员
	pson->Parent::Show();//域说明
	Parent *pparent = reinterpret_cast<Parent *>(pson);//指针的类型转换
	pparent->Show();

	system("pause");
}
