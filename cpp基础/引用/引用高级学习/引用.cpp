#include<iostream>
#include<stdlib.h>

using namespace std;


void main1()
{

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int(&ra)[10](a);//��ԭ���ı���һ����������ַ����ͬ��

	int i=0;


	for (auto data : ra)//C++11 ��ѭ��
	{
		data = i + 5;
		cout << data << endl;
		i++;
	}

	cout <<"a= " << a << endl;
	cout << "ra= " << ra << endl;



	cout << "&a= " << &a << endl;
	cout << "&ra= " << &ra << endl;

	system("pause");
}



void main2()
{

	int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int(&ra)[2][5](a);//��ԭ���ı���һ����������ַ����ͬ��

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << ra[i][j] << "\t";
		}

		cout << endl;
	}

	system("pause");

}



int add(int a, int b)
{

	return a+b;
}


int Sub(int a, int b)
{

	return a - b;
}



void change( int (*&rp)(int a, int b) )
{
	rp = Sub;

}





int(*&changep(int(*&rp)(int, int)))(int, int)//����ָ������
{
	rp = Sub;
	return rp;//��������
}


void main4()
{

	int(*p)(int a, int b) = add;//����ָ���ʼ��
	cout << p(5, 10)<<endl;

//	int (*&rp)(int a, int b) (p);//���ú���ָ��
	// ( )ֻ�����ڳ�ʼ��
	//rp = Sub;//��ʱ����ʹ�� ( )


	//change(p);

	p = changep(p);

	cout << p(5, 10) << endl;

	system("pause");
}




void main5()
{
//	int *p[4];//ָ������
	int a = 1, b = 2, c = 3;

	int * px[3] = { &a, &b, &c };

	//int && p [4] = {a,b,c };
	//���������ǷǷ���



}




struct MyStruct1
{
	int a;//4
	char chr;//4
	double db;//8

	
	void go()
	{
		cout << "Hello World!!!" << endl;

	}

};


struct MyStruct2
{
	int a;//8
	double db;//8
	char chr;//8
	
};


struct MyStruct3
{
	int &a;
	double &db;
	char &chr;//���õı�����ָ��
	//���ñ���ռ4�ֽ�
};



void main6()
{

	//cout << sizeof(MyStruct1) << endl;//16
	//cout << sizeof(MyStruct2) << endl;//24


	int num = 10;
	int &rnum = num;
	double db = 14.4;
	double &rdb = db;//ֱ������

	//ֱ������sizeof,���������õ����ݵ���ռ�ռ��С
	cout << sizeof(rnum) << endl;//4
	cout << sizeof(rdb) << endl;//8
	cout << sizeof(MyStruct3) << endl;//12

	system("pause");
}


int getdata(int &&num)//��ֵ���ã���Լ�ڴ濽�����ڴ��Ż�������
{
	cout << num << endl;
	num += 10;
	return num;
}




void main7()
{

	int a = 4;
	int b = 5;

	cout << getdata(a + b) << endl;


	system("pause");
}


//��ֵ ��һ�����ȡ��ֵַ������ֵ
//��ֵ��Щ����¿��ԣ���Щ����²�����

void main8()
{
	int a = 1;
	int b = a + 1;//��ֵ->��ֵ

	cout << getdata(move(a)) << endl;
	//std::move  ����ֵת��Ϊ��ֵ��C++11�й涨
	system("pause");
}




void main9()
{

	const int num(6);
	char str[10]("Hello");
	const char *pc(str);//ָ������ָ���޶���ָ��������޷��޸�,+1��+2��+3
	str[3] = 'a';//����
	//pc[3] = 'a';//������
	pc = "World";//����,ָ����һ�������ַ������׵�ַ

	system("pause");
}



void main10()
{


	const int num(6);
	char str[10]("Hello");
	const char(&rstr)[10](str);//��������
	const char(&rrstr)[10](rstr);//���ÿ��Ը���һ�����ó�ʼ��

	str[4] = 's';
	//rstr[4] = 'a';//�﷨����
	
	system("pause");
}




void main()
{
	int(*p)(int, int) = Sub;
	cout << p(10, 20) << endl;

	int(* const &px)(int ,int) (p);//ָ�뺯������

///	px = add; //�������޸�


}

