//函数演示
//注意变量和存储区的关系
//声明变量时添加关键字volatile，这种变量的内容可以被其他程序改变
//如：volatile int num=0;

#include<stdio.h>

int read(void)
{
	int num=0;
	printf("请输入一个整数：");
	scanf("%d",&num);
	return num;
}

int add(void)
{
	int num1=0,num2=0;
	printf("请输入两个数：");
	scanf("%d%d",&num1,&num2);
	return num1+num2;
}

int main()
{	
	int num=read();
	printf("num的值是：%d\n",num);
	num=add();
	printf("两个数的和是：%d\n",num);

	return 0;
}


/*void func1(void)
{
	int num;
	printf("num是%d\n",num);
	num=100;		
}	

void func2(void)
{
	int val=1000;
	func1();
}

int main()
{
	func1();
	func2();

	return 0;
}*/

