#include<iostream>
#include<stdlib.h>

using namespace std;

//
//
//auto Get(int num, double db)->decltype(num*db)//ָ��auto������
//{
//
//}


//�Զ��������ͣ�����ʵ���Ƶ�������
template<class T1,class T2>//�������ͻ�ȡ����
auto Get(T1 data, T2 bigdata)->decltype(data*bigdata)//auto����������Ϊdata*bigdata���������
{
	return data*bigdata;
}



//����,������������ʹ���Զ�����
//void Fun(auto num)
//{
//
//
//}






void main()
{

cout<<"typename:"<< typeid(Get(12.0, 'a')).name()<<endl;//��ӡ��������
cout << "Get()=" << Get(12.1, 'a') << endl;


	system("pause");
}