#include<stdio.h>

int main()
{
	int num=0;
	int i=7;
	int arr[8];
	int y=0;
	printf("输入一个整数：");
	scanf("%d",&num);
//	printf("输入的num:%d\n",num);

	for (i;i>=0;i--)
	{
		arr[i]=num%2;
		num=num/2;
//		printf("i的值：%d\n",i);
//		printf("%d\n",arr[i]);
	}

	//输出数组
	int *p;
    	p = arr;
   	for(y;y<8;y++)
    	{
       		printf("%d",*(p+y));
   	}
	printf("\n");

	return 0;
}
