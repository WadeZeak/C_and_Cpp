#include<stdlib.h>
#include"iostream"



//�����ռ��еĳ�Ա���ǹ��е�
namespace Move
{
	int y(5);
	int(*padd)(int, int);//�����ӿ�ָ��
//private:  //namaspace����˽��(private)����͸����
	int x(100);


	class MyClass
	{

	public:
		int a;
	private://���еĳ�ԱĬ����˽�е�,ʵ�ַ�װ
		int b;
	};

}

int add(int a, int b)
{
	return a + b;

}



struct MyStruct//�ṹ��Ĭ����͸����,private��ʾ˽�еģ�ֻ���ڲ����Ե���
{
private:
	int a;
public:
	int b;
};


int addplus(int a, int b)
{
	std::cout << a << "+" << b << std::endl;
	return a + b;
}


void mainadcv()
{

	Move::padd = add;
	std::cout<<	Move::padd(10, 20)<<std::endl;
	Move::padd = addplus;
	std::cout << Move::padd(40, 50) << std::endl;

	MyStruct S1;
	//S1.a=100;//�ṹ����˽�г�Ա���ܷ���
	S1.b=10;




	system("pause");
}