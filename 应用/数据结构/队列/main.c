#include"╤сап.h"

void main()
{
	Queue Q1;
	Init(&Q1);
	EnQueue(&Q1, 'A');
	PrintQueue(&Q1);
	EnQueue(&Q1, 'B');
	PrintQueue(&Q1);
	EnQueue(&Q1, 'C');
	PrintQueue(&Q1);
	EnQueue(&Q1, 'D');
	PrintQueue(&Q1);
	EnQueue(&Q1, 'E');
	PrintQueue(&Q1);
	EnQueue(&Q1, 'F');
	PrintQueue(&Q1);
	EnQueue(&Q1, 'G');
	PrintQueue(&Q1);


	Dequeue(&Q1);
	PrintQueue(&Q1);
	Dequeue(&Q1);
	PrintQueue(&Q1);
	Dequeue(&Q1);
	PrintQueue(&Q1);
	Dequeue(&Q1);
	PrintQueue(&Q1);
	Dequeue(&Q1);
	PrintQueue(&Q1);
	Dequeue(&Q1);
	PrintQueue(&Q1);
	Dequeue(&Q1);
	PrintQueue(&Q1);
	system("pause");
}