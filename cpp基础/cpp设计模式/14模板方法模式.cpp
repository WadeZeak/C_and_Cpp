#include <vector>
#include <string>
#include<iostream>

using namespace std;

//ģ�巽��ģʽ
//�Ѳ���Ĵ��벿�ֶ�ת�Ƶ������У����ɱ�Ĵ�����virtual����������д

//ģ�巽��ģʽ:ģ�巽��ģʽ׼��һ��������,�������߼��Ծ��巽���;��幹���ӵ�
//��ʽʵ��,Ȼ������һЩ���󷽷�����ʹ����ʵ��ʣ����߼�
//��ͬ����������Բ�ͬ�ķ�ʽ��ʵ����Щ���󷽷�,�Ӷ���ʣ����߼��в�ͬ��ʵ��
//���ƶ�һ�������߼����,���������ϸ����������ȥʵ��

//ͬһԭ���ڲ�ͬ�������ʹ�ò�ͬ�ķ���

class AbstractClass//ԭ��
{
public:
	void Show()
	{
		cout << "����" << GetName() << endl;
	}
protected:
	virtual string GetName() = 0;
};



class Naruto : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "��Ӱʷ����˧���ߴ�Ŀ---һ������naruto";
	}
};




class OnePice : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "�����޶����Ĵ���---·��";
	}
};



//�ͻ���
int mainxxxx()
{
	Naruto* man = new Naruto();
	man->Show();

	OnePice* man2 = new OnePice();
	man2->Show();

	cin.get();
	return 0;
}
