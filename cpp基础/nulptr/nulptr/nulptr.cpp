#include<iostream>

using namespace std;

void Go(char *p)
{

	cout << "Gop" <<endl;

}





void Go(int num)
{

	cout << "Gonum" << endl;
}


void Go(void *p)
{

	cout << "Govoidp" << endl;

}
void Go(nullptr_t p)
{

	cout << "Gonullptr_t" << endl;

}


void main()
{
	//p 进行了类型的限定
	//void *p = NULL;//C+=强类型,严格检查类型，
	//void *p = nullptr;
	//Go(p);根据类型处理


//	Go(NULL);//调用了Go(int num)  造成了歧义,C++使用nullptr

Go(nullptr);//C++空指针,类型nullptr_t
	cin.get();





}