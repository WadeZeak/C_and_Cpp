#include<iostream>
#include<list>//链表

//list 适用于经常插入或者删除


using namespace std;


void main2()
{

	list<int>mylist;
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(5);

	auto ibegin = mylist.begin();
	auto iend = mylist.end();
	//list用迭代器进行遍历
	while (ibegin != iend)//指针，指向一个迭代器，迭代器存储了位置
	{

		cout << *ibegin << endl;
		ibegin++;
	}

	cin.get();

}



//list删除

void main3()
{

	list<int>mylist;
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(5);

	//auto i = mylist.begin();//删除元素，依赖于迭代器
	//++i;
	//++i;
	//mylist.erase(i);//链式存储，不允许用下标进行访问
	//只能用迭代器，链表迭代器只能用++，--

	//auto i = mylist.end();//end 最后一个没有实体
	//--i;
	//mylist.erase(i);

//	mylist.clear();//清空
	auto ibegin = mylist.begin();
	auto iend = mylist.end();
	//list用迭代器进行遍历
	while (ibegin != iend)//指针，指向一个迭代器，迭代器存储了位置
	{
		if ((*ibegin)==3)
		{
			mylist.erase(ibegin);//删除之后，链表发生了变化 end 均发生变化,需要break
			break;
		}
		ibegin++;
	}


	auto ibeginA = mylist.begin();
	auto iendA = mylist.end();
	while (ibeginA != iendA)//指针，指向一个迭代器，迭代器存储了位置
	{
		cout << *ibeginA << endl;
		ibeginA++;
	}


	cin.get();

}


void main4()
{


	int arr[5] = { 1, 2, 3, 4, 5 };
	list<int>mylist(arr, arr + 5);//根据数组初始化
	//传递开始地址,传递结束地址

	mylist.push_back(6);//尾插
	mylist.push_front(0);


	auto ibegin = mylist.begin();
	auto iend = mylist.end();

	//list只能用迭代器进行遍历
	while (ibegin != iend)
	{
		if ((*ibegin)==3)
		{

			mylist.insert(ibegin, 777);
			break;//插入或删除之后,list迭代器会发生变化,一定要break
		}
		ibegin++;
	}

	mylist.remove(777);//直接移除


	//块语句,打印

	{
	auto ibegin = mylist.begin();
		auto iend = mylist.end();

		//list只能用迭代器进行遍历
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}


	}


	cin.get();

}



void main5()
{


	int arr[5] = { 1, 2, 3, 4, 5 };
	list<int>mylist(arr, arr + 5);//根据数组初始化


	//反向迭代
	auto rb = mylist.rbegin();
	auto re = mylist.rend();

	while (rb != re)
	{
		cout << *rb << endl;
		rb++;
	}


	cin.get();

}


void main6()
{

	int arr1[5] = { 14, 242, 352, 4, 5 };
	list<int>mylist1(arr1, arr1+ 5);//根据数组初始化

	int arr2[5] = { 1, 20, 3, 14, 5 };
	list<int>mylist2(arr2, arr2 + 5);//根据数组初始化

	//排序
	mylist1.sort();
	mylist2.sort();


	//归并之前必须排序
	mylist1.merge(mylist2);


	{
		auto ibegin = mylist1.begin();
		auto iend = mylist1.end();

		//list只能用迭代器进行遍历
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}

	}

	cout << "\n\n--------------------------------------------------------------------------\n\n";

	{
		auto ibegin = mylist2.begin();
		auto iend = mylist2.end();

		//list只能用迭代器进行遍历
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}

	}

	cin.get();
}



void main7()
{

	int arr1[6] = { 14, 4, 352, 4, 5,98 };
	list<int>mylist1(arr1, arr1 + 6);//根据数组初始化


	{
		auto ibegin = mylist1.begin();
		auto iend = mylist1.end();

		//list只能用迭代器进行遍历
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}

	}


	mylist1.sort();
	mylist1.unique();//依赖于排序 删除重复项


	cout << "\n\n--------------------------------------------------------------------------\n\n";


	{
		auto ibegin = mylist1.begin();
		auto iend = mylist1.end();

		//list只能用迭代器进行遍历
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}

	}


	cin.get();

}































































































