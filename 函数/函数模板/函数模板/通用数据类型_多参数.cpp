#include<iostream>
#include<stdlib.h>
#include<cstdarg>//����ͨ����������


using namespace std;

//����ģ��ע������
//����������һ���Ǻ���ģ������


template<typename NT>//ģ����Ҫʵ����
NT Sum(int count,NT data1,...)//�ɱ����
{

	va_list arg_ptr;//�����б��ָ��
	va_start(arg_ptr, count);//�޶���count��ʼ,֮������в����������ڲ����б���
	NT sum(0);

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(arg_ptr, NT);////�����������ν�������
	}
	va_end(arg_ptr);//�ͷ�
	return sum;
}


void main2()
{

	cout << "int_Sum=" << Sum(5, 1, 2, 3, 4, 5) << endl;
	cout << "int_Sum=" << Sum(5, 1, 2, 3, 4, 5,6) << endl;
	cout << "int_Sum=" << Sum(5, 1, 2, 3, 4, 5,7,8) << endl;



	cout << "int_Sum=" << Sum(5 ,1.5, 2.8, 3.9, 4.4, 5.7) << endl;
	cout << "int_Sum=" << Sum(6, 1.5, 2.8, 3.9, 4.4, 5.7,10.2) << endl;



	system("pause");
}