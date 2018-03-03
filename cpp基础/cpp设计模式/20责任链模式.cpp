#include <iostream>
#include <string>
#include <vector>
using namespace std;

//������ģʽ:��������ģʽ�У��ܶ������ÿһ����������¼ҵ����ö��������γ�һ����
//�������������ϴ��ݣ�֪������ĳһ�������������
//�ͻ�����Ҫ֪�����ϵ�����һ����������������ϵͳ�����ڲ�Ӱ��ͻ��˵����
//��������֯���ͷ������񡣴�����������ѡ�񣬳е����λ��߽����Ƹ��¼ҡ�
//һ������������ղ����κν��ն˶������



//����
class Request
{
public:
	string RequestType;
	string RequestContent;
	int m_nNumber;
};


//������
class Manager
{
protected:
	Manager* superior;//��һ���Ķ���ָ��
	string name;
public:
	Manager(string temp)
	{
		name = temp;
	}
	void SetSuperior(Manager* temp)
	{
		superior= temp;
	}
	virtual void requestApplication(Request* request) = 0;
};



//����
class CommonManager : public Manager
{
public:
	CommonManager(string strTemp) : Manager(strTemp){}
	virtual void requestApplication(Request* request)
	{
		if (request->RequestType == "���" && request->m_nNumber<2)
		{
			cout << name << " " << request->RequestContent<<" "<<"����" << request->m_nNumber << endl;
		}
		else
		{
			if (superior!=NULL)
			{
				superior->requestApplication(request);//���ϼ�����

			}
		}
	}
};




//�ܼ�
class MajorDomo : public Manager
{
public:
	MajorDomo(string name) : Manager(name){}

	virtual void requestApplication(Request* request)
	{
		if (request->RequestType == "���" && request->m_nNumber<5)
		{
			cout << name << " " << request->RequestContent << " " << "����" << request->m_nNumber << endl;
		}
		else
		{
			if (superior != NULL)
			{
				superior->requestApplication(request);

			}
		}
	}

};

class GeneraManager:public Manager//�ܾ���
{

public:

	GeneraManager(string sname) :Manager(sname){}

	virtual void requestApplication(Request* request)
	{
	
			cout << name << " " << request->RequestContent << " " << "����" << request->m_nNumber << endl;

	}


};



//�ͻ���
int main88888888888888888()
{
	
	CommonManager *jingli = new CommonManager("����");
	MajorDomo *zongjian = new  MajorDomo("�ܼ�");
	GeneraManager *zongjingli = new GeneraManager("�ܾ���");

	jingli->SetSuperior(zongjian);
	zongjian->SetSuperior(zongjingli);


	//����
	Request *request = new	Request();
	request->RequestType = "���";
	request->m_nNumber = 1;
	request->RequestContent = "xxx���";

	jingli->requestApplication(request);//����������

	request->m_nNumber = 4;
	jingli->requestApplication(request);


	request->m_nNumber = 10;
	jingli->requestApplication(request);


	cin.get();
	return 0;
}

