#include"linknode.h"

void backaddnode(Node **ppnode, int num, DataType data)//�ڽڵ�ĩβ���ӽڵ�
{

	//�����½ڵ�
	Node *pnewnode = (Node *)malloc(sizeof(Node));
	pnewnode->num = num;
	pnewnode->data = data;
	pnewnode->pNext = NULL;

	if ((*ppnode)==NULL)//�׽ڵ�pNext=NULL
	{
		*ppnode = pnewnode;
	}
	else
	{
		Node *p = *ppnode;
		while (p->pNext != NULL)
		{
			p = p->pNext;//ѭ�������һ���ڵ�
		}
		p->pNext = pnewnode;//����ڵ�
	}

}


Node *backaddnodeA(Node *pnode, int num, DataType data)//�ڽڵ�ĩβ���ӽڵ�
{

	//�����½ڵ�
	Node *pnewnode = (Node *)malloc(sizeof(Node));
	pnewnode->num = num;
	pnewnode->data = data;
	pnewnode->pNext = NULL;

	if ((pnode) == NULL)//�׽ڵ�pNext=NULL
	{
		pnode = pnewnode;
	}
	else
	{
		Node *p = pnode;
		while (p->pNext != NULL)
		{
			p = p->pNext;//ѭ�������һ���ڵ�
		}
		p->pNext = pnewnode;//����ڵ�
	}
	return pnode;

}




void showallnode(Node *pnode)//��ʾ���нڵ�
{
	printf("\n��ӡ����\n");
	while (pnode!=NULL)
	{
		printf("%d,%d\n", pnode->num, pnode->data);
		pnode = pnode->pNext;
	}
}


Node *searchnode(Node *pnode, int num)//��ѯ
{
	for (Node *p=pnode; p!=NULL;p=p->pNext)
	{

		if (p->num==num)
		{
			return p;//�����ҵ��ĵ�ַ
		}

	}
	return NULL;
}


int change(Node *pnode, int oldnum, int newnum)//�޸�
{
AAA:
	if (pnode != NULL)
	{
		if (pnode->num == oldnum)//����
		{
			pnode->num = newnum;
			return 1;//�޸ĳɹ�
		}
		pnode = pnode->pNext;//ѭ����ֹ
		goto AAA;
	}
	
	goto AAA;
	return 0;//û���ҵ�

}


Node *rev(Node *pnode)//������ת
{

	Node *p1, *p2, *p3;//����Ұָ��
	p1 = p2 = p3 = NULL;
	if ((pnode->pNext == NULL)||(pnode==NULL))//�޷���ת������Ϊ�ջ���ֻ��һ���ڵ�
	{
		return pnode;

	}
	else
	{
		p1 = pnode;//���ֵ�һ���ڵ�
		p2 = pnode->pNext;//���ֵڶ����ڵ�
		while (p2 != NULL)
		{
			p3 = p2->pNext;//���ֵ������ڵ�
			p2->pNext = p1;//��ַת��
			p1 = p2;	//����ƶ�
			p2 = p3;
		}

		pnode->pNext = NULL;
		pnode = p1;
		return pnode;
	}

}


Node* delete(Node *pnode, int num)//ɾ��
{
	Node *p1, *p2;
	p1 = p2 = NULL;

	p1 = pnode;
	while (p1!=NULL)
	{
		if (p1->num == num)	//p1��������Ҫɾ���Ľڵ�		
			break;
		p2 = p1;//p2����p1����һ���ڵ�
		p1 = p1->pNext;
	}

	if (p1 == pnode)//ͷ���
	{
		pnode = p1->pNext;
		free(p1);//ɾ���ڵ�
	}
	else
	{
		p2->pNext = p1->pNext;
		free(p1);
	}
	return pnode;


}




Node * insert(Node *pnode, int findnum, int newnum, DataType data)//ǰ�����
{
	Node *p1, *p2;
	
	p1 = pnode;
	p2 = NULL;
	while (p1!=NULL)
	{
		if (p1->num==findnum)//p1����Ҫ����Ľڵ�
			break;
		p2 = p1;//p2����ָ���ڵ��ǰһ���ڵ�
		p1 = p1->pNext;//�����ƶ�

	}

	Node *pnewnode = (Node *)malloc(sizeof(Node));
	pnewnode->data = data;
	pnewnode->num = newnum;
	if (pnode==p1)//������������׽ڵ�֮ǰ
	{
		 pnewnode->pNext=pnode;
		pnode=pnewnode;
	}

	else//���м�λ�ò���
	{
		pnewnode->pNext = p1;
		p2->pNext = pnewnode;
	}
	return pnode;
}



Node *sort(Node *pnode, int vote)//����,0 ����1 ����
{
	if (vote==0)//����
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
	else//����
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
					p2->num = tnode.num;//�������
					tnode.data = p1->data;
					p1->data = p2->data;
					p2->data = tnode.data;//��������
				}
			}
		}



	}

}



