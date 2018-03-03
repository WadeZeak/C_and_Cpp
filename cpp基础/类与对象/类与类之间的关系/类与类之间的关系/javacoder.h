#pragma once
#include "coder.h"


//私有继承,父类的公有成员,保护成员均变为子类的私有成员


class javacoder :
	private coder
{
public:
	javacoder();
	~javacoder();
};

