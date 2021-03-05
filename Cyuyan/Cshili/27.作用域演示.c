//作用域演示
//声明在函数里面的变量叫局部变量，他的作用域只包含函数里面的所有语句
//声明在函数外面的变量叫全局变量，没有初始化的全局变量的值都初始化为为0
//全变量和局部变量可以重名，并且这种变量名优先代表局部变量
//如果全局变量和局部变量都能解决问题，那么优先采用局部变量



#include<stdio.h>

int val;  //全局变量

void func(void)
{
	int val=100;
	int num=10;
	printf("val是%d\n",val);
}


int main()
{
	//printf("num是%d\n",num);  这么写是错误的
	printf("val是%d\n",val);
	func();


	return 0;
}

