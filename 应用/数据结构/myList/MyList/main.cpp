#include<iostream>
#include<string>
#include"List.h"
#include"List.cpp"

using namespace std;


void main414()
{

	List<char *> *plist=new List<char *>;

	//无法排序,需要重载运算符<(大于) >(小于)
	plist->add("123");
	plist->add("hello");
	plist->add("china");
	plist->add("xyz");

	plist->add("qeqr");
	plist->show();
	delete plist;

	cin.get();

}






void main1()
{

	List<int> *plist = new List<int>;

	plist->add(1);
	plist->add(12);

	plist->add(3);
	plist->add(9);
	plist->add(5);

	Node<int> *p = plist->find(3);
	plist->change(p, 10);
		
	//plist->deleteone(10);

	plist->sort();
	plist->show();

	delete plist;
	cin.get();
}



void main2()
{

	List<int> *plist = new List<int>;

	plist->add(1);
	plist->add(2);

	plist->add(3);
	plist->add(4);
	plist->add(4);
	plist->add(6);

	plist->add(7);

	//先排序后删除
	/*plist->sort();
	plist->deletesame();*/
	
	//plist->rov();

	plist->insert(3, 100);

	plist->show();
	


	delete plist;
	cin.get();


}

void main4()
{

	List<int> *plist1 = new List<int>;

	plist1->add(1);
	plist1->add(2);

	plist1->add(3);
	plist1->add(4);
	plist1->add(4);
	plist1->add(6);


	List<int> *plist2 = new List<int>;

	plist2->add(10);
	plist2->add(20);

	plist2->add(30);
	plist2->add(40);
	plist2->add(40);
	plist2->add(60);

	plist1->merge(*plist2);
	plist1->show();

	delete plist1;
	cin.get();


}




//数组 N，增加O(n)，删除O(n)，查找,（线性查找O(n),二分查找o(log2N)）,插入O(n),修改O(1)
//链表 N  ，增加O(1)，删除O(1)，修改O(1)，查找O(n)，插入O(1)



//十字链表
void main()
{


	List<int> *plist1 = new List<int>;

	plist1->add(1);
	plist1->add(2);

	plist1->add(3);



	List<int> *plist2 = new List<int>;

	plist2->add(10);
	plist2->add(20);

	plist2->add(30);


	List<int> *plist3= new List<int>;

	plist2->add(100);
	plist2->add(200);
	plist2->add(300);

	List<List<int>*> *list = new List < List<int>* > ;
	list->add(plist1);
	list->add(plist2);
	list->add(plist3);
	
	list->pHead->t->show();//plist1
	list->pHead->pNext->t->show();//plist2
	list->pHead->pNext->pNext->t->show();//plist3

	cin.get();
	

}