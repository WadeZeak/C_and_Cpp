#include<iostream>
#include<stdlib.h>


using namespace std;

template<class T>
void com(T arg)//ģ�庯��,������Ч����Ҫ���ð�װ��
{

	cout << typeid(arg).name() << endl;
	cout << "com_agr=" << &arg << endl;
	arg++;
}



void main()
{

	int count = 10;
	int &rcount = count;//����

	com(count);
	cout << count << endl;
	com(&count);//������ǵ�ַ
	cout << count << endl;

	com(rcount);//��������
	cout << "main_rcount="<<&rcount << endl;
	cout << count << endl;

	//std::ref(����) ����ģ��ֱ������
	com(ref(count));//���ð�װ��  ֱ�Ӹı����          ���ú���ģ�壬��Ҫ�ı����ʱ,ʹ�ú�����װ��
	cout << "main_count=" << &ref(count) << endl;
	cout << count << endl;

	cin.get();
}






