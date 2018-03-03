
#include <string>
#include <iostream>
#include <vector>

using namespace std;


//�ڵ��������Ӷ�����㷨Ӧ�ö����ڸö������ɲ����Լ����ǵ�װ�䷽ʽʱ���á�

//������ģʽ:����Ʒ���ڲ��������Ʒ���������̷ָ,
//�Ӷ�ʹһ������������ɾ��в�ͬ�ڲ�����Ĳ�Ʒ����

//������ģʽʹ�ò�Ʒ���ڲ�������Զ����ı仯,�ͻ�����֪����Ʒ�ڲ������ϸ��
//������ģʽ����ǿ��ʵ��һ�ֲַ�����еĽ������


class Person//������,Ԥ���Ľӿ� ���ܴ�������,���ǿ��Դ�������ָ��
{
public:
	virtual void CreateHead() = 0;
	virtual void CreateHand() = 0;
	virtual void CreateBody() = 0;
	virtual void CreateFoot() = 0;
};


//����
class ThinPerson : public Person//���������ʵ��������
{
public:
	virtual void CreateHead()
	{
		cout << "thin head" << endl;
	}

	virtual void CreateHand()
	{
		cout << "thin hand" << endl;
	}

	virtual void CreateBody()
	{
		cout << "thin body" << endl;
	}
	virtual void CreateFoot()
	{
		cout << "thin foot" << endl;
	}
};




//����
class ThickPerson : public Person
{
public:
	virtual void CreateHead()
	{
		cout << "ThickPerson head" << endl;
	}
	virtual void CreateHand()
	{
		cout << "ThickPerson hand" << endl;
	}
	virtual void CreateBody()
	{
		cout << "ThickPerson body" << endl;
	}
	virtual void CreateFoot()
	{
		cout << "ThickPerson foot" << endl;
	}
};


//ָ������
class Director
{
private:
	Person* p;//����(������)��ָ��
public:
	Director(Person* temp) { p = temp; }
	void Create()
	{
		p->CreateHead();
		p->CreateBody();
		p->CreateHand();
		p->CreateFoot();
	}
};

//�ͻ��˴��룺
int main2123424()
{
	Person *p = new ThickPerson();//����
	Director *d = new Director(p);
	d->Create();
	delete d;
	delete p;

	cin.get();
	return 0;
}


/******************************************************************************************************/



class Product;


//�����߻���
class Builder
{
public:
	virtual void BuilderA() = 0;
	virtual void BuilderB() = 0;
	virtual Product* GetResult() = 0;
};

//���յĲ�Ʒ��
class Product
{
private:
	vector<string> m_product;
public:
	void Add(string strtemp)
	{
		m_product.push_back(strtemp);
	}
	void Show()
	{
		vector<string>::iterator p = m_product.begin();
		while (p != m_product.end())
		{
			cout << *p << endl;
			p++;
		}
	}
};



//��һ�ֽ��췽ʽ
class ConcreteBuilder1 : public Builder
{
private:
	Product* m_product;
public:
	ConcreteBuilder1()
	{
		m_product = new Product();
	}
	virtual void BuilderA()
	{
		m_product->Add("one");
	}
	virtual void BuilderB()
	{
		m_product->Add("two");
	}
	virtual Product* GetResult()
	{
		return m_product;
	}
};
//�ڶ��ֽ��췽ʽ
class ConcreteBuilder2 : public Builder
{
private:
	Product * m_product;
public:
	ConcreteBuilder2()
	{
		m_product = new Product();
	}
	virtual void BuilderA()
	{
		m_product->Add("A");
	}
	virtual void BuilderB()
	{
		m_product->Add("B");
	}
	virtual Product* GetResult()
	{
		return m_product;
	}
};

//ָ������
class Direct
{
public:
	void Construct(Builder* temp)
	{
		temp->BuilderA();
		temp->BuilderB();
	}
};

//�ͻ���
int main2222()
{
	Direct *p = new Direct();
	Builder* b1 = new ConcreteBuilder1();
	Builder* b2 = new ConcreteBuilder2();

	p->Construct(b1); //���õ�һ�ַ�ʽ
	Product* pb1 = b1->GetResult();
	pb1->Show();

	p->Construct(b2);          //���õڶ��ַ�ʽ
	Product * pb2 = b2->GetResult();
	pb2->Show();
	return 0;
}


/*****************************************************************************************/





