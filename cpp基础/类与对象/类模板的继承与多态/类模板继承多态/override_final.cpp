#include<iostream>

using namespace std;

//C++11 �ؼ��� final  override
//final �ܾ����� ĳЩ����½ӿھܾ�����
//����final�ؼ��ֵ��麯�����޷�����д,Ԥ���ӿ�


//override �������� �������� ����û�нӿڻᱨ��


class Base
{
public:

	// final ֻ�������麯��
	virtual void  print() final // ����Ϊ��final���ĺ����޷���д
	{

		cout << "final�ؼ��ֲ���" << endl;

	}

	 void Show() 
	{
		cout << "Base Class" << endl;
	}

	virtual  void Run()
	 {
		 cout << "Base_Run" << endl;
	 }




};


class First_d :public Base
{

public:

	/*void print()
	{



	}
*/
	//override ǿ�������˻���ķ���  ��Ҫ��д����ķ���,����ؼ����޷���Ч
	void Run() override 
	{
		cout << "First_Run" << endl;
	}

	void Show()
	{
		cout << "First_d Class" << endl;
	}




};





void main()
{

	First_d fir_d1;

//	fir_d1.Show();

	fir_d1.Run();
	//system("pause");
	
	cin.get();
}
