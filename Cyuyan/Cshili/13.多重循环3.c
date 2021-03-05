#include<stdio.h>

int main()
{
	int num1=0,num2=0,num3=0,num4=0;
	int pay1=0,pay2=0,num=0;
	printf("请输入需要付款的金额：");
	scanf("%d",&pay1);
	printf("请输入支付金额：");
	scanf("%d",&pay2);
	num=pay2-pay1;
	num1=num/50;
	num2=(num-50*num1)/10;
	num3=(num-50*num1-10*num2)/5;
	num4=(num-50*num1-10*num2-5*num3)/2;
	printf("50元钱有%d张,10元钱有%d张,5元钱有%d张,2元钱有%d张,1元钱有%d张\n",num1,num2,num3,num4,num-50*num1-10*num2-5*num3-2*num4);
	return 0;
}
