#include<stdio.h>

int main()
{
	int num = 0;
	1 || ++num;
	printf("num是%d\n",num);
	num = 0;
	0 && ++num;
	printf("num是%d\n",num);

	return 0;
}
