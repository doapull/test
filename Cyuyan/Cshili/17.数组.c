//数组演示
//从键盘得到一个非负数（不超过五位数），把他们拆散后每个数位的内容单独显示，例如输入345，那么显示应该是3 4 5

#include<stdio.h>

int main()
{
	
	int arr[5]={0},val=0,num=0;
	printf("请输入一个数（五位以内）：");
	scanf("%d",&val);
	for (num=4;num>=0;num--)
	{
		arr[num]=val%10;//拆出最后边的数位内容
		val/=10;//把最右边的数位丢掉
		if (val==0)
		{
			break;
		}
	}
	//num代表最后一个拆出来的数字所在的下标
	for (;num<=4;num++)
	{
		printf("%d ",arr[num]);
	}
	printf("\n");
	
	/*int arr[5]={0,1,2,3,4};
	int num=0;

	for (num=0;num<=4;num++)
	{
		arr[num]=num;
	}
	for (num=4;num>=0;num--)
	{
		printf("%d",arr[num]);
	
	}
	printf("\n");*/



	return 0;
}
