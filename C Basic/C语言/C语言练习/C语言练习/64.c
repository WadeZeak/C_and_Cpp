/*
64.	�����������ʵ���Ȼ��, �������ɴμӼ����ܿɻ�ý��Ϊ1����ֵ��
��ν�������������ص���������ָ���������� 1����û��������������
��14��9Ϊ������������187��79Ҳ�ǻ�������
���磺���ڻ�����14��9��14+14=28 9+9+9=27 ��28-27=1, Ŀ�Ĵﵽ����
������������������֤�������ۡ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main64()
{

	int num1 = 0;
	int num2 = 0;
	printf("��������������:");
	scanf("%d", &num1);
	scanf("%d", &num2);

	int tmp1 = num1;
	int tmp2 = num2;
	while (1)
	{
		tmp2 = num2;
		while (tmp1-tmp2>=-1)
		{
			if (abs(tmp1-tmp2)==1)
			{
				printf("����%d������%d�������ɴ���Ӽ���,�õ����Ϊ1\n",num1,num2);
				printf("����%d���%d��,����%d���%d��\n",num1,tmp1/num1,num2,tmp2/num2);
				goto Loop;
				return;
			}
			tmp2 += num2;
		}
		tmp1 += num1;
	}


Loop:
	system("pause");

}
