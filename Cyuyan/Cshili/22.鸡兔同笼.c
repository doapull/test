//鸡兔同笼函数练习

#include<stdio.h>




int rabbit(int heads,int legs)
{
	int num=0;
	for (num=0;num<=heads;num++)
	{
		if (4*num+2*(heads-num)==legs)
		{
			return num;
		}
	}
	return -1;
}

int main()
{	
	int heads=0,legs=0;
	printf("请输入有多少个头：");
	scanf("%d",&heads);
	printf("请输入有多少只脚：");
	scanf("%d",&legs);
	int num=rabbit(heads,legs);
	printf("兔有%d只，鸡有%d只\n",num,heads-num);


	return 0;
}

