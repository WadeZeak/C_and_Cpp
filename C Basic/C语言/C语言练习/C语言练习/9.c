/*9.	雨淋湿了一道算术题，9个数字现在只能认清4个（第一个数字虽模糊不清但肯定不是1）：

[  __   ×(     3 +  __    )]^2 = 8    __   __     9
请编程序找出那些看不清的数字。

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