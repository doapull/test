//彩票演示，产生一个任意位数的1-36的随机数

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int size=0,num=0;
	srand(time(0));//产生随机数
	printf("请输入数字个数：");
	scanf("%d",&size);
	int arr[size];
	for (num=0;num<=size-1;num++)
	{
		arr[num]=rand()%36+1;
	}

	for (num=0;num<=size-1;num++)
	{
		printf("%d ",arr[num]);
	}
	printf("\n");


	return 0;

}
