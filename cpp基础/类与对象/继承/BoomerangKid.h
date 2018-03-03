#pragma once
#include "Human.h"

//私有继承，其孙类无法继续继承

//啃老族
class BoomerangKid :
	private Human
{
public:
	BoomerangKid();
	~BoomerangKid();

};

