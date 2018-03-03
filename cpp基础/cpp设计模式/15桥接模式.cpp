#include <iostream>
#include <string>
#include <vector>
using namespace std;



//�Ž�ģʽ:��ʵ�ֻ��������ź,ʹ�ö��߿��Զ����ı仯
//Ҳ����˵������֮���ǿ��ϵ��Ϊ����ϵ
//Ҳ����˵��һ�����ϵͳ�ĳ��󻯺�ʵ�ֻ�֮��ʵ�����
//�ۺϹ�ϵ�����Ǽ̳й�ϵ,ʹ�����߿��Զ����ı仯

//�ۼ���ʾ������֮��Ĺ�ϵ�������벿�ֵĹ�ϵ

//���


//�����еĽӿ��������,����һ��ϵͳ


//�ֻ����
class HandsetSoft
{
public:
	virtual void Run() = 0;
};



//��Ϸ���
class HandsetGame : public HandsetSoft
{
public:
	virtual void Run()
	{
		cout << "�����ֻ���Ϸ" << endl;
	}
};



//ͨѶ¼���
class HandSetAddressList : public HandsetSoft
{
public:
	virtual void Run()
	{
		cout << "�ֻ�ͨѶ¼" << endl;
	}
};



//�ֻ�Ʒ��
class HandsetBrand
{
protected:
	HandsetSoft* m_soft;
public:
	void SetHandsetSoft(HandsetSoft* temp)
	{
		m_soft = temp;
	}
	virtual void Run() = 0;
};



//MƷ��
class HandsetBrandM : public HandsetBrand
{
public:
	virtual void Run()
	{
		m_soft->Run();
	}
};



//NƷ��
class HandsetBrandN : public HandsetBrand
{
public:
	virtual void Run()
	{
		m_soft->Run();
	}
};



//Ʒ��+���=�ֻ�

//�ͻ���
int main1111111111111111()
{
	HandsetBrand *brand;//�ֻ�Ʒ��
	brand = new HandsetBrandM();//MƷ��

	brand->SetHandsetSoft(new HandsetGame());//��Ϸ���
	brand->Run();

	brand->SetHandsetSoft(new HandSetAddressList());//ͨ��¼���
	brand->Run();
	cin.get();
	return 0;
}
