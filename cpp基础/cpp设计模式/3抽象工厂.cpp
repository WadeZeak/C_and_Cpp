#include <string>
#include <iostream>
#include <vector>


using namespace std;


//����ģʽ �ͻ���͹�����ֿ�
//�������κ�ʱ����Ҫĳ�ֲ�Ʒ,�򹤳����󼴿�
//�����������޸ľͿ��Խ����²�Ʒ
//ȱ����ǵ���Ʒ�޸�ʱ,��������Ҫ������Ӧ���޸�,�� ��δ����Լ���ͻ��ṩ




//�����߲��̶�,�������̶�,�������������ߵ��������
//�����ĳ��������������������ӿ�(�����������)
//ʵ�������ߵĳ�����,�������������ʵ��,ʵ��������������
//�����ĳ������,ʵ��������ĸ��ֲ���,ʵ�����Ĳ���



//�û�����ӿ�
class IUser
{
public:
	virtual void GetUser() = 0;
	virtual void InsertUser() = 0;
};


//SQL�û�
class CSqlUser : public IUser //�̳г�����,ʵ��sql���ݿ�ʹ���ߵ�ʵ����
{
public:
	virtual void GetUser()
	{
		cout << "Sql User" << endl;
	}
	virtual void InsertUser()
	{
		cout << "Sql User" << endl;
	}
};


//ACCESS�û�
class CAccessUser : public IUser//�̳г�����,ʵ��access���ݿ�ʹ���ߵ�ʵ����
{
public:
	virtual void GetUser()
	{
		cout << "Access GetUser" << endl;
	}
	virtual void InsertUser()
	{
		cout << "Access InsertUser" << endl;
	}
};




//���ų���ӿ�
class IDepartment  //������,�ṩ�ӿ�
{
public:
	virtual void GetDepartment() = 0;//����ӿ�,������
	virtual void InsertDepartment() = 0;
};




//ACCESS����
class CAccessDepartment : public IDepartment
{
public:
	virtual void GetDepartment()
	{
		cout << "Access GetDepartment" << endl;
	}
	virtual void InsertDepartment()
	{
		cout << "Access InsertDepartment" << endl;
	}
};



//SQL������
class CSqlDepartment : public IDepartment
{
public:
	virtual void GetDepartment()
	{
		cout << "sql getDepartment" << endl;
	}
	virtual void InsertDepartment()
	{
		cout << "sql insertdepartment" << endl;
	}
};





//���󹤳�
class IFactory
{
public:
	virtual IUser* CreateUser() = 0;
	virtual IDepartment* CreateDepartment() = 0;
};


//ACCESS����
class AccessFactory : public IFactory//���󹤳���ʵ��
{
public:
	virtual IUser* CreateUser()
	{
		return new  CAccessUser();
	}

	virtual IDepartment* CreateDepartment()
	{
		return new CAccessDepartment();
	}
};



//SQL����
class SqlFactory : public IFactory
{
public:
	virtual IUser* CreateUser()
	{
		return new  CSqlUser();
	}

	virtual IDepartment* CreateDepartment()
	{
		return new CSqlDepartment();
	}
};

/*************************************************************************************/


class DataAccess
{


private:
	static string db;

public:
	static IUser * ctreatUser()
	{
		if (db=="access")
		{
			return new CAccessUser();

		}
		else if (db == "sql")
		{
			return new CSqlUser();

		}

	}

	static IDepartment * creatDepartment()
	{
		if (db == "access")
		{
			return new CAccessDepartment();

		}
		else if (db == "sql")
		{
			return new CSqlDepartment();

		}

	}


};




string DataAccess::db = "sql";





//�ͻ��ˣ�
int mainfdmbk()
{
	IFactory* factory = new SqlFactory();
	IUser* user = factory->CreateUser();
	IDepartment* depart = factory->CreateDepartment();
	user->GetUser();
	depart->GetDepartment();
	return 0;
}



//�����߲��̶�,�������̶�(�������������ߵĶ��� )

//�����������,ʵ��������ĸ��ֲ���,ʵ��������

int mainafafa()
{

	IFactory* factory ;//���󹤳�
	IUser* user;//����������
	IDepartment* depart ;//�������ṩ�Ĳ���

	factory = new AccessFactory();//����ָ��ָ�����������

	user = factory->CreateUser();//CAccessUser
	depart = factory->CreateDepartment();//CAccessdepartment

	//ִ�в���
	user->GetUser();
	depart->GetDepartment();

	user->InsertUser();
	depart->InsertDepartment();



	user = DataAccess::ctreatUser();
	depart = DataAccess::creatDepartment();

	cin.get();
	return 0;


}