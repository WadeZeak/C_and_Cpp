//#include <iostream>
//using namespace std;
//
//
//
////״̬ģʽ:״̬ģʽ��������������ڲ�״̬�ı�ʱ�ı���Ϊ,���������ȥ�ı���������һ��
////״̬ģʽ�����о��Ķ�������ڲ�ͬ��״̬��Ķ�����,ÿһ��״̬�඼����һ��״̬�������
////״̬ģʽ����ͼ����һ�����������ڲ�״̬�����ı�ʱ,����ΪҲ�����ı�
////״̬ģʽ��Ҫ��ÿһ��ϵͳ���ܵõ���״̬����һ��״̬�������,��ϵͳ״̬�����仯ʱ,ϵͳ�ı���ѡ������
//
//
//class Work;
//class ForenoonState;
//class NoonState;
//
//
//
//class Work//ʵʩ��������,����״̬�Ĳ�ͬ,ʵʩ��ͬ�Ĺ���
//{
//private:
//	State* current;
//public:
//	double hour;
//public:
//	Work();//��ʼ״̬
//	void SetState(State* temp)//����״̬�ĸı�
//	{
//		current = temp;
//	}
//	void Writeprogram()//ʵʩ����
//	{
//		current->WriteProgram(this);
//	}
//
//};
//
//class State//״̬�Ļ���
//{
//public:
//	virtual void WriteProgram(Work* w) = 0;
//};
//
//
//
//class NoonState :public State//����״̬
//{
//public:
//	virtual void WriteProgram(Work* w)
//	{
//		cout << "execute" << endl;
//		if ((w->hour)<13)
//			cout << "��������" << endl;
//		else
//			cout << "�����ˣ�����˯����" << endl;
//	}
//};
//
//class ForenoonState : public State//����״̬
//{
//public:
//	virtual void WriteProgram(Work* w)
//	{
//		if ((w->hour)<12)
//			cout << "���ڵľ����޵к�" << endl;
//		else
//		{
//			w->SetState(new NoonState());//�޸�״̬
//			w->Writeprogram(); //ע��������   ʵʩ����
//		}
//	}
//};
//
//
//Work::Work()
//{
//	current = new ForenoonState();//��ʼ״̬Ϊ�����״̬
//}
//
////�ͻ��ˣ�
//int main23536363()
//{
//	Work* mywork = new Work();
//	mywork->hour = 9;
//	mywork->Writeprogram();
//	mywork->hour = 14;
//	mywork->Writeprogram();
//
//	cin.get();
//	return 0;
//}
//
