#include<iostream>
#include<string>
#include<stack>


using namespace std;


struct MyStruct
{
	int Nodedata=0;
	MyStruct *pLeft=nullptr;
	MyStruct *pRight=nullptr;
}BTree,*pBTree;



void LDR(MyStruct *proot)//中序遍历
{

	if (proot!=nullptr)
	{


		if (proot->pLeft!=nullptr)
		{
			LDR(proot->pLeft);

		}
		cout << proot->Nodedata << endl;
		if (proot->pRight != nullptr)
		{
			LDR(proot->pRight);

		}

	}

}


void show(MyStruct *proot,int n)//打印树 递归
{
	if (proot==nullptr)
	{
		return;
	}
	else
	{
		show(proot->pRight, n + 1);
		for (int i = 0; i < n; i++)
		{
			cout <<"  " ;
		}
		cout << proot->Nodedata << endl;
		show(proot->pLeft, n + 1);

	}

}


void LevelTraversal(MyStruct *pRoot)//层次遍历 非递归,队列
{

	if (!pRoot)
	{
		return;
	}

	MyStruct *myTree[100];
	int head = 0;
	int end = 0;
	MyStruct *pcurr = pRoot;

	myTree[end++] = pRoot;//存入队列的第一个节点

	while (head!=end)
	{
		pcurr = myTree[head];
		head++;//出队

		cout << pcurr->Nodedata << endl;

		if (pcurr->pLeft)
		{
			myTree[end++] = pcurr->pLeft;
		}


		if (pcurr->pRight)
		{
			myTree[end++] = pcurr->pRight;
		}
	}

}


void stackLDRA(MyStruct *pRoot)//数组实现栈
{
	
	MyStruct *pcurr = pRoot; 
	MyStruct *mystack[100];//指针数组
	int top=0;

	while (top!=0||pcurr!=nullptr)
	{

		while (pcurr!=nullptr)//进栈 左边
		{
			mystack[top++] = pcurr;
			pcurr = pcurr->pLeft;

		}
		if (top>0)//出栈
		{
			top--;
			pcurr = mystack[top];
			cout << " " << pcurr->Nodedata;
			pcurr = pcurr->pRight;
		}
	}
}

void StackLDR(MyStruct *pRoot)//先序遍历
{
	stack<MyStruct *> mystack;
	MyStruct *pcurr = pRoot;



	while (!mystack.empty() || pcurr)
	{
		while (pcurr)//进栈 左边
		{
			mystack.push(pcurr);
			pcurr = pcurr->pLeft;

		}

		if (!mystack.empty())//出栈
		{
			pcurr = mystack.top();
			cout << " " << pcurr->Nodedata;
			mystack.pop();
			pcurr = pcurr->pRight;
		}
	}
}

void StackLRD(MyStruct *pRoot)
{

	stack<MyStruct *> mystack;
	MyStruct *pcurr = pRoot;
	int flag[20];//标记右子树是否访问过

	while (pcurr)
	{
		mystack.push(pcurr);
		flag[mystack.size()] = 0;//未访问
		pcurr = pcurr->pLeft;
	}

	while (!mystack.empty())
	{
		pcurr = mystack.top();

		while ((pcurr)&&(flag[mystack.size()]==0))
		{
			flag[mystack.size()] = 1;//被访问过
			pcurr = pcurr->pRight;

			while (pcurr)
			{
				mystack.push(pcurr);
				flag[mystack.size()] = 0;
				pcurr = pcurr->pLeft;

			}
		}
		
			pcurr = mystack.top();
			cout << " " << pcurr->Nodedata;
			mystack.pop();	
		
	}
	

}

void StackDLR(MyStruct *pRoot)
{

	stack<MyStruct *> mystack;
	MyStruct *pcurr = pRoot;

	while (!mystack.empty() || pcurr)
	{

		while (pcurr)
		{
			mystack.push(pcurr);
			cout << " " << mystack.top()->Nodedata;
			pcurr = pcurr->pLeft;
		}

		if (!mystack.empty())
		{

			pcurr=mystack.top();
			mystack.pop(); 
			pcurr=pcurr->pRight;
		}
	}

}



