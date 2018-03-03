#include<stdio.h>
#include<stdlib.h>


#define  给哥跑起来 main  //宏定义
#define N 10

void 给哥跑起来()
{


//#include"1.xxx"//include  只管包含，将包含文件中的内容复制过来，并不管其他的东西  

	printf("%d\n", N);
#undef N//删除宏定义
	system("pause");

}







