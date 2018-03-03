#include<stdio.h>
#include<stdlib.h>




void Change(int *pa, int *pb)//���ݵ�ַ��������������ֵ
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}



void Show(int *p,int n)//��ʾ����״̬
{
	printf("��ʱ�����״̬\n");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", *(p + i));
	}
	printf("\n\n");
}



void QuickSort(int *p,int left,int right)
{
	printf("\n\n��Ҫ�����������\n");
	for (int i = left; i <= right; i++)//�����Ҵ�ӡҪ����������
	{
		printf("%5d", p[i]);
	}
	int i = left;
	int j = right + 1;
	if (i < j)//
	{
		do
		{
			do//��ͷ���ƶ���Ѱ�ұȻ�׼�����
			{
				i++;
			} while (p[i]<p[left] && i <= right);



			do//��β���ƶ���Ѱ�ұȻ�׼С����
			{
				j--;
			} while (p[j] >= p[left] && j>left);


			if (i<j)//ʵ�����ݽ������Ȼ�׼����Ƶ����棬�Ȼ�׼С���Ƶ�ǰ��
			{
				Change(p + i, p + j);
			}
		} while (i<j);

		//Show(p, 10);
		
		Change(p+left, p + j);//����׼�ƶ�����Ӧ��λ��


		QuickSort(p, left, j - 1);//�ָ����
		QuickSort(p, j + 1, right);//�ָ��ұ�
	}
}






void main()
{

	int a[10] = { 19, 9, 20, 8, 38, 49, 11, 58, 34, 22 };
//	Show(a, 10);//��ʾ����û�������״̬
	QuickSort(a, 0, 9);//ʵ�ֿ�������

	//Show(a, 10);
	system("pause");
}