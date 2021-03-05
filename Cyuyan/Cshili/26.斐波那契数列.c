//斐波那契数列用递归函数解决演示
//1 2 3 5 8 13 21 34 55 89 


#include<stdio.h>

int fei(int num)
{
	if (num<=1)
	{
		return 1;
	}
	return fei(num-2)+fei(num-1);

}



int main()
{
	int num=0;
	printf("1 2 3 5 8 13 21 34 55 89\n");
	printf("请输入编号：");
	scanf("%d",&num);
	printf("结果是%d\n",fei(num));



	return 0;
}
