
#include<stdlib.h>
#include<stdio.h>

int main10()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);//ָ�������ָ��,������һ�����顣&a������������������׵�ַ
	printf("%d,%d", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;
}