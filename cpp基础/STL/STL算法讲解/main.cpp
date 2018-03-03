#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<set>
#include<string>

using namespace std;

void main1()
{

	vector<int>myv;
	myv.push_back(10);
	myv.push_back(20);
	myv.push_back(30);
	myv.push_back(40);
	myv.push_back(50);


	for_each(myv.begin(), myv.end(), [](int a){cout << a << endl; });

	auto pfind = find(myv.begin(), myv.end(), 10);

	if (pfind==myv.end())
	{
		cout << "Not Find"<<endl;

	}
	else
	{
		cout << *pfind << endl;
	}

	cin.get();


}

void main2()
{

	vector<int>myv;
	myv.push_back(18);
	myv.push_back(4);
	myv.push_back(2);
	myv.push_back(14);
	myv.push_back(50);


	for_each(myv.begin(), myv.end(), [](int a){cout << a << endl; });

	//auto pfind = find_if(myv.begin(), myv.end(), [](int a)->bool{ return a > 40; });//���ص�һ������40������
	
	auto pfind = find_if_not(myv.begin(), myv.end(), [](int a)->bool{ return a > 4; });//�ҵ���һ��������4������


	if (pfind == myv.end())
	{
		cout << "Not Find" << endl;

	}
	else
	{
		cout << *pfind << endl;
	}

	cin.get();


}


template<class	T >
class Show
{
public:
	void operator()(T &t)
	{
		cout << t << '\t';

	}


};


void main3()
{


	list<int>list1;
	vector<int>v1;

	list1.push_back(11);
	list1.push_back(20);
	list1.push_back(5);
	list1.push_back(38);
	list1.push_back(26);

	v1.push_back(20);
	v1.push_back(15);
	v1.push_back(61);
	v1.push_back(75);
	v1.push_back(55);

	Show<int> show;

	//sort(list1.begin(), list1.end());//����	
	//����list����,list��һ������ ��ʽ����
	//�㷨���������ݽṹ,��ͬ�����ݽṹ,�㷨��ͬ ��ʽ  ����


	//for_each(list1.begin(), list1.end(),show);

	sort(v1.begin(), v1.end());//����,������

	fill(v1.begin()+3, v1.end(),10);//��� ָ��λ�����ݳ�ʼ��
	//ֻ����������

	for_each(v1.begin(), v1.end(), Show<int>());

	cin.get();

}

void main4()
{

	multiset<int>myset;
	myset.insert(11);
	myset.insert(6);
	myset.insert(6);
	myset.insert(20);
	myset.insert(122);
	myset.insert(6);
	myset.insert(66);


	
	
	int i = 0;
	for (auto ibeg = myset.begin(), iend = myset.end(); ibeg != iend; i++)//ͳ�ƽڵ�������
	{
		ibeg++;
	}

	cout << i << endl;

	int num = count(myset.begin(), myset.end(), 6);//ͳ�ƽڵ�
	cout << num << endl;

	cin.get();
}




void maintherah()
{

	multiset<int>myset;
	myset.insert(11);
	myset.insert(6);
	myset.insert(6);
	myset.insert(20);
	myset.insert(122);
	myset.insert(6);
	myset.insert(2);
	myset.insert(0);
	myset.insert(2);
	//�Ѿ��������
	for_each(myset.begin(), myset.end(), Show<const int>());//ֻ���㷨 const
	
	auto it=adjacent_find(myset.begin(), myset.end());//�ҵ���һ����ͬ��Ԫ��
	cout <<"\n"<< *it << endl;

	it++;
	cout  << *it << endl;

	

	auto it1 = adjacent_find(it, myset.end());//�ҵ��ڶ�����ͬ��Ԫ��
	cout << *it1 << endl;


	cin.get();


}



void mainrtge()
{

	vector<int>myv;
	for (int i = 0; i < 10; i++)
	{
		myv.push_back(i);

	}

	for_each(myv.begin(), myv.end(), Show<int>());

	cout << endl;
	
	random_shuffle(myv.begin(), myv.end());//���� ϴ��
	for_each(myv.begin(), myv.end(), Show<int>());


	cout << endl;

	random_shuffle(myv.begin(), myv.end());//���� ϴ��
	for_each(myv.begin(), myv.end(), Show<int>());

	cout << endl;

	random_shuffle(myv.begin(), myv.end());//���� ϴ��
	for_each(myv.begin(), myv.end(), Show<int>());


	cin.get();



}



