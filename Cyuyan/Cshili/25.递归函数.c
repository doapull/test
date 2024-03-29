//递归函数演示
//自己调用自己
//如果一个问题可以拆分成多个小问题，至少一个小问题和原来的问题在本质上一样，但是稍微简单一点。那么具有这种特征的问题就可以采用递归函数解决。
//
//递归函数编写步骤
//1.编写语句解决分解后的每个小问题（这时候假设递归函数已经可以使用）
//2.在递归函数的开头编写分支处理不可分解的情况（这个分支必须保证函数可以结束）
//
//编写递归函数计算从1开始到某个整数之间所有整数的和并把结果传递给调用函数


#include<stdio.h>


void print(int max)
{
	if (max == 1)
	{
		printf("1 ");
		return ;
	}
	print(max - 1);
	printf("%d ",max);
}


int main()
{
	int max=0;
	printf("请输入一个数字：");
	scanf("%d",&max);
	print(max);
	printf("\n");


	return 0;
}

