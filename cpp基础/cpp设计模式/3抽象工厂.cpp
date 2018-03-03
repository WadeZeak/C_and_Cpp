#include <string>
#include <iostream>
#include <vector>


using namespace std;


//工厂模式 客户类和工厂类分开
//消费者任何时候需要某种产品,向工厂请求即可
//消费者无需修改就可以接纳新产品
//缺点就是当产品修改时,工厂类需要进行相应的修改,如 如何创建以及向客户提供




//消费者不固定,工厂不固定,工厂根据消费者的需求而定
//工厂的抽象类包含了两个抽象类接口(消费者与操作)
//实现消费者的抽象类,消费者派生类的实现,实例化就是消费者
//操作的抽象基类,实现派生类的各种操作,实例化的操作



//用户抽象接口
class IUser
{
public:
	virtual void GetUser() = 0;
	virtual void InsertUser() = 0;
};


//SQL用户
class CSqlUser : public IUser //继承抽象类,实现sql数据库使用者的实例化
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


//ACCESS用户
class CAccessUser : public IUser//继承抽象类,实现access数据库使用者的实例化
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




//部门抽象接口
class IDepartment  //抽象类,提供接口
{
public:
	virtual void GetDepartment() = 0;//纯虚接口,抽象类
	virtual void InsertDepartment() = 0;
};




//ACCESS部门
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



//SQL部门类
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





//抽象工厂
class IFactory
{
public:
	virtual IUser* CreateUser() = 0;
	virtual IDepartment* CreateDepartment() = 0;
};


//ACCESS工厂
class AccessFactory : public IFactory//抽象工厂的实现
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



//SQL工厂
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





//客户端：
int mainfdmbk()
{
	IFactory* factory = new SqlFactory();
	IUser* user = factory->CreateUser();
	IDepartment* depart = factory->CreateDepartment();
	user->GetUser();
	depart->GetDepartment();
	return 0;
}



//消费者不固定,工厂不固定(工厂根据消费者的动作 )

//操作抽象基类,实现派生类的各种操作,实例化操作

int mainafafa()
{

	IFactory* factory ;//抽象工厂
	IUser* user;//抽象消费者
	IDepartment* depart ;//消费者提供的操作

	factory = new AccessFactory();//基类指针指向派生类对象

	user = factory->CreateUser();//CAccessUser
	depart = factory->CreateDepartment();//CAccessdepartment

	//执行操作
	user->GetUser();
	depart->GetDepartment();

	user->InsertUser();
	depart->InsertDepartment();



	user = DataAccess::ctreatUser();
	depart = DataAccess::creatDepartment();

	cin.get();
	return 0;


}