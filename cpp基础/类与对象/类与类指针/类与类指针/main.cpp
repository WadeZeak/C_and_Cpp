
#include<iostream>
#include"Parent.h"
#include"Son.h"

using namespace std;

//��������� �����ǹ���� ������˽�е�
//ָ��Ϊ��,ָ��һ����,���Ե��÷���.���漰���ڲ���Ա����,�����ʧ��



//dynamic �������麯��

//����ָ�����ø������ ��ȫ��������
//����ָ������������� ���Ǹ����е�ͬ������
//����ָ�����ø������, ֻ�ܷ��ʸ����еĺ���
//����ָ�����ø������ �����в��漰�������ڲ������ĺ������Ե��óɹ�
//���漰����Ա�������ʵĺ���,���Ե��ã����ǻ�ʧ��
//����ָ����Է��ʸ����еĲ���������(��ʹ�� s->Parent::Show()����)




void main()
{

	Parent *pp = new Parent;
	//delete pp;

	//Son *ps = new Son;
	//delete ps;

	//Parent *pa = new Son;
	//delete pa;//û���ͷ�Ĭ�����ɵĻ������,������ڴ�й©


	Son *ps = static_cast<Son *> (pp);//������������û������,��Ҫǿת
	delete ps;//���ٵ��ڴ�����õĴ�С��,�ͷ�ʱ���Խ��
	//�Ƿ������,ռ�õ��ڴ�Խ��,Խ���׳���


	system("pause");
}

void main4()
{

	Son *p(nullptr);
	p->IsSon();//����ִ��

//	cout << p->pson << endl; //����������,������������
	 
	system("pause");


}




void main3()
{
	//�����ָ�������ʸ�����ڴ�
	Parent *p = new Parent;//����ָ�벻��ʹ�ó�ʼ��
	Son *s = static_cast<Son *>(p);//ʵ��ָ��ת��

//�����ǹ����,���Կ�����������
	s->IsParent();
	s->IsSon();//���ᷢ����ͻ

	cout << s->strpar << endl;

	//��������� ��Ա����pson ������ ���Է�����ͻ

	//cout << s->pson << endl;
//	s->Show();//�ڴ���ʳ��ֳ�ͻ s->Show()�����������ڲ����� �޷�ִ��
	system("pause");





}






void main2()
{
	Parent *p = new Son;
	p->IsParent();//�����ڸ���

	system("pause");



}





void main1()
{


	//������ʽ
	//Parent parent;
	//parent.Show();
	//parent.IsParent();

	Parent *par=new Parent;
	par->Show();
	par->IsParent();

	Son *pson = new Son;

	pson->Show();
	pson->IsSon();
	pson->IsParent();



	system("pause");




}