int Leave(MyStruct *pRoot)//叶子个数
{
	int L_leaf = 0;//左叶子
	int R_leaf = 0;//右叶子

	if (!pRoot)//无节点
	return 0;

	if (!pRoot->pLeft&&!pRoot->pRight)//终止条件
		return 1;

	L_leaf = Leave(pRoot->pLeft);
	R_leaf = Leave(pRoot->pRight);

	return L_leaf + R_leaf;

}


int Deepth(MyStruct *pRoot)
{

	int deepth = 0;
	int L_deepth = 0;
	int R_deepth = 0;

	if (!pRoot)
	{
		return 0;
	}

	
	L_deepth = Deepth(pRoot->pLeft);
	R_deepth = Deepth(pRoot->pRight);

	deepth = L_deepth > R_deepth ? L_deepth : R_deepth;

	return deepth+1;

}


int getParent(MyStruct *pRoot, int num)//获取父节点
{

	if (!pRoot)
	{
		return 0;
	}

	if (pRoot->pLeft&&pRoot->pLeft->Nodedata==num)
	{
		return pRoot->Nodedata;
	}
	if (pRoot->pRight&&pRoot->pRight->Nodedata==num)
	{
		return pRoot->Nodedata;
	}

	getParent(pRoot->pLeft,num);
	getParent(pRoot->pRight, num);

}


int getLeftBrother(MyStruct *pRoot,int num)//左兄弟
{
	
	if (!pRoot)
	{
		return 0;
	}

	if (pRoot->pRight&&pRoot->pRight->Nodedata == num)
	{
		if (pRoot->pLeft)
		{
			return pRoot->pLeft->Nodedata;
		}
		
	}

	getLeftBrother(pRoot->pLeft, num);

	getLeftBrother(pRoot->pRight, num);



}


int findMax(MyStruct *pRoot)//采用非递归中序遍历
{

	if (!pRoot)
	{
		return false;
	}

	stack<MyStruct *> mystack;
	MyStruct *pcurr = pRoot;
	int max = pRoot->Nodedata;

	while (!mystack.empty() || pcurr)
	{
		while (pcurr)//进栈 左边
		{
			mystack.push(pcurr);
			pcurr = pcurr->pLeft;

		}

		if (!mystack.empty())//出栈
		{
			pcurr = mystack.top();
			
			if (pcurr->Nodedata>max)
			{
				max = pcurr->Nodedata;
			}

			mystack.pop();
			pcurr = pcurr->pRight;
		}
	}
	return max;
}





MyStruct *insertNode(MyStruct *pRoot,int num)
{

	if (!pRoot)
	{
		MyStruct *pNode = new MyStruct;
		pNode->Nodedata = num;
		pRoot = pNode;
	}
	else if (num<=pRoot->Nodedata)//左儿子  小于
	{
		pRoot->pLeft=insertNode(pRoot->pLeft, num);

	}
	else//右儿子 大于
	{
	pRoot->pRight=insertNode(pRoot->pRight, num);

	}

	return pRoot;

}


void main1()
{

	MyStruct *pRoot;//根
	MyStruct s1;
	MyStruct s2;
	MyStruct s3;
	MyStruct s4;
	MyStruct s5;
	MyStruct s6;
	MyStruct s7;
	
	pRoot = &s1;
	s1.Nodedata = 1;
	s2.Nodedata = 2;
	s3.Nodedata = 3; 
	s4.Nodedata = 4;
	s5.Nodedata = 5;
	s6.Nodedata = 6;
	s7.Nodedata = 7;



	s1.pLeft = &s2;
	s1.pRight = &s3;

	s2.pLeft = &s4;
	s2.pRight = &s5;

	s3.pLeft = &s6;
	s3.pRight = &s7;



	show(pRoot, 1);
	//LDR(pRoot);
	//cout << endl;
	//cout << endl;
	//StackLDR(pRoot);
	//cout << endl;
	//StackDLR(pRoot);
	//cout << endl;
	//StackLRD(pRoot);
	cin.get();



}