bool isok(int num)
{
	return (num == 8);

}

void mainsgsd()
{


	vector<int>myv;
	for (int i = 10; i >= 0; i--)
	{
		myv.push_back(i);

	}

	for_each(myv.begin(), myv.end(), Show<int>());
	


//	partition(myv.begin(), myv.end(), isok);//�����ڿ������򷨵ķ���


	


	//rotate(myv.begin(), myv.begin() + 3, myv.end());//��ת
	//rotate(myv.begin(), myv.begin() , myv.end());
	//rotate(myv.begin(), myv.end()-1, myv.end());

	cout << endl;
	rotate(myv.begin(), myv.begin()+8, myv.end());//����һ��������ʾ�����ݵ��ڶ���������ʾ�������ƶ� ��������������ʾ�����ݵĺ���
	//myv.begin(), myv.begin() + 8�������ƶ��� myv.end()  ����
	for_each(myv.begin(), myv.end(), Show<int>());


	cout << endl;
	rotate(myv.begin(), myv.begin() + 1, myv.end());
	for_each(myv.begin(), myv.end(), Show<int>());

	cout << endl;
	rotate(myv.begin(), myv.begin() + 1, myv.end());
	for_each(myv.begin(), myv.end(), Show<int>());

	cout << endl;
	rotate(myv.begin(), myv.begin() + 1, myv.end());
	for_each(myv.begin(), myv.end(), Show<int>());


	cin.get();
}







void main7()
{

	int a[4] = { 2,3, 1,10 };

	do
	{
		cout << a[0] << '\t' << a[1] << '\t' << a[2] <<"\t" <<a[3] <<endl;

	} while (prev_permutation(a,a+4));//���� ��ʾ����


	cin.get();


}




bool Zone(int num)
{
	return (num > 50);

}




void mainQ()
{


	vector<int>myv;
	
	for (int i = 0; i < 10; i++)
	{

		myv.push_back(rand() % 100);
	}

	myv.push_back(50);

	for_each(myv.begin(), myv.end(), Show<int>());

	cout << endl;

	//�ֿ黮�� ��Ҫ������  ��������ֵ
	partition(myv.begin(), myv.end(), Zone);//���ı�ԭ�������� ���������ĵ����� �����������
	for_each(myv.begin(), myv.end(), Show<int>());


	cin.get();

}








void mainsdgs()
{

	vector<char>vchr;
	vchr.push_back('A');
	vchr.push_back('X');
	vchr.push_back('D');
	vchr.push_back('Z');
	vchr.push_back('B');
	vchr.push_back('Q');

	for_each(vchr.begin(), vchr.end(), Show<char>());

	cout << endl;
	sort(vchr.begin(), vchr.begin()+3);
	for_each(vchr.begin(), vchr.end(), Show<char>());


	cin.get();

}




class Student
{

public:
	string name;
	int score;

public:

	Student(string str, int num) :name(str), score(num)
	{


	}

	bool operator < (const Student &S1) const
	{
		return S1.score > this->score;
	}



};



void main()
{


	vector<Student>Ss;
	string str="A";
	char strA = '0';
	for (int i = 0; i < 10; i++)
	{		
		Student ST((str+(char)(strA+i)), (rand()%100));
		Ss.push_back(ST);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << Ss[i].name << '\t' << Ss[i].score << endl;
	}



	cout << "\n\n-------------------------------------------------------------------\n" << endl;
	
	partial_sort(Ss.begin(), Ss.begin() + 4, Ss.end());//���� �������ص�()����ɸѡ  �˴�ɸѡ���ɼ���С��4��Ԫ�ط���ͷ��
	//��������



	for (int i = 0; i < 10; i++)
	{
		cout << Ss[i].name << '\t' << Ss[i].score << endl; 
	}

	



	cin.get();




}