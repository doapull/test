#include<stdio.h>

int main()
{
	int num1=0,num2=0,num3=0,num4=0,num5=0;
	int num=0;
	printf("请输入你的总金额：");
	scanf("%d",&num);
	for (num1=0;num1<=num/100;num1++)
	//100元钱的张数
	{
		for (num2=0;num2<=num/50;num2++)
		//50元钱的张数
		{
			for (num3=0;num3<=num/10;num3++)
			//10元钱的张数
			{
				for (num4=0;num4<=num/5;num4++)
				//5元钱的张数
				{
					for (num5=0;num5<=num/2;num5++)
					//2元钱的张数
					{
					
						if(100*num1+50*num2+10*num3+5*num4+2*num5<=num)
						{
							printf("100元钱有%d张.50元钱有%d张,10元钱有%d张,5元钱有%d张,2元钱有%d张,1元钱有%d张\n",num1,num2,num3,num4,num5,num-100*num1-50*num2-10*num3-5*num4-2*num5);
						}
					}
				}
			}
		}
	}

	return 0;
}
