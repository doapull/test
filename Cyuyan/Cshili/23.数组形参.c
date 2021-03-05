//数组的形式参数演示
//将输入的数变成相反数再输出
//C语言里函数参数的个数可以不固定，这种参数叫做变长参数
//变长参数不能再编写函数的时候命名


#include<stdio.h>
void neg(int arr[],int size)
{
	int num=0;
	for (num=0;num<=size-1;num++)
	{
		arr[num]=0-arr[num];
	}
}

int main()
{
	int arr[]={1,2,3,4,5};
	neg(arr,5);
	for (num=0;num<=4;num++)
	{
		printf("%d",arr[num]);
	}
	printf("\n");




	return 0;
}
