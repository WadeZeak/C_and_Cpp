/*

����Yn��ֵ��ֱ��|Yn - Yn-1|<10-6Ϊֹ������ӡ����ʱ�����˶��ٴ�COS���㡣
��ʾ��Yn+1=COS��Yn�����ʱ���������ʹ�õ�������

*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int  Yn(double x,int count)//����ĵݹ�
{
	if (abs(cos(x)-x)<pow(10.0,-6))//|Yn - Yn-1|<10-6
	{
		return ++count;
	}
	else
	{
		return Yn(cos(x),++count);
	}



}

void main27()
{
	double x;
	scanf("%d", &x);
	
	printf("%d", Yn(x, 0));

	system("pause");


}