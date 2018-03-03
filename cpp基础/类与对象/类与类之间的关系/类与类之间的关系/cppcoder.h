#pragma once
#include"coder.h"
#include<iostream>


//公有继承不影响父类保护成员以及私有成员的属性变化
//子类可以在类的内部访问父类的保护成员变量，在外部则不可以


class cppcoder:public coder
{
public:
	cppcoder();
	~cppcoder();

	void UI();
	void Coding();
};

