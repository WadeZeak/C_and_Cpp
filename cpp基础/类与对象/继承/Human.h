#pragma once
class Human
{
public:
	Human();
	~Human();
	long long idnum;

private:
	char *name;
	bool isman;
protected:
	int money;
	int House;
};


//公有继承,私有变量不能访问,实现无限传承	父类的保护与私有成员的属性不会发生变化

//私有成员	传一代就不能再继承下去  共有,保护->私有

//保护继承  保护成员不发生变化,可以无限传承 公有成员全部变为保护成员
