/*8.	��100��200֮����ͬʱ��6��8��������������Щ����ӡ���������Ҵ�ӡ��Щ���ĺ͡�
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void main8()
{
	int num = 100;
	int Sum = 0;

	int count = 0;
	while (num<200)
	{
		if (num%6==0&&num%8==0)
		{
			printf("%5d", num);
			Sum += num;
			count++;
		}
		num++;
	}


	printf("\nSum=%d,Avg=%d\n", Sum, Sum / count);
	system("pause");

}