#include<iostream>
#include<queue>
#include<string>
#include<stdlib.h>


using namespace std;


void main3()
{

	queue<char *>myqueue;
	myqueue.push("calc");
	myqueue.push("notepad");
	myqueue.push("mspaint");
	myqueue.push("tasklist");

	while (!myqueue.empty())
	{
		char *p = myqueue.front();
		system(p);
		myqueue.pop();
	}

	system("pasue");

}



void main4()
{


	deque<int>mydeque;

	mydeque.push_back(1);
	mydeque.push_back(2);//β��
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);
	mydeque.push_front(20);//ͷ��

	mydeque.insert(mydeque.begin()+3, 30);//����

	//ɾ��
	/*mydeque.erase(mydeque.begin());
	mydeque.erase(mydeque.begin()+3);
*/
	/*for (int i = 0; i < mydeque.size(); i++)
	{
		cout << mydeque[i] << endl;
	}
*/
	auto ibeg = mydeque.begin();
	auto iend = mydeque.end();
	
	while (ibeg!=iend)
	{
		cout << *ibeg << endl;
		ibeg++;
	}

	cin.get();


}


void main5()
{

	deque<int>mydeque;

	mydeque.push_back(1);
	mydeque.push_back(2);//β��
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);

	mydeque.pop_front();//����ͷ��
	mydeque.pop_back();//����β��




	auto ibeg = mydeque.begin();
	auto iend = mydeque.end();

	while (ibeg != iend)
	{
		cout << *ibeg << endl;
		ibeg++;
	}

	cin.get();



	 
}



void main6()
{

	deque<int>mydeque1;

	mydeque1.push_back(1);
	mydeque1.push_back(2);//β��
	mydeque1.push_back(3);
	mydeque1.push_back(4);
	mydeque1.push_back(5);


	deque<int>mydeque2;

	mydeque2.push_back(10);
	mydeque2.push_back(20);//β��
	mydeque2.push_back(30);
	mydeque2.push_back(40);
	mydeque2.push_back(50);

	mydeque1.swap(mydeque2);//����

	{

		auto ibeg = mydeque1.begin();
		auto iend = mydeque1.end();

		while (ibeg != iend)
		{
			cout << *ibeg << endl;
			ibeg++;
		}

	}


	cin.get();
}



void main9()
{



	deque<int>mydeque;

	mydeque.push_back(1);
	mydeque.push_back(2);//β��
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);

	cout << mydeque.max_size() << endl;//��󳤶�
	cout << mydeque.front() << endl;//��Ԫ��
	cout << mydeque.back() << endl;//βԪ��
	cout << mydeque.size() << endl;//ʵ�ʳ���


	cin.get();

}





void mainfbg()
{
	//���ȼ�����
	priority_queue<int> prique;
	


	prique.push(10);
	prique.push(5);
	prique.push(20);
	prique.push(13);//�Զ�����

	while (!prique.empty())
	{
		cout << prique.top() << endl;
		prique.pop();
	}

	cin.get();
}


struct Student
{
	int age;
	string name;
};


struct stuless
{
	bool operator ()(Student &s1, Student &s2)
	{
		return s1.age > s2.age;
	}


};



void main()
{


	priority_queue<Student, vector<Student>, stuless > myque;

	Student s1;
	s1.age = 10;
	s1.name = "С��";

	Student s2;
	s2.age = 15;
	s2.name = "С��";

	Student s3;
	s3.age = 9;
	s3.name = "С��";

	//�������
	myque.push(s1);
	myque.push(s2);
	myque.push(s3);


	while (!myque.empty())
	{
		cout << myque.top().name << '\t';
		cout << myque.top().age << endl;
		myque.pop();
	}

	cin.get();
}