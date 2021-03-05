#include<stdio.h>
#include<stdio.h>

int main()
{	int num1=0,num2=0;
	int tmp=0;
	printf("请输入两个数：");
	scanf("%d%d",&num1,&num2);
	while ((num1 % num2) != 0)
	{
		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	printf("最大公约数是%d\n",num2);
	return 0;
}
