#include<stdio.h>
#include<stdlib.h>



struct Info ///结构体之间可以直接赋值
{
	char name[10];
	double db;
	int data;
};




void main()
{

	struct Info info1 = { { "abcd" }, 12.3, 10 };
    struct Info info2 = { { 'higk' }, 45.6, 20 };

	struct Info temp=info1;
	info1 = info2;
	info2 = temp;
	printf("info1\n");
	printf("%s\t%f\t%d\n", info1.name,info1.db, info1.data);
	printf("info2\n");
	printf("%s\t%f\t%d\n", info2.name, info2.db, info2.data);
	system("pause");
}