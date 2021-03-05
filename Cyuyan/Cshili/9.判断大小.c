#include<stdio.h>

int main()
{
	int num1=0,num2=0,num3=0;
	printf("请输入三个数：");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1 < num2 && num1 < num3)
		printf("%d最小\n",num1);
	else if (num2 < num1 && num2 < num3)
		printf("%d最小\n",num2);
	else if (num3 < num1 && num3 < num1)
		printf("%d最小\n",num3);

	return 0;
}
