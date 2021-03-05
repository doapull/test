#include<stdio.h>

int main()
{
	int num1=0,num2=0,num3=0,num4=0,num5=0;
	int num=0;
	printf("请输入你的总金额：");
	scanf("%d",&num);
	num1=num/100;
	num2=(num-100*num1)/50;
	num3=(num-100*num1-50*num2)/10;
	num4=(num-100*num1-50*num2-10*num3)/5;
	num5=(num-100*num1-50*num2-10*num3-5*num4)/2;
	printf("100元钱有%d张.50元钱有%d张,10元钱有%d张,5元钱有%d张,2元钱有%d张,1元钱有%d张\n",num1,num2,num3,num4,num5,num-100*num1-50*num2-10*num3-5*num4-2*num5);
	return 0;
}
