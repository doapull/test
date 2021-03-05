//exit函数演示
//exit函数可以立刻结束程序的执行
//exit函数的标准函数需要包括stdlib.h头文件



#include<stdio.h>
#include<stdlib.h>


void func(void)
{
	printf("2\n");
	exit(0);
	printf("3\n");
}


int main()
{
	printf("1\n");
	func();
	printf("4\n");






	return 0;
}
