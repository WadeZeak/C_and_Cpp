#include<stdlib.h>
#include<iostream>
#include<functional>
///using namespace std;

//������װ��
//(1)���ִ�нӿڣ�ͨ�õĽӿ���ƹؿ�����,����
//(2)������װ����������ģ�壬ʵ��ͨ�÷���
//(3)�������������Ƕ������һ������
//(4)���ڹ�����Ƕ�������ⲿ�����ĵ���



//������װ�� T�������� F����
template<typename T,typename F>
T Run(T t ,F f)
{
	using std::cout;
	using std::endl;

	static int count = 0;//������
	count++;
	cout << "������װ�� Runִ�ж���" << count << "��" << endl;
	if (count>1)//�޶�ִ�д���
	{
		T x(0);
		return x;

	}

	return f(t);///�����������

}

template<typename T, typename F>
T Run(T t1,T t2 ,F f)
{
	
	return f(t1,t2);///�����������

}

int Mul(int a, int b)
{
	return a*b;
}






void main()
{
	using std::cout;//C++11 ���﷨ namespace ר������һ���ؼ��� ����Ҫstd
	using std::function;
	using	std::endl;
	using std::cin;

	double db = 12.9;//
	int num1 = 19;
	int num2 = 20;
	function<double(double)>fun1 = [](double u)//���庯����װ��
	{  
		return u * 2;
	};


	function<double(double)>fun2 = [](double u)
	{
		return u*u;
	};


	function<int(int, int)>fun3 = [](int u1, int u2)
	{
		return u1 + u2;
	};



	function<int(int, int)>fun4 = Mul;//������װ�������ⲿ����





	cout << Run(db, fun1) << endl;//����


	cout << Run(db, fun2) << endl;


	cout << Run(num1, num2,fun3) << endl;

	cout << Run(num1, num2, fun4) << endl;

	cin.get();//�ȼ���getchar������һ���ַ�
	//system("pause");
}
