#include<stdio.h>

int main()
{
	int num = 0;
	printf("请输入：");
	scanf("%d",&num);
	if( num < 0)
	{
	printf("这是一个负数\n");
	}
	else if( num & 1)
	{
	printf("这是一个奇数\n");
	}
	else
		printf("这是一个偶数\n");
	return 0;
}
