#include<iostream>
#include<string>
#include<vector>


using namespace std;




template <class T>
class MyClass
{

private:
	T x;
	T y;
public:
	MyClass(T t1, T t2) :x(t1), y(t2)
	{

	}


	
	/*void show()
	{
		cout << x << "\t" << endl;
	}
*/

	//��Ԫ��������ڲ�����˽�г�Ա,ʵ������
	
	//��ģ�����Ԫ������÷����ڲ�
	friend void display(MyClass<T>  &myclass)//��Ԫ����
	{
		cout << "type_name=" << typeid(T).name() << endl;
		cout << myclass.x << "\t" << myclass.y << endl;
	}


	friend MyClass  * operator + (MyClass &myclass1, MyClass &myclass2)
	{
		MyClass *p = new MyClass(myclass1.x + myclass2.x, myclass1.y + myclass2.y);
		
		return p;
	}



};





void main1()
{


	MyClass<int> myclass1(10, 20);
	MyClass<int> myclass2(30, 40);
	//display(myclass);

	MyClass<int>*pnew = myclass1 + myclass2;
	display(*pnew);

	cin.get();

}





void main()
{
	
	MyClass<int> myclass(10, 20);

	vector<int> v1;
	vector<vector<int>>v2;
	//vector<vector<vector<int>>>v3;

	//��д
	using VEC3 = vector < vector<vector<int>> > ;
	VEC3 v3;//�ȼ�����άint��������

}







