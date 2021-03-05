//形式参数的演示
//被调用函数需要为每个传递过来的数据提供一个对应的存储区
//在被调用函数名称后的小括号里写一组变量声明语句，他们用来代表前面提到的存储区
//这些变量叫做被调用函数的形式参数，小括号里的所有内容叫做形式参数列表，每个形式参数的类型名称都不可以忽略


#include<stdio.h>


void print(int num1,int num2)
{
	printf("求和结果是%d\n",num1+num2);
}

int main()
{
	int num1=0,num2=0;
	printf("请输入要求和的数：");
	scanf("%d%d",&num1,&num2);
	print(num1,num2);


	return 0;
}
