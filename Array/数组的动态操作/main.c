#include"��̬����.h"


void main()
{

	struct data data1;
	int a[10] = { 1545, 26,6453, 26, 635,646, 537, 648,309, 26};
	init(&data1);//����һ���ṹ��ĵ�ַ
	addobject(&data1, 13); 
	addobject(&data1, 11);
	addobject(&data1, 11);
	addobject(&data1, 11);
	addobject(&data1, 14);
	//reinit(&data1);
	addobjects(&data1, a, 10);
	printall(&data1);
	//deleteone(&data1, 11);

	//deleteall(&data1, 11);
	//printf("\n\nɾ��ָ�����ݺ�:\n\n");
	//finddallata(&data1, 26);



	/*{
		printall(&data1);
		int *pfind = finddata(&data1, 206);
		if (pfind != NULL)
		{
			printf("position=%d\n\n", *pfind, pfind);
		}
		else
		{
			printf("\n\nû���ҵ�\n\n");
		}
	
	}
*/


	////��С����
	//printf("\n\n-------------------------------------------\n\n");
	//sort(&data1, 0);
	//finddata(&data1, 10);
	//printall(&data1);

	//�Ӵ�С
	printf("\n\n-------------------------------------------\n\n");
	sort(&data1, 1);
	printall(&data1);
	//deleteone(&data1, 26);
	//deleteall(&data1, 26);
	//printf("\n\nɾ��ָ�����ݺ�:\n\n");
	//finddallata(&data1, 11);
	//finddata(&data1, 537);
	insert(&data1, 537, 51110, 1);
	printf("\n\n");
	sort(&data1,1);

	insert(&data1, 537, 50, 0);
	printall(&data1);
	



	/*struct findres resn=finddallata(&data1,11);
	for (int i = 0; i < resn.length; i++)
	{
		printf("%d,%p\n", **resn.pp, *resn.pp);
		resn.pp++;
	}*/

	//�ж������Ƿ��ҵ�
	/*int *pfind = finddata(&data1, 2600);
	if (pfind != NULL)
	{
		printf("position=%d\n\n", *pfind, pfind);
	}
	else
	{
		printf("\n\nû���ҵ�\n\n");
	}*/



	system("pause");
}