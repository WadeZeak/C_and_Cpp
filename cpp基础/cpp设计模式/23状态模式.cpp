//#include <iostream>
//using namespace std;
//
//
//
////状态模式:状态模式允许其对象在其内部状态改变时改变行为,这个对象看上去改变了它的类一样
////状态模式把所研究的对象包含在不同的状态类的对象中,每一个状态类都属于一个状态类的子类
////状态模式的意图是让一个对象在其内部状态发生改变时,其行为也发生改变
////状态模式需要对每一个系统可能得到的状态创建一个状态类的子类,当系统状态发生变化时,系统改变所选的子类
//
//
//class Work;
//class ForenoonState;
//class NoonState;
//
//
//
//class Work//实施工作的类,根据状态的不同,实施不同的工作
//{
//private:
//	State* current;
//public:
//	double hour;
//public:
//	Work();//初始状态
//	void SetState(State* temp)//摄者状态的改变
//	{
//		current = temp;
//	}
//	void Writeprogram()//实施工作
//	{
//		current->WriteProgram(this);
//	}
//
//};
//
//class State//状态的基类
//{
//public:
//	virtual void WriteProgram(Work* w) = 0;
//};
//
//
//
//class NoonState :public State//下午状态
//{
//public:
//	virtual void WriteProgram(Work* w)
//	{
//		cout << "execute" << endl;
//		if ((w->hour)<13)
//			cout << "还不错啦" << endl;
//		else
//			cout << "不行了，还是睡觉吧" << endl;
//	}
//};
//
//class ForenoonState : public State//上午状态
//{
//public:
//	virtual void WriteProgram(Work* w)
//	{
//		if ((w->hour)<12)
//			cout << "现在的精神无敌好" << endl;
//		else
//		{
//			w->SetState(new NoonState());//修改状态
//			w->Writeprogram(); //注意加上这句   实施工作
//		}
//	}
//};
//
//
//Work::Work()
//{
//	current = new ForenoonState();//初始状态为上午的状态
//}
//
////客户端：
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
