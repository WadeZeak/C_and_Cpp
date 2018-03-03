#pragma once

#include"Parent.h"
class Son:public Parent
{

public:
	char *pson;
public:
	Son();
	~Son();
	void Show();
	void IsSon();

};

