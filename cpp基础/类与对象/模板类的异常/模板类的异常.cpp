#include<iostream>


using namespace std;


//��ģ���쳣,����ͨ����������,����һ�������ʹ��
//�麯����������ָ�����������ʵ��

//�쳣�������,һ���ӿڿ��Դ���ͨ�õ��쳣

template<class T>//typename ����ȷ����
class Array
{
	//typename Array::A()*p;////typename�޶�Ϊĳ������

private:
	int size;
	T *p;

public:
	Array(int n)
	{

		//��nԼ����100-1000֮��
		if (n>0&&n<10)
		{
			throw small(n);
		}
		else if (n>1000)
		{
			throw big(n);
		}
		else if (n<=0)
		{
			throw wrong();
		}
		else
		{
			p = new T[n];
			size = n;
		}
	}


	class wrong
	{

	public:
		virtual void show()
		{
			cout << typeid(T).name() << '\t';
			cout << "show wrong" << endl;
		}

	};

	class big:public wrong
	{
	public:
		int size;
	public:
		big(int n) :size(n)
		{



		}
		void show()
		{
			cout << size << '\t';
			cout << "big wrong" << endl;
		}
	};

	


	class small:public wrong
	{

	public:
		int size;
	public:
		small(int n) :size(n)
		{
			


		}
	};

	void show()
	{
		cout << size << '\t';
		cout << "small wrong" << endl;
	}

};





void main()
{

	try
	{
		Array<int> arr(-1);

	}
	catch (Array<int>::wrong &w)
	{
		w.show();
	}



	cin.get();
}