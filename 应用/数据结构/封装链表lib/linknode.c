#include"linknode.h"

void backaddnode(Node **ppnode, int num, DataType data)//在节点末尾增加节点
{

	//创建新节点
	Node *pnewnode = (Node *)malloc(sizeof(Node));
	pnewnode->num = num;
	pnewnode->data = data;
	pnewnode->pNext = NULL;

	if ((*ppnode)==NULL)//首节点pNext=NULL
	{
		*ppnode = pnewnode;
	}
	else
	{
		Node *p = *ppnode;
		while (p->pNext != NULL)
		{
			p = p->pNext;//循环到最后一个节点
		}
		p->pNext = pnewnode;//插入节点
	}

}


Node *backaddnodeA(Node *pnode, int num, DataType data)//在节点末尾增加节点
{

	//创建新节点
	Node *pnewnode = (Node *)malloc(sizeof(Node));
	pnewnode->num = num;
	pnewnode->data = data;
	pnewnode->pNext = NULL;

	if ((pnode) == NULL)//首节点pNext=NULL
	{
		pnode = pnewnode;
	}
	else
	{
		Node *p = pnode;
		while (p->pNext != NULL)
		{
			p = p->pNext;//循环到最后一个节点
		}
		p->pNext = pnewnode;//插入节点
	}
	return pnode;

}




void showallnode(Node *pnode)//显示所有节点
{
	printf("\n打印链表\n");
	while (pnode!=NULL)
	{
		printf("%d,%d\n", pnode->num, pnode->data);
		pnode = pnode->pNext;
	}
}


Node *searchnode(Node *pnode, int num)//查询
{
	for (Node *p=pnode; p!=NULL;p=p->pNext)
	{

		if (p->num==num)
		{
			return p;//返回找到的地址
		}

	}
	return NULL;
}


int change(Node *pnode, int oldnum, int newnum)//修改
{
AAA:
	if (pnode != NULL)
	{
		if (pnode->num == oldnum)//查找
		{
			pnode->num = newnum;
			return 1;//修改成功
		}
		pnode = pnode->pNext;//循环终止
		goto AAA;
	}
	
	goto AAA;
	return 0;//没有找到

}


Node *rev(Node *pnode)//链表逆转
{

	Node *p1, *p2, *p3;//避免野指针
	p1 = p2 = p3 = NULL;
	if ((pnode->pNext == NULL)||(pnode==NULL))//无法逆转，链表为空或者只有一个节点
	{
		return pnode;

	}
	else
	{
		p1 = pnode;//布局第一个节点
		p2 = pnode->pNext;//布局第二个节点
		while (p2 != NULL)
		{
			p3 = p2->pNext;//布局第三个节点
			p2->pNext = p1;//地址转向
			p1 = p2;	//向后移动
			p2 = p3;
		}

		pnode->pNext = NULL;
		pnode = p1;
		return pnode;
	}

}


Node* delete(Node *pnode, int num)//删除
{
	Node *p1, *p2;
	p1 = p2 = NULL;

	p1 = pnode;
	while (p1!=NULL)
	{
		if (p1->num == num)	//p1保存了需要删除的节点		
			break;
		p2 = p1;//p2保存p1的上一个节点
		p1 = p1->pNext;
	}

	if (p1 == pnode)//头结点
	{
		pnode = p1->pNext;
		free(p1);//删除节点
	}
	else
	{
		p2->pNext = p1->pNext;
		free(p1);
	}
	return pnode;


}




Node * insert(Node *pnode, int findnum, int newnum, DataType data)//前面插入
{
	Node *p1, *p2;
	
	p1 = pnode;
	p2 = NULL;
	while (p1!=NULL)
	{
		if (p1->num==findnum)//p1保存要插入的节点
			break;
		p2 = p1;//p2保存指定节点的前一个节点
		p1 = p1->pNext;//向下移动

	}

	Node *pnewnode = (Node *)malloc(sizeof(Node));
	pnewnode->data = data;
	pnewnode->num = newnum;
	if (pnode==p1)//插入的数据在首节点之前
	{
		 pnewnode->pNext=pnode;
		pnode=pnewnode;
	}

	else//在中间位置插入
	{
		pnewnode->pNext = p1;
		p2->pNext = pnewnode;
	}
	return pnode;
}



Node *sort(Node *pnode, int vote)//排序,0 降序；1 升序
{
	if (vote==0)//降序
	{

		for (Node *p1 = pnode; p1!= NULL; p1=p1->pNext)
		{
			for (Node *p2=pnode ; p2!=NULL; p2=p2->pNext)
			{
				if (p1->data < p2->data)
				{
					Node tnode;
					tnode.num = p1->num;
					p1->num = p2->num;
					p2->num = tnode.num;
					tnode.data = p1->data;
					p1->data = p2->data;
					p2->data= tnode.data;
				}
			}
		}


	}
	else//升序
	{

		for (Node *p1 = pnode; p1 != NULL; p1 = p1->pNext)
		{
			for (Node *p2 = p1->pNext; p2 != NULL; p2 = p2->pNext)
			{
				if (p1->data > p2->data)
				{
					Node tnode;
					tnode.num = p1->num;
					p1->num = p2->num;
					p2->num = tnode.num;//交换编号
					tnode.data = p1->data;
					p1->data = p2->data;
					p2->data = tnode.data;//交换数据
				}
			}
		}



	}

}



