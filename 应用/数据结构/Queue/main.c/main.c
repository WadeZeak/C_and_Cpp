#include"Queue.h"


void main()
{

	Queue *pHead = NULL;//创建头结点
	pHead = Init(pHead);

	pHead = InsetionSort(pHead, 1, 1);
	Print(pHead);
	printf("\n\n");

	pHead = InsetionSort(pHead, 2, 2);
Print(pHead);
printf("\n\n");


pHead = InsetionSort(pHead, 3, 6);
Print(pHead);
printf("\n\n");



pHead = InsetionSort(pHead, 4, 4);
Print(pHead);
printf("\n\n");



pHead = InsetionSort(pHead, 5, 10);
Print(pHead);
printf("\n\n");



pHead = InsetionSort(pHead, 6, 10);
Print(pHead);
printf("\n\n");



pHead = InsetionSort(pHead, 7, 17);
Print(pHead);
printf("\n\n");


pHead = InsetionSort(pHead, 8, 20);
Print(pHead);
printf("\n\n");



pHead = InsetionSort(pHead, 9, 19);
Print(pHead);
printf("\n\n");



//Queue *ptemp = (Queue *)malloc(sizeof(Queue));

//while (pHead!=NULL)
//{
//	pHead = DeQueue(pHead, ptemp);
//	Print(ptemp);
//}
//	Print(pHead);
	system("pause");
}

