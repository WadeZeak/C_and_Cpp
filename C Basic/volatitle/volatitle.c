#include<stdlib.h>
#include<stdio.h>
#include<time.h>


//VCֻ�ǽ���,g++ǿ��
//volatitle ���ڴ��ж�ȡ ��ֹ�������޸Ķ���֪��
void main1()
{
	time_t start, end;
	time(&start);//��ȡʱ��,����start
	double res = 0;

	//register ��������������ܵĽ���������CPU�ڲ��Ĵ����У�������ͨ���ڴ�Ѱַ���ʣ������Ч��
	for (register int i = 0; i < 3000000000; i++)//��CPU�Ĵ�����ȡi��ֵ����֤�ٶ�  
	{
		res += i;//�Զ�������������ת��
	}
	time(&end);
	printf("���ĵ�ʱ��:%fs\n", difftime(end, start));

	//�����
	//{
	//	time_t start, end;
	//	time(&start);//��ȡʱ��,����start
	//	double res = 0;
	//	for (volatile int i = 0; i < 3000000000; i++)//volatitle ǿ��ÿ�δ��ڴ��ж�ȡ,��ʵ�����ݵĸ���
	//	{
	//		res += i;//�Զ�������������ת��
	//	}
	//	time(&end);

	//	printf("volatitle���ĵ�ʱ��:%fs\n", difftime(end, start));
	//	

	//}

	printf("%lf\n", res);
	system("pause");

}



void main()
{


	time_t start, end;
	time(&start);//��ȡʱ��,����start
	double res = 0;
	for (volatile int i = 0; i < 3000000000; i++)//volatitle ǿ��ÿ�δ��ڴ��ж�ȡ,��ʵ�����ݵĸ���
	{
		res += i;//�Զ�������������ת��
	}
	time(&end);

	printf("volatitle���ĵ�ʱ��:%fs\n", difftime(end, start));
	printf("%lf\n", res);
	system("pause");



}