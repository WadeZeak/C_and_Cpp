#include<stdlib.h>
#include<iostream>

using namespace std;


//����
//�����ڶ����ʼ��ʱ����Ҫ�����󶨣������в��ܶ������ض���
//һ������ı�������ʹ�÷�ʽ��Ч���ϣ���ʹ�õĶ�������һ��




//�ı��ⲿ������ʹ��ָ���������


//��ֵ������ͨ��ָ��ʵ�ֵ�


void main1()
{

	int a = 5;
	int &ra(a);//���ó�ʼ���������
	ra = 100;

	cout << ra << endl;

	system("pause");
}


void change(int &a)//���ã��½�һ����������ʵ�����õ�ֵ��ָ��ͬһ����ַ
{

	a = 19;

	cout << "change_a_add=" << &a << endl;
}



void main2()
{
	int a = 10;

	cout << "main_a_add=" << &a << endl;

	//cout << "main_a=" << a << endl;


	change(a);
	cout << "main_a=" << a << endl;





	system("pause");
}




void main3()
{

	int num1(5);
	int num2(20);
	int *pnum(&num1);
	cout << "num1_add=" << &num1<<endl;
	cout << "num2_add=" << &num2 << endl;

	//����,���õ��Ǳ����� 


int * &prnum=pnum;//ָ����Ҫ���ݵ�ַ


//���ÿ��Ըı�ָ���ָ��Ҳ���Ըı������ֵ


	prnum = &num2;
	cout << "pnum=" << pnum << endl;

	cout << "*pnum=" <<* pnum << endl;



	system("pause");
}

void main4()
{

	int num1(5);
	int num2(20);


	cout << &num1 << endl;
	cout << &num2 << endl;
	
	int *p;

	p = &num1;//ȡ��ַ &num1(��ֵ) �ڼĴ���


	p = &num2;

	int * &&pnum = &num1;//������ֵ (ָ�������)
	//& ������ֵ  ;  && ������ֵ

	int *px = pnum;//���ڶ��󿽱�


	system("pause");
}


int &Get()
{

	int a = 10;//��ջ��,����ʹ����ɺ󣬻����ڴ�
	int &ra = a;
	cout << &ra << endl;

	return ra;

}




void main5()
{
	
	int & rnum = Get();


	cout << rnum << endl;

	cout << "ABCDE" << endl;

	cout << rnum << endl;//�Ѿ�ˢ��ջ��

	system("pause");
}




int * & getdata()//����һ��ָ�������
{
	int *p;//pָ��Ķ��ϵĵ�ַ ��ջ�ϴ洢

	p	= new int;//���Ϸ����ڴ�

	*p = 100;//�ڶ���

	int * &rp = p;//����ָ��

	return rp;//�������õ�ָ��,֮����ջ��pָ���ָ��ˢ��


}



void main6()
{


	int * &rp = getdata();//�����з��ص�ָ��������ָ�����ó�ΪҰָ��
	int *p = rp;//�����ڶ��ϵĵ�ַ
	cout << *rp << endl;

	//cout << *rp << endl;//�����з��ص�ָ���Ѿ����������Ի��ΪҰָ�룬����ָ������Ҳ�����
	cout << *p << endl;
	cout << *p << endl;
	//delete(p);//ɾ����,ָ���ֵ�ᷢ���仯����ֹ����
	//free �ͷ��ڴ�

	cout << *p << endl;
	system("pause");
}





void main()
{
	//���ã��ӼĴ�����ֱ�Ӹ�ֵ����һ���������Ҫ�ӼĴ������ڴ棬�ٸ�ֵ
	int a(10);//��ջ��
	int &ra = a;//��ֵ����
	int * &&rra = &a;//��ֵ���� �ӼĴ�����ֱ�Ӹ�ֵ


}











