/*18.	����8��8�Ķ�ά����a������ÿ��Ԫ��ȡֵ���£�
�� i = j ʱ a[i][j] = M ��M�����ѧ�ţ�
�� i<j ʱ a[i][j] = i��j
�� i>j ʱ a[i][j] = i��j
����������е�����Ԫ��֮�͡�
*/




#include<stdlib.h>
#include<stdio.h>

void main18()
{
	int arr[8][8] = { 0 };
	int Sum = 0;
	int M = 1;
	for (int  i = 0; i < 8; i++)
	{
		for (int  j = 0; j < 8; j++)
		{
			if (i==j)
			{
				arr[i][j] = M;

			}
			else if (i<j)
			{
				arr[i][j]= i+j;
			}
			else
			{
				arr[i][j] = i*j;
			}
			printf("%5d", arr[i][j]);
			Sum += arr[i][j];
		}
		printf("\n");
	}

	printf("Sum=%d\n", Sum);
	system("pause");

}
