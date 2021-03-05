//递归函数联系演示
//从1加到max

#include<stdio.h>

int sum(int max)
{
	if (max==1)
	{
		return 1;
	}
	return sum(max-1)+max;
}


int main()
{
	int max = 0;
	printf("请输入一个数字：");
	scanf("%d",&max);
	printf("求和结果是%d\n",sum(max));



	return 0;
}
