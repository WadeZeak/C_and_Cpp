#include<stdlib.h>
#include<stdio.h>

enum Color
{
	red, green, yellow, blue, white
};



void main()
{

	enum Color  color;
	/*printf("red=%d\n", red);
	printf("yellow=%d\n", yellow);
	printf("blue=%d\n", blue);
*/

	//C����û���岻������������
	color = 10;//��ע����������
	color = 'a';


	printf("red=%d\n", red);
	printf("green=%d\n", green);
	printf("yellow=%d\n", yellow);
	printf("blue=%d\n", blue);
	printf("%d\n", color);


	system("pause");
}