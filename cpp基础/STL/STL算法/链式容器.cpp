#include<iostream>
#include<list>//����

//list �����ھ����������ɾ��


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
	//list�õ��������б���
	while (ibegin != iend)//ָ�룬ָ��һ�����������������洢��λ��
	{

		cout << *ibegin << endl;
		ibegin++;
	}

	cin.get();

}



//listɾ��

void main3()
{

	list<int>mylist;
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(5);

	//auto i = mylist.begin();//ɾ��Ԫ�أ������ڵ�����
	//++i;
	//++i;
	//mylist.erase(i);//��ʽ�洢�����������±���з���
	//ֻ���õ����������������ֻ����++��--

	//auto i = mylist.end();//end ���һ��û��ʵ��
	//--i;
	//mylist.erase(i);

//	mylist.clear();//���
	auto ibegin = mylist.begin();
	auto iend = mylist.end();
	//list�õ��������б���
	while (ibegin != iend)//ָ�룬ָ��һ�����������������洢��λ��
	{
		if ((*ibegin)==3)
		{
			mylist.erase(ibegin);//ɾ��֮���������˱仯 end �������仯,��Ҫbreak
			break;
		}
		ibegin++;
	}


	auto ibeginA = mylist.begin();
	auto iendA = mylist.end();
	while (ibeginA != iendA)//ָ�룬ָ��һ�����������������洢��λ��
	{
		cout << *ibeginA << endl;
		ibeginA++;
	}


	cin.get();

}


void main4()
{


	int arr[5] = { 1, 2, 3, 4, 5 };
	list<int>mylist(arr, arr + 5);//���������ʼ��
	//���ݿ�ʼ��ַ,���ݽ�����ַ

	mylist.push_back(6);//β��
	mylist.push_front(0);


	auto ibegin = mylist.begin();
	auto iend = mylist.end();

	//listֻ���õ��������б���
	while (ibegin != iend)
	{
		if ((*ibegin)==3)
		{

			mylist.insert(ibegin, 777);
			break;//�����ɾ��֮��,list�������ᷢ���仯,һ��Ҫbreak
		}
		ibegin++;
	}

	mylist.remove(777);//ֱ���Ƴ�


	//�����,��ӡ

	{
	auto ibegin = mylist.begin();
		auto iend = mylist.end();

		//listֻ���õ��������б���
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
	list<int>mylist(arr, arr + 5);//���������ʼ��


	//�������
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
	list<int>mylist1(arr1, arr1+ 5);//���������ʼ��

	int arr2[5] = { 1, 20, 3, 14, 5 };
	list<int>mylist2(arr2, arr2 + 5);//���������ʼ��

	//����
	mylist1.sort();
	mylist2.sort();


	//�鲢֮ǰ��������
	mylist1.merge(mylist2);


	{
		auto ibegin = mylist1.begin();
		auto iend = mylist1.end();

		//listֻ���õ��������б���
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

		//listֻ���õ��������б���
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
	list<int>mylist1(arr1, arr1 + 6);//���������ʼ��


	{
		auto ibegin = mylist1.begin();
		auto iend = mylist1.end();

		//listֻ���õ��������б���
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}

	}


	mylist1.sort();
	mylist1.unique();//���������� ɾ���ظ���


	cout << "\n\n--------------------------------------------------------------------------\n\n";


	{
		auto ibegin = mylist1.begin();
		auto iend = mylist1.end();

		//listֻ���õ��������б���
		while (ibegin != iend)
		{
			cout << *ibegin << endl;
			ibegin++;
		}

	}


	cin.get();

}































































































