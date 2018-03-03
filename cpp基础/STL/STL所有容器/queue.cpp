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
	mydeque.push_back(2);//尾插
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);
	mydeque.push_front(20);//头插

	mydeque.insert(mydeque.begin()+3, 30);//插入

	//删除
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
	mydeque.push_back(2);//尾插
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);

	mydeque.pop_front();//弹出头部
	mydeque.pop_back();//弹出尾部




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
	mydeque1.push_back(2);//尾插
	mydeque1.push_back(3);
	mydeque1.push_back(4);
	mydeque1.push_back(5);


	deque<int>mydeque2;

	mydeque2.push_back(10);
	mydeque2.push_back(20);//尾插
	mydeque2.push_back(30);
	mydeque2.push_back(40);
	mydeque2.push_back(50);

	mydeque1.swap(mydeque2);//交换

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
	mydeque.push_back(2);//尾插
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);

	cout << mydeque.max_size() << endl;//最大长度
	cout << mydeque.front() << endl;//首元素
	cout << mydeque.back() << endl;//尾元素
	cout << mydeque.size() << endl;//实际长度


	cin.get();

}





void mainfbg()
{
	//优先级队列
	priority_queue<int> prique;
	


	prique.push(10);
	prique.push(5);
	prique.push(20);
	prique.push(13);//自动排序

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
	s1.name = "小明";

	Student s2;
	s2.age = 15;
	s2.name = "小红";

	Student s3;
	s3.age = 9;
	s3.name = "小华";

	//进入队列
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