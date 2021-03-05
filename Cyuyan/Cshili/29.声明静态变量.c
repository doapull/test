//声明静态变量演示

/*
 * 静态变量的生命周期和作用域跟普通变量不一样
 * 声明静态变量的时候需要使用static关键字
 * 全局变量和局部变量都可以声明成静态的
 * 静态变量的生命周期是整个程序的执行时间
*/

/*
 * 静态局部变量的存储区可以被任何函数使用
 * 静态局部变量的作用域还是局部变量的作用域
 */


#include<stdio.h>

void func(void){
	static int num;  //定义num为静态变量
	printf("num是%d\n",num);
	num = 100;
}

void func1(void){
	int val = 1000;
	func();
}

int main(){
	func();
	func1();
4:48:44

	return 0;
}
