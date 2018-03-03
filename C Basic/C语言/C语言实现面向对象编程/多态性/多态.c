#include<stdio.h>
#include<stdlib.h>


struct Hello
{
	void(*ph)(struct Hello *p);//void 无类型 为了方便强制转换
};


struct World
{
	struct Hello hello1;
	void(*ph)(struct world *p); 
};


struct China
{
	struct Hello hello2;
	void(*ph)(struct China *p);
};


void printgo(struct Hello *p)
{
	printf("GoGoGoGo!!!\n");

};

void printchina(struct China *p)
{

	printf("Hello China!!!\n");

}



void printworld(struct World *p)
{

	printf("Hello World!!!\n");

}



void main()
{
	struct China  china;
	china.hello2.ph = printgo;
	china.ph = printchina;
	china.ph(&china);
	china.hello2.ph(&china.hello2);

	struct World world;
	world.hello1.ph = printgo;
	world.ph = printworld;
	world.ph(&world);
	world.hello1.ph(&world.hello1);

	system("pause");

}