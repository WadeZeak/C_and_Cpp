#include<iostream>
#include<array>

using namespace std;



class classobj
{
public:
	int num;
public:
	//���캯�������� ���ܱ������������
	explicit  classobj(int data)//explicit �޶�����ʵ�岻��ʹ��=���г�ʼ��,��������
	{
		this->num = data;
		cout << "������"<<endl;

	}


	//�޲ι��캯�����Ա������������
	classobj()//���캯��������
	{

		cout << "������ԭ��" << endl;

	}

	~classobj()
	{
		cout << "����ԭ��" << endl;

	}


};


void main()
{

	//classobj obj[10];


	classobj *obj = new classobj[10];
	delete[]obj;
	cin.get();

}



void main123()
{
	//classobj obj1 = 10;//��ֵ��  ǿ��ת��  ��������
	classobj obj2(20);

	//������������к��ʵĹ��캯��
	//classobj obj(0);

	//classobj obj[10];// ��classobj��: û�к��ʵ�Ĭ�Ϲ��캯������	
	//classobj obj;// ��classobj��: û�к��ʵ�Ĭ�Ϲ��캯������	
//	classobj *obj = new (classobj(5))[6];//������
	classobj *obj = new classobj(5);


	//C++������������

	array<classobj, 2>myarray = {obj2,*obj };




	cin.get();
}




