/*9.	����ʪ��һ�������⣬9����������ֻ������4������һ��������ģ�����嵫�϶�����1����

[  __   ��(     3 +  __    )]^2 = 8    __   __     9
�������ҳ���Щ����������֡�

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main9()
{
	
	for (int i = 2; i<10; i++)
	{
	for (int j = 1; j<10; j++)
	{
		for (int k = 0; k<10; k++)
		{
			int num = i*(10 * j + 3 + k)*i*(10 * j + 3 + k);
			if (num % 10 == 9 && num / 1000  == 8)
			{
				printf("[%d*(%d3+%d)]^2=%d\n", i, j, k, num);
				system("pause");
				return;

			}
		}
	}
}
	
	

}