void main2()
{

	MyStruct *pRoot = nullptr;
	MyStruct Sarray[100];
	pRoot = Sarray;

	//  0...99    1...100
	for (int i = 1; i <= 100; i++)
	{
		Sarray[i-1].Nodedata = i;
	}

	
	for (int i = 0; i < (99-2)/2; i++)
	{
		if (i<=(99-2)/2)
		{

			Sarray[i].pRight = &Sarray[2 * i + 2];
		}

		if (i<=(99-1)/2)
		{
			Sarray[i].pLeft = &Sarray[2 * i + 1];
		}

	

	}


	show(pRoot, 1);
	cin.get();
}

void main3()
{

	MyStruct *pRoot;//根
	MyStruct s1;
	MyStruct s2;
	MyStruct s3;
	MyStruct s4;
	MyStruct s5;
	MyStruct s6;
	MyStruct s7;
	MyStruct s8;
	pRoot = &s1;
	s1.Nodedata = 1;
	s2.Nodedata = 2;
	s3.Nodedata = 3;
	s4.Nodedata = 4;
	s5.Nodedata = 5;
	s6.Nodedata = 6;
	s7.Nodedata = 7;
	s8.Nodedata = 8;


	s1.pLeft = &s2;
	s1.pRight = &s3;

	s2.pLeft = &s4;
	s2.pRight = &s5;

	s3.pLeft = &s6;
	s3.pRight = &s7;
	s4.pLeft = &s8;


	/*cout << Leave(pRoot) << endl;
	cout << Deepth(pRoot) << endl;*/

	LevelTraversal(pRoot);
	cin.get();

}

void main4()
{
	MyStruct *pRoot;//根
	MyStruct s1;
	MyStruct s2;
	MyStruct s3;
	MyStruct s4;
	MyStruct s5;
	MyStruct s6;
	MyStruct s7;
	MyStruct s8;
	pRoot = &s1;
	s1.Nodedata = 1;
	s2.Nodedata = 2;
	s3.Nodedata = 3;
	s4.Nodedata = 4;
	s5.Nodedata = 5;
	s6.Nodedata = 6;
	s7.Nodedata = 7;
	s8.Nodedata = 8;


	s1.pLeft = &s2;
	s1.pRight = &s3;

	s2.pLeft = &s4;
	s2.pRight = &s5;

	s3.pLeft = &s6;
	s3.pRight = &s7;
	s4.pLeft = &s8;

	//cout << getParent(pRoot, 6) << endl;

	cout << getLeftBrother(pRoot, 6) << endl;

	cin.get();

}


void main5()
{
	MyStruct *pRoot;//根
	MyStruct s1;
	MyStruct s2;
	MyStruct s3;
	MyStruct s4;
	MyStruct s5;
	MyStruct s6;
	MyStruct s7;
	MyStruct s8;
	pRoot = &s1;
	s1.Nodedata = 1;
	s2.Nodedata = 2;
	s3.Nodedata = 3;
	s4.Nodedata = 4;
	s5.Nodedata = 5;
	s6.Nodedata = 6;
	s7.Nodedata = 7;
	s8.Nodedata = 8;

	s1.pLeft = &s2;
	s1.pRight = &s3;

	s2.pLeft = &s4;
	s2.pRight = &s5;

	s3.pLeft = &s6;
	s3.pRight = &s7;
	s4.pLeft = &s8;

	cout << findMax(pRoot) << endl;
	cin.get();
}


void main()
{

	MyStruct *pRoot = nullptr;
	for (int  i = 6; i <= 10; i++)//右插
	{
		pRoot=insertNode(pRoot, i);
	}

	for (int i = 5; i >0; i--)//左插
	{
		pRoot = insertNode(pRoot, i);
	}

	show(pRoot, 1);
	cin.get();




}