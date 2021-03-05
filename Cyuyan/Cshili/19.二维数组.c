//二维数组演示
//声明二维数组的时候需要提供两个整数，前面整数表示分组的个数，后面的整数表示每个分组里的存储区个数
//如：int arr[3][2];//分了3组，每组2个
//  arr[1][1]表示的是arr[]里第二个组里的第二个存储区

#include<stdio.h>

int main()
{
	int arr[3][2]={{1,2},{3,4},{5,6}};
	//或int arr[3][2]={{1,2},{3,4},{5,}};
	//int arr[3][2]={1,2,3,4,5};
	//可以根据初始化数据的个数计算出分组个数就可以忽略二维数组声明里的分组个数
	int row=0,col=0,num=1;
	

	//可以采用双重循环依次表示数组里的每个存储区
	for (row=0;row<=2;row++)
	{
		for (col=0;col<=1;col++)
		{
			arr[row][col]=num;
			num++;
		}
	}


	for (row=0;row<=2;row++)
	{
		for (col=0;col<=1;col++)
		{
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}






	return 0;
}
