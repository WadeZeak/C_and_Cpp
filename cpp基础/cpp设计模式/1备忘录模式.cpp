#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Memo;

//����¼ģʽ:����¼������һ�������洢��һ�������ڲ�״̬�Ŀ��Ҷ���
//�ڲ��ƻ���װ�Ե�ǰ���£�����һ��������ڲ�״̬�����ڸö���֮�Ᵽ�����״̬�������Ϳ��Խ��Ժ�Ķ���״̬�ָ�����ǰ�����״̬��


//�����Ҫ�طŵ����,��¼�����״̬

//��Ʊ���¼ģʽ������
//1����Ƽ�¼�Ľڵ�,���ڼ�¼		//��¼��ꡢ���̵�״̬
//2�����ڼ�¼�Ĵ洢,vector,list,map,set,����ͼ������,���顣������
//3��������¼����


//����¼��
class Memo
{
public:
	string state;

	Memo(string strState)//��¼��ǰ״̬
	{
		state = strState;
	}
};



//�����˵���
class Originator
{
public:
	string state;

public:

	void SetMemo(Memo* memo)//���ñ���¼
	{
		state = memo->state;
	}

	Memo* CreateMemo()//��������¼
	{
		return new Memo(state);
	}



	void Show()
	{
		cout << "״̬��" << state << endl;
	}



};





//��������
class Caretaker
{
public:
	vector<	Memo* >memo;

public:

	void save(Memo * memo)
	{
		(this->memo).push_back(memo);
	}

	Memo * getState(int i)
	{
		return this->memo[i];
	}


};





//�ͻ��ˣ�
int main1()
{
	Originator* on = new Originator();
	on->state = "on";
	on->Show();

	Caretaker* c = new Caretaker();
	c->memo.push_back(on->CreateMemo());

	on->state = "off";//�ı�״̬
	on->Show();


	on->SetMemo(c->memo[0]);//��ԭ
	on->Show();



	cin.get();
	return 0;
}
