//彩票演示，产生一个7位1-36的随机数

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr1[7]={0},arr2[7]={0},num1=0,num2=0,tmp=0,cnt=0;
	srand(time(0));//产生随机数

	/*for (num=0;num<=6;num++)
	{
		arr1[num]=rand()%36+1;//产生1-36的数
	}*/
	do
	{
		tmp=rand()%36+1;
		for (num1=0;num1<=cnt-1;num1++)
		//用新数字和下标为0到have-1之间的每个存储区内容做对比
		{
			if(arr1[num1]==tmp)
			{
				break;
			}
		}
		if (num1==cnt)//表示新数字能用
		{
			arr1[cnt]=tmp;
			cnt++;
		}
	}while(cnt<7);

	for (num1=0;num1<=6;num1++)
	{
		printf("%d ",arr1[num1]);//取出数组中的数
	}
	printf("\n");
	//产生7个不重复的随机数


	//导入顾客的彩票号
	for (num1=0;num1<=6;num1++)
	{
		printf("请依次输入一个数字：");
		scanf("%d",&arr2[num1]);
	}

	//顾客买的彩票和彩票对比
	cnt=0;
	for (num1=0;num1<=6;num1++)
	{
		for (num2=0;num2<=6;num2++)
		{
			if (arr1[num1]==arr2[num2])
			{
				cnt++;
				break;
			}
		}
	}
	printf("买对的数字个数是%d\n",cnt);

	return 0;
}
