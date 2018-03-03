#pragma once
#include "coder.h"

//保护继承
//父类的保护成员，公有成员都会变为保护成员
//复刻的私有成员属性不变


class ccoder :
	protected coder
{
public:
	ccoder();
	~ccoder();
};

