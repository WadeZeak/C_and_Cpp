
#include "Complex.h"

void StackRun()
{

	Complex complex1;//在栈上,使用完成后,自动回收释放
	complex1.Show();


}



void HeapRun()
{


	Complex *pcomplex = new Complex;//对象在堆区
	pcomplex->Show();
	pcomplex->ShowAll(10, 20);
	pcomplex->Setxy(100, 200);
	
	//内部函数重载，函数指针，明确参数
	pcomplex->Show(15,25);

	delete pcomplex;


}


void main()
{

	HeapRun();
	cin.get();


}