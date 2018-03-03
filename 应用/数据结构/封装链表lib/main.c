#include "linknode.h"
#include<time.h>



void main()
{
	Node *pnode=NULL;//链表头节点
	/*backaddnode(&pnode, 1, 10);
	backaddnode(&pnode, 2, 12);
	backaddnode(&pnode, 3, 1);
	backaddnode(&pnode, 4, 14);
	backaddnode(&pnode, 5, 1000);
	backaddnode(&pnode, 5, 1000);
*/

	time_t ts;
	srand((int )time(&ts));
	int num=0;
	for (int i = 0; i < 100; i++)
	{
		num = rand() % 1000;
		backaddnode(&pnode, i, num);
	}


	//pnode = backaddnodeA(pnode, 1, 11);
	//pnode=backaddnodeA(pnode, 2, 12);
	//pnode = backaddnodeA(pnode, 3, 13);
	//pnode = backaddnodeA(pnode, 4, 14);
	//Node *pfind = searchnode(pnode, 11);
	/*	if (pfind == NULL)
		{
		printf("\n没有找到\n");
		showallnode(pnode);
		}
		else
		{
			printf("%d,%d,%p\n", pfind->num, pfind->data, pfind->pNext);
		}*/
	//change(pnode, 4, 100);


	showallnode(pnode);
	//printf("\n\n\n");
	////pnode= rev(pnode);
	////pnode = delete(pnode, 1);
	//pnode = insert(pnode, 4, 100, 100);
	//pnode = insert(pnode, 1, 0, 10);
	sort(pnode, 0);
	showallnode(pnode);
	system("pause");
}