#include<stdlib.h>
#include<iostream>

using namespace std;

enum Color :char
{
	red=10, green='a', yellow, blue, white
};



void main()
{

	enum Color  color;

	//color = 1;//确保在枚举范围内不出错
	
	//color = 'a';


	color = Color::green;//新语法


	enum Color color1(red);
	enum Color color2 = blue;


	cout << "red=" << red << endl;
	cout << "green=" <<green << endl;
	cout << "yellow=" << yellow<< endl;
	cout << "blue=" << blue << endl;
	cout << "white=" << white << endl;

	cout << "color=" << color << endl;


	system("pause");